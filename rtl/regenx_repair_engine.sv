`timescale 1ns/1ps

// regenx_repair_engine.sv - turns the BIST result into a repaired map at boot.
//
// 1. rows that ECC cannot cover (multi-bit, whole word) get spares first,
//    anything left over is marked unavailable
// 2. rows with a single bad bit get a spare if one is still free, otherwise
//    they stay put in ECC-assist mode
// 3. every remapped or assisted row is verified through the host path; a failed
//    spare is thrown out and the row is decided again
// Without ECC every bad row counts as severe and rule 1 handles them in row order.

module regenx_repair_engine
    import regenx_pkg::*;
(
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  bist_done,
    output logic                  done,

    input  logic [PROWS-1:0]      bad_phys,
    input  logic [PROWS-1:0]      severe_phys,
    input  logic [LROWS*PAW-1:0]  l2p_flat,
    input  logic [LROWS-1:0]      remapped,
    input  logic [LROWS-1:0]      assist,

    input  logic                  have_free,
    input  logic                  free_idx,
    output logic                  take_valid,
    output logic                  take_idx,
    output logic [LAW-1:0]        take_row,
    output logic                  rel_valid,
    output logic                  rel_idx,

    output logic                  rm_valid,
    output logic [1:0]            rm_kind,
    output logic [LAW-1:0]        rm_row,
    output logic [PAW-1:0]        rm_phys,

    output logic                  log_valid,
    output logic [PAW-1:0]        log_row,

    output logic                  rec_start,
    output logic [LAW-1:0]        rec_row,
    input  logic                  rec_done,
    input  logic                  rec_pass,

    output logic                  ev_verify_fail
);
    typedef enum logic [2:0] {
        RP_WAIT, RP_SCAN, RP_VER, RP_VWAIT, RP_FIX, RP_REDO, RP_DONE
    } state_t;
    state_t state;

    logic [LAW-1:0] row;
    logic           mild;           // second scan: single-bit rows
    logic           last_row;
    assign last_row = (row == LAW'(LROWS-1));
    assign done     = (state == RP_DONE);

    logic [PAW-1:0] cur_phys;
    assign cur_phys = l2p_flat[row*PAW +: PAW];

    always_comb begin
        take_valid = 1'b0; take_idx = free_idx; take_row = row;
        rel_valid  = 1'b0; rel_idx  = 1'b0;
        rm_valid   = 1'b0; rm_kind  = WK_IDENT; rm_row = row; rm_phys = '0;
        log_valid  = 1'b0; log_row  = cur_phys;
        rec_start  = 1'b0; rec_row  = row;
        ev_verify_fail = 1'b0;

        case (state)
            RP_SCAN: begin
                if (bad_phys[PAW'(row)] && (mild ? !severe_phys[PAW'(row)] : severe_phys[PAW'(row)])) begin
                    rm_valid = 1'b1;
                    if (have_free) begin
                        take_valid = 1'b1;
                        rm_kind    = WK_SPARE;
                        rm_phys    = PAW'(LROWS) + PAW'(free_idx);
                    end else
                        rm_kind = mild ? WK_ASSIST : WK_UNAVAIL;
                end
            end

            RP_VER: rec_start = remapped[row] || assist[row];

            RP_VWAIT: ev_verify_fail = rec_done && !rec_pass;

            RP_FIX: begin
                if (remapped[row]) begin
                    log_valid = 1'b1;                   // cur_phys is the spare that failed
                    rel_valid = 1'b1;
                    rel_idx   = cur_phys[0];
                    rm_valid  = 1'b1;
                    rm_kind   = WK_IDENT;
                end else begin
                    rm_valid = 1'b1;                    // assist row that failed verification
                    rm_kind  = WK_UNAVAIL;
                end
            end

            RP_REDO: begin
                rm_valid = 1'b1;
                if (have_free) begin
                    take_valid = 1'b1;
                    rm_kind    = WK_SPARE;
                    rm_phys    = PAW'(LROWS) + PAW'(free_idx);
                end else
                    rm_kind = severe_phys[PAW'(row)] ? WK_UNAVAIL : WK_ASSIST;
            end

            default: ;
        endcase
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state <= RP_WAIT;
            row   <= '0;
            mild  <= 1'b0;
        end else begin
            case (state)
                RP_WAIT: if (bist_done) begin
                    row   <= '0;
                    mild  <= 1'b0;
                    state <= RP_SCAN;
                end

                RP_SCAN: begin
                    if (last_row) begin
                        row <= '0;
                        if (mild) state <= RP_VER;
                        else      mild  <= 1'b1;
                    end else
                        row <= row + 1'b1;
                end

                RP_VER: begin
                    if (rec_start)    state <= RP_VWAIT;
                    else if (last_row) state <= RP_DONE;
                    else               row   <= row + 1'b1;
                end

                RP_VWAIT: if (rec_done) begin
                    if (rec_pass) begin
                        if (last_row) state <= RP_DONE;
                        else begin row <= row + 1'b1; state <= RP_VER; end
                    end else
                        state <= RP_FIX;
                end

                RP_FIX: begin
                    if (remapped[row]) state <= RP_REDO;
                    else if (last_row) state <= RP_DONE;
                    else begin row <= row + 1'b1; state <= RP_VER; end
                end

                // after the redo the row is verified again; an unavailable row is
                // skipped by RP_VER because neither flag is set
                RP_REDO: state <= RP_VER;

                default: ;
            endcase
        end
    end
endmodule
