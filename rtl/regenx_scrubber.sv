`timescale 1ns/1ps

// regenx_scrubber.sv - online patrol and error-triggered healing.
//
// One target at a time, only when the host is idle (the host is stalled for the
// ~40 cycles a row takes). For a logical row:
//   1. read the word through ECC and keep the corrected data. If ECC says the word is
//      uncorrectable the data is gone: the row is marked unavailable, nothing is ever
//      migrated, and ev_lost / lost_row report it (sticky flag lives in regenx_status_regs)
//   2. run a short destructive march on the raw word (0,1,0,checker,~checker)
//   3. write the data back and check it
//   4. if anything failed: move the row to a healthy spare (data copied across),
//      else fall back to ECC-assist for a single bad bit, else mark unavailable
// Unused spares get the march only, so they are known-good when needed.
// Work comes from a patrol round (kick or timer) or from a hint raised by the
// host controller when a read needed correction.

module regenx_scrubber
    import regenx_pkg::*;
#(
    parameter bit ECC_EN = 1'b1,
    parameter int PW     = CW,
    parameter int PERIOD = 0                    // cycles between automatic rounds, 0 = off
) (
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  enable,
    input  logic                  kick,
    input  logic                  init_done,
    input  logic                  host_idle,
    input  logic                  hint_valid,
    input  logic [LAW-1:0]        hint_row,
    output logic                  busy,

    output logic                  mem_en,
    output logic                  mem_we,
    output logic [PAW-1:0]        mem_addr,
    output logic [PW-1:0]         mem_wdata,
    input  logic [PW-1:0]         mem_rdata,

    input  logic [LROWS*PAW-1:0]  l2p_flat,
    input  logic [LROWS-1:0]      assist,
    input  logic [LROWS-1:0]      unavail,
    output logic                  rm_valid,
    output logic [1:0]            rm_kind,
    output logic [LAW-1:0]        rm_row,
    output logic [PAW-1:0]        rm_phys,

    input  logic                  have_free,
    input  logic                  free_idx,
    input  logic [SPARES-1:0]     spare_used,
    input  logic [SPARES-1:0]     spare_bad,
    output logic                  take_valid,
    output logic                  take_idx,
    output logic [LAW-1:0]        take_row,
    output logic                  rel_valid,
    output logic                  rel_idx,

    output logic                  log_valid,
    output logic [PAW-1:0]        log_row,
    output logic [PW-1:0]         log_mask,

    output logic                  ev_check,
    output logic                  ev_fault,
    output logic                  ev_migrate,
    output logic                  ev_round,
    output logic                  ev_lost,
    output logic [LAW-1:0]        lost_row
);
    typedef enum logic [4:0] {
        SC_IDLE, SC_SEL, SC_RD0, SC_RD0W, SC_LOST,
        SC_TW, SC_TR, SC_TC,
        SC_RW, SC_RR, SC_RC,
        SC_DEC, SC_MIG, SC_MW, SC_MR, SC_MC, SC_FIN
    } state_t;
    state_t state;

    logic [PW-1:0] chk;
    always_comb for (int i = 0; i < PW; i++) chk[i] = (i % 2) == 1;

    logic           is_spare, mig_sp, rest_fail, round_on, hint_pend;
    logic [LAW-1:0] tgt_row, hint_q;
    logic           tgt_sp;
    logic [PAW-1:0] phys_q;
    logic [2:0]     step;
    logic [PW-1:0]  fail_mask;
    logic [7:0]     data_q;
    logic [4:0]     ptr;
    logic [31:0]    tmr;

    function automatic int ones(input logic [PW-1:0] v);
        int n = 0;
        for (int i = 0; i < PW; i++) n += int'(v[i]);
        return n;
    endfunction

    logic [PW-1:0] pat;
    always_comb begin
        case (step)
            3'd0:    pat = '0;
            3'd1:    pat = '1;
            3'd2:    pat = '0;
            3'd3:    pat = chk;
            default: pat = ~chk;
        endcase
    end

    assign lost_row = tgt_row;

    logic [PW-1:0] enc_word;
    logic [7:0]    rd_data;
    /* verilator lint_off UNUSEDSIGNAL */
    logic          rd_fixed;
    /* verilator lint_on UNUSEDSIGNAL */
    logic          rd_bad;
    regenx_ecc_enc #(.ECC_EN(ECC_EN), .PW(PW)) u_enc (.data(data_q), .word(enc_word));
    regenx_ecc_dec #(.ECC_EN(ECC_EN), .PW(PW)) u_dec (.word(mem_rdata), .data(rd_data),
                                                      .corrected(rd_fixed), .uncorrectable(rd_bad));

    logic failed;
    assign failed = (fail_mask != '0) || rest_fail;

    // ---- memory port ----
    always_comb begin
        mem_en    = 1'b0;
        mem_we    = 1'b0;
        mem_addr  = phys_q;
        mem_wdata = pat;
        case (state)
            SC_RD0, SC_TR, SC_RR: mem_en = 1'b1;
            SC_TW:                begin mem_en = 1'b1; mem_we = 1'b1; end
            SC_RW:                begin mem_en = 1'b1; mem_we = 1'b1; mem_wdata = enc_word; end
            SC_MW:                begin mem_en = 1'b1; mem_we = 1'b1; mem_wdata = enc_word;
                                        mem_addr = PAW'(LROWS) + PAW'(mig_sp); end
            SC_MR:                begin mem_en = 1'b1; mem_addr = PAW'(LROWS) + PAW'(mig_sp); end
            default: ;
        endcase
    end

    // ---- side effects, all decided from the current state ----
    always_comb begin
        rm_valid = 1'b0; rm_kind = WK_IDENT; rm_row = tgt_row; rm_phys = '0;
        take_valid = 1'b0; take_idx = mig_sp; take_row = tgt_row;
        rel_valid = 1'b0; rel_idx = 1'b0;
        log_valid = 1'b0; log_row = phys_q; log_mask = fail_mask;
        ev_check = 1'b0; ev_fault = 1'b0; ev_migrate = 1'b0; ev_lost = 1'b0;

        case (state)
            // uncorrectable read: no data to preserve, so no migration. The row is retired.
            SC_LOST: begin
                rm_valid = 1'b1;
                rm_kind  = WK_UNAVAIL;
                ev_lost  = 1'b1;
            end
            SC_DEC: begin
                ev_check = 1'b1;
                if (failed) begin
                    log_valid = 1'b1;
                    log_mask  = (fail_mask == '0) ? '1 : fail_mask;
                    ev_fault  = 1'b1;
                end
            end
            SC_MIG: if (!have_free) begin
                rm_valid = 1'b1;
                rm_kind  = (ECC_EN && !rest_fail && ones(fail_mask) == 1) ? WK_ASSIST : WK_UNAVAIL;
            end
            SC_MC: begin
                if (rd_data == data_q && !rd_bad) begin
                    take_valid = 1'b1;
                    rm_valid   = 1'b1;
                    rm_kind    = WK_SPARE;
                    rm_phys    = PAW'(LROWS) + PAW'(mig_sp);
                    ev_migrate = 1'b1;
                    if (phys_q >= PAW'(LROWS)) begin
                        rel_valid = 1'b1;
                        rel_idx   = phys_q[0];
                    end
                end else begin
                    log_valid = 1'b1;
                    log_row   = PAW'(LROWS) + PAW'(mig_sp);
                    log_mask  = '1;
                end
            end
            default: ;
        endcase
    end

    // ---- round / timer bookkeeping ----
    logic tmr_hit;
    assign tmr_hit = (PERIOD != 0) && enable && init_done && (tmr == 32'(PERIOD - 1));

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            tmr <= '0;
        end else if (tmr_hit) tmr <= '0;
        else if (PERIOD != 0) tmr <= tmr + 32'd1;
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state     <= SC_IDLE;
            busy      <= 1'b0;
            is_spare  <= 1'b0;
            tgt_row   <= '0;
            tgt_sp    <= 1'b0;
            phys_q    <= '0;
            step      <= '0;
            fail_mask <= '0;
            rest_fail <= 1'b0;
            data_q    <= '0;
            mig_sp    <= 1'b0;
            ptr       <= '0;
            round_on  <= 1'b0;
            hint_pend <= 1'b0;
            hint_q    <= '0;
            ev_round  <= 1'b0;
        end else begin
            ev_round <= 1'b0;

            if (hint_valid && enable && !hint_pend) begin
                hint_pend <= 1'b1;
                hint_q    <= hint_row;
            end
            if ((kick || tmr_hit) && enable && init_done && !round_on) begin
                round_on <= 1'b1;
                ptr      <= '0;
            end

            case (state)
                SC_IDLE: if (enable && init_done && host_idle) begin
                    if (hint_pend) begin
                        hint_pend <= 1'b0;
                        tgt_row   <= hint_q;
                        is_spare  <= 1'b0;
                        busy      <= 1'b1;
                        state     <= SC_SEL;
                    end else if (round_on) begin
                        if (ptr == 5'd18) begin
                            round_on <= 1'b0;
                            ev_round <= 1'b1;
                        end else begin
                            ptr   <= ptr + 5'd1;
                            busy  <= 1'b1;
                            state <= SC_SEL;
                            if (ptr < 5'd16) begin
                                is_spare <= 1'b0;
                                tgt_row  <= ptr[3:0];
                            end else begin
                                is_spare <= 1'b1;
                                tgt_sp   <= ptr[0];
                            end
                        end
                    end
                end

                SC_SEL: begin
                    step      <= '0;
                    fail_mask <= '0;
                    rest_fail <= 1'b0;
                    if (!is_spare) begin
                        if (unavail[tgt_row]) state <= SC_FIN;
                        else begin
                            phys_q <= l2p_flat[tgt_row*PAW +: PAW];
                            state  <= SC_RD0;
                        end
                    end else begin
                        if (spare_used[tgt_sp] || spare_bad[tgt_sp]) state <= SC_FIN;
                        else begin
                            phys_q <= PAW'(LROWS) + PAW'(tgt_sp);
                            state  <= SC_TW;
                        end
                    end
                end

                SC_RD0:  state <= SC_RD0W;
                SC_RD0W: begin
                    if (rd_bad) state <= SC_LOST;
                    else begin
                        data_q <= rd_data;
                        state  <= SC_TW;
                    end
                end
                SC_LOST: state <= SC_FIN;

                SC_TW: state <= SC_TR;
                SC_TR: state <= SC_TC;
                SC_TC: begin
                    fail_mask <= fail_mask | (mem_rdata ^ pat);
                    if (step == 3'd4) state <= is_spare ? SC_DEC : SC_RW;
                    else begin
                        step  <= step + 3'd1;
                        state <= SC_TW;
                    end
                end

                SC_RW: state <= SC_RR;
                SC_RR: state <= SC_RC;
                SC_RC: begin
                    if (rd_data != data_q || rd_bad) rest_fail <= 1'b1;
                    state <= SC_DEC;
                end

                SC_DEC: begin
                    if (!failed || is_spare) state <= SC_FIN;
                    else if (assist[tgt_row] && !rest_fail && ones(fail_mask) <= 1) state <= SC_FIN;
                    else state <= SC_MIG;
                end

                SC_MIG: begin
                    if (have_free) begin
                        mig_sp <= free_idx;
                        state  <= SC_MW;
                    end else
                        state <= SC_FIN;
                end
                SC_MW: state <= SC_MR;
                SC_MR: state <= SC_MC;
                SC_MC: state <= (rd_data == data_q && !rd_bad) ? SC_FIN : SC_MIG;

                SC_FIN: begin
                    busy  <= 1'b0;
                    state <= SC_IDLE;
                end

                default: state <= SC_IDLE;
            endcase
        end
    end
endmodule
