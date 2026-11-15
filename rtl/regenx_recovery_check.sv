`timescale 1ns/1ps

// regenx_recovery_check.sv - proves a repaired logical row really works.
// Goes through the same remap + ECC path the host will use, writes four patterns
// and reads each back. The row is left holding zero.

module regenx_recovery_check
    import regenx_pkg::*;
#(
    parameter bit ECC_EN = 1'b1,
    parameter int PW     = CW
) (
    input  logic                 clk,
    input  logic                 rst_n,
    input  logic                 start,
    input  logic [LAW-1:0]       row,
    input  logic [LROWS*PAW-1:0] l2p_flat,
    output logic                 busy,
    output logic                 done,      // one cycle, with pass valid
    output logic                 pass,
    output logic                 mem_en,
    output logic                 mem_we,
    output logic [PAW-1:0]       mem_addr,
    output logic [PW-1:0]        mem_wdata,
    input  logic [PW-1:0]        mem_rdata
);
    typedef enum logic [2:0] {R_IDLE, R_WR, R_RD, R_CMP, R_FIN} state_t;
    state_t state;

    logic [LAW-1:0] row_q;
    logic [1:0]     k;
    logic           fail;

    logic [7:0] pat;
    always_comb begin
        case (k)
            2'd0:    pat = 8'h55;
            2'd1:    pat = 8'hAA;
            2'd2:    pat = 8'hFF;
            default: pat = 8'h00;
        endcase
    end

    logic [7:0] rd_data;
    /* verilator lint_off UNUSEDSIGNAL */
    logic       rd_fixed;
    /* verilator lint_on UNUSEDSIGNAL */
    logic       rd_bad;
    regenx_ecc_enc #(.ECC_EN(ECC_EN), .PW(PW)) u_enc (.data(pat), .word(mem_wdata));
    regenx_ecc_dec #(.ECC_EN(ECC_EN), .PW(PW)) u_dec (.word(mem_rdata), .data(rd_data),
                                                      .corrected(rd_fixed), .uncorrectable(rd_bad));

    assign mem_addr = l2p_flat[row_q*PAW +: PAW];
    assign mem_en   = (state == R_WR) || (state == R_RD);
    assign mem_we   = (state == R_WR);
    assign busy     = (state != R_IDLE);
    assign done     = (state == R_FIN);
    assign pass     = !fail;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state <= R_IDLE;
            row_q <= '0;
            k     <= '0;
            fail  <= 1'b0;
        end else begin
            case (state)
                R_IDLE: if (start) begin
                    row_q <= row;
                    k     <= 2'd0;
                    fail  <= 1'b0;
                    state <= R_WR;
                end
                R_WR:  state <= R_RD;
                R_RD:  state <= R_CMP;
                R_CMP: begin
                    if (rd_data != pat || rd_bad) fail <= 1'b1;
                    if (k == 2'd3) state <= R_FIN;
                    else begin
                        k     <= k + 2'd1;
                        state <= R_WR;
                    end
                end
                R_FIN: state <= R_IDLE;
                default: state <= R_IDLE;
            endcase
        end
    end
endmodule
