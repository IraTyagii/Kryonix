`timescale 1ns/1ps

// regenx_mem_array.sv - physical storage, 16 normal + 2 spare words, one-cycle read.
// Plain flops, not an SRAM macro. The defect model only exists with -DREGENX_SIM.

module regenx_mem_array
    import regenx_pkg::*;
#(
    parameter int DEPTH = PROWS,
    parameter int WIDTH = CW
) (
    input  logic             clk,
    input  logic             rst_n,
    input  logic             en,
    input  logic             we,
    input  logic [PAW-1:0]   addr,
    input  logic [WIDTH-1:0] wdata,
    output logic [WIDTH-1:0] rdata,
    output logic             rvalid
`ifdef REGENX_SIM
  , input  logic [NFLT-1:0]     flt_en,
    input  logic [NFLT*4-1:0]   flt_kind,
    input  logic [NFLT*PAW-1:0] flt_row,
    input  logic [NFLT*4-1:0]   flt_bit
`endif
);
    // not reset on purpose, the BIST writes every word before it reads it
    logic [WIDTH-1:0] cells [0:DEPTH-1];

    logic [WIDTH-1:0] wr_val, rd_val, old_val;
    logic             alias_hit;
    logic [PAW-1:0]   alias_row;

    always_comb begin
        old_val   = (int'(addr) < DEPTH) ? cells[addr] : '0;
        wr_val    = wdata;
        rd_val    = old_val;
        alias_hit = 1'b0;
        alias_row = '0;
`ifdef REGENX_SIM
        for (int f = 0; f < NFLT; f++) begin
            logic [3:0]   k;
            logic [PAW-1:0] r;
            int           b;
            k = flt_kind[f*4 +: 4];
            r = flt_row[f*PAW +: PAW];
            b = int'(flt_bit[f*4 +: 4]);
            if (flt_en[f] && r == addr) begin
                if (b < WIDTH) begin
                    case (k)
                        FK_SA0:    rd_val[b] = 1'b0;
                        FK_SA1:    rd_val[b] = 1'b1;
                        FK_TF_UP:  if (!old_val[b] && wdata[b]) wr_val[b] = old_val[b];
                        FK_TF_DN:  if (old_val[b] && !wdata[b]) wr_val[b] = old_val[b];
                        FK_COUPLE: wr_val[b] = wdata[(b == WIDTH-1) ? b-1 : b+1];
                        default: ;
                    endcase
                end
                case (k)
                    FK_ROW0:  rd_val = '0;
                    FK_ROW1:  rd_val = '1;
                    FK_ALIAS: begin
                        alias_hit = 1'b1;
                        alias_row = (r == PAW'(DEPTH-1)) ? '0 : r + 1'b1;
                    end
                    default: ;
                endcase
            end
        end
`endif
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            rdata  <= '0;
            rvalid <= 1'b0;
        end else begin
            rvalid <= 1'b0;
            if (en && int'(addr) < DEPTH) begin
                if (we) begin
                    cells[addr] <= wr_val;
                    if (alias_hit) cells[alias_row] <= wdata;
                end else begin
                    rdata  <= rd_val;
                    rvalid <= 1'b1;
                end
            end
        end
    end
endmodule
