`timescale 1ns/1ps

// regenx_bist_controller.sv - March C- engine, runs on its own right after reset.
//
//   M0  any  (w B)
//   M1  up   (r B,  w ~B)
//   M2  up   (r ~B, w B)
//   M3  down (r B,  w ~B)
//   M4  down (r ~B, w B)
//   M5  any  (r B)
//
// pass 0: B = all zeros (classic March C-)
// pass 1: B = checkerboard, catches bit-to-bit coupling inside a word
// pass 2: clear, leaves every word at zero so ECC sees valid codewords
// Walk order is the two spares first, then rows 0..15 (down is the exact reverse).

module regenx_bist_controller
    import regenx_pkg::*;
#(
    parameter int PW = CW
) (
    input  logic            clk,
    input  logic            rst_n,
    output logic            done,
    // raw physical port, bypasses remap and ECC
    output logic            mem_en,
    output logic            mem_we,
    output logic [PAW-1:0]  mem_addr,
    output logic [PW-1:0]   mem_wdata,
    input  logic [PW-1:0]   mem_rdata,
    // mismatch report, one pulse per failing read
    output logic            flt_valid,
    output logic [PAW-1:0]  flt_row,
    output logic [PW-1:0]   flt_mask,
    output logic [2:0]      flt_elem,       // 1..5 = element whose read failed
    output logic [1:0]      flt_pass
);
    typedef enum logic [2:0] {S_RD, S_CMP, S_WR, S_DONE} state_t;
    state_t state;

    logic [1:0] pass;
    logic [2:0] elem;
    logic [4:0] idx;

    logic [PW-1:0] chk;
    always_comb for (int i = 0; i < PW; i++) chk[i] = (i % 2) == 1;

    logic [PW-1:0] bg, nbg, rd_exp, wr_dat;
    assign bg     = (pass == 2'd1) ? chk : '0;
    assign nbg    = ~bg;
    assign rd_exp = (elem == 3'd1 || elem == 3'd3 || elem == 3'd5) ? bg : nbg;
    assign wr_dat = (elem == 3'd0 || elem == 3'd2 || elem == 3'd4) ? bg : nbg;

    logic       up;
    logic [4:0] pos, phys;
    assign up   = (elem != 3'd3) && (elem != 3'd4);
    assign pos  = up ? idx : 5'd17 - idx;
    assign phys = (pos < 5'd2) ? pos + 5'd16 : pos - 5'd2;

    assign done      = (state == S_DONE);
    assign mem_en    = (state == S_RD) || (state == S_WR);
    assign mem_we    = (state == S_WR);
    assign mem_addr  = phys;
    assign mem_wdata = wr_dat;

    // what happens when the current address is finished (shared by the read and write paths)
    logic       last_addr;
    logic [4:0] n_idx;
    logic [2:0] n_elem;
    logic [1:0] n_pass;
    state_t     n_state;
    assign last_addr = (idx == 5'd17);

    always_comb begin
        n_idx   = idx;
        n_elem  = elem;
        n_pass  = pass;
        n_state = state;
        if (!last_addr) begin
            n_idx   = idx + 5'd1;
            if (elem == 3'd0) n_state = S_WR;
            else              n_state = S_RD;
        end else begin
            n_idx = 5'd0;
            if (pass == 2'd2) begin
                n_state = S_DONE;
            end else if (elem != 3'd5) begin
                n_elem  = elem + 3'd1;
                n_state = S_RD;
            end else begin
                n_pass  = pass + 2'd1;
                n_elem  = 3'd0;
                n_state = S_WR;
            end
        end
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state     <= S_WR;
            pass      <= 2'd0;
            elem      <= 3'd0;
            idx       <= 5'd0;
            flt_valid <= 1'b0;
            flt_row   <= '0;
            flt_mask  <= '0;
            flt_elem  <= '0;
            flt_pass  <= '0;
        end else begin
            flt_valid <= 1'b0;
            case (state)
                S_RD: state <= S_CMP;

                S_CMP: begin
                    if (mem_rdata != rd_exp) begin
                        flt_valid <= 1'b1;
                        flt_row   <= phys;
                        flt_mask  <= mem_rdata ^ rd_exp;
                        flt_elem  <= elem;
                        flt_pass  <= pass;
                    end
                    if (elem == 3'd5) begin
                        idx <= n_idx; elem <= n_elem; pass <= n_pass; state <= n_state;
                    end else
                        state <= S_WR;
                end

                S_WR: begin
                    idx <= n_idx; elem <= n_elem; pass <= n_pass; state <= n_state;
                end

                default: ;
            endcase
        end
    end
endmodule
