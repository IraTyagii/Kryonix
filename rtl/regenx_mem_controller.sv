`timescale 1ns/1ps

// regenx_mem_controller.sv - host side: valid/ready request, valid response,
// one request in flight. IDLE -> XLATE -> ACCESS -> RESP.
// Reads that needed ECC correction are reported so the scrubber can look at the row.

module regenx_mem_controller
    import regenx_pkg::*;
#(
    parameter bit ECC_EN = 1'b1,
    parameter int PW     = CW
) (
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  init_done,
    input  logic                  scrub_busy,

    input  logic                  req_valid,
    output logic                  req_ready,
    input  logic                  req_write,
    input  logic [LAW-1:0]        req_addr,
    input  logic [DW-1:0]         req_wdata,
    output logic                  rsp_valid,
    output logic [DW-1:0]         rsp_rdata,
    output logic                  rsp_error,
    output logic                  rsp_corrected,

    input  logic [LROWS*PAW-1:0]  l2p_flat,
    input  logic [LROWS-1:0]      unavail,

    output logic                  mem_en,
    output logic                  mem_we,
    output logic [PAW-1:0]        mem_addr,
    output logic [PW-1:0]         mem_wdata,
    input  logic [PW-1:0]         mem_rdata,

    output logic                  idle,
    output logic                  hint_valid,
    output logic [LAW-1:0]        hint_row,
    output logic                  ev_fix,
    output logic                  ev_unc
);
    typedef enum logic [1:0] {C_IDLE, C_XLATE, C_ACCESS, C_RESP} state_t;
    state_t state;

    logic            wr_q, err_q;
    logic [LAW-1:0]  addr_q;
    logic [DW-1:0]   wdata_q;
    logic [PAW-1:0]  phys_q;

    assign idle      = (state == C_IDLE);
    assign req_ready = init_done && idle && !scrub_busy;

    regenx_ecc_enc #(.ECC_EN(ECC_EN), .PW(PW)) u_enc (.data(wdata_q), .word(mem_wdata));

    logic [DW-1:0] rd_data;
    logic          rd_fixed, rd_bad;
    regenx_ecc_dec #(.ECC_EN(ECC_EN), .PW(PW)) u_dec (.word(mem_rdata), .data(rd_data),
                                                      .corrected(rd_fixed), .uncorrectable(rd_bad));

    assign mem_en   = (state == C_ACCESS) && !err_q;
    assign mem_we   = wr_q;
    assign mem_addr = phys_q;

    logic read_ok;                                  // a real read happened in RESP
    assign read_ok = (state == C_RESP) && !wr_q && !err_q;

    assign hint_valid = read_ok && (rd_fixed || rd_bad);
    assign hint_row   = addr_q;
    assign ev_fix     = read_ok && rd_fixed;
    assign ev_unc     = read_ok && rd_bad;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state         <= C_IDLE;
            wr_q          <= 1'b0;
            err_q         <= 1'b0;
            addr_q        <= '0;
            wdata_q       <= '0;
            phys_q        <= '0;
            rsp_valid     <= 1'b0;
            rsp_rdata     <= '0;
            rsp_error     <= 1'b0;
            rsp_corrected <= 1'b0;
        end else begin
            rsp_valid     <= 1'b0;
            rsp_error     <= 1'b0;
            rsp_corrected <= 1'b0;
            case (state)
                C_IDLE: if (req_valid && req_ready) begin
                    wr_q    <= req_write;
                    addr_q  <= req_addr;
                    wdata_q <= req_wdata;
                    state   <= C_XLATE;
                end
                C_XLATE: begin
                    phys_q <= l2p_flat[addr_q*PAW +: PAW];
                    err_q  <= unavail[addr_q];
                    state  <= C_ACCESS;
                end
                C_ACCESS: state <= C_RESP;
                C_RESP: begin
                    rsp_valid <= 1'b1;
                    rsp_error <= err_q || (read_ok && rd_bad);
                    rsp_corrected <= read_ok && rd_fixed;
                    rsp_rdata <= read_ok && !rd_bad ? rd_data : '0;
                    state     <= C_IDLE;
                end
            endcase
        end
    end
endmodule
