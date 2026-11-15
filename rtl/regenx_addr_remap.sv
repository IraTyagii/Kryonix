`timescale 1ns/1ps

// regenx_addr_remap.sv - logical -> physical table plus a state flag per logical row.
//   remapped : row lives in a spare
//   assist   : row stays where it is, ECC covers its one bad bit
//   unavail  : nothing left to give this row, host gets an error

module regenx_addr_remap
    import regenx_pkg::*;
(
    input  logic                   clk,
    input  logic                   rst_n,
    input  logic                   wr_valid,
    input  logic [1:0]             wr_kind,
    input  logic [LAW-1:0]         wr_row,
    input  logic [PAW-1:0]         wr_phys,
    output logic [LROWS*PAW-1:0]   l2p_flat,
    output logic [LROWS-1:0]       remapped,
    output logic [LROWS-1:0]       assist,
    output logic [LROWS-1:0]       unavail,
    output logic [4:0]             remapped_cnt,
    output logic                   degraded
);
    logic [PAW-1:0] l2p [0:LROWS-1];

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            for (int i = 0; i < LROWS; i++) l2p[i] <= PAW'(i);
            remapped <= '0;
            assist   <= '0;
            unavail  <= '0;
        end else if (wr_valid) begin
            case (wr_kind)
                WK_IDENT: begin
                    l2p[wr_row]      <= {1'b0, wr_row};
                    remapped[wr_row] <= 1'b0;
                    assist[wr_row]   <= 1'b0;
                    unavail[wr_row]  <= 1'b0;
                end
                WK_SPARE: begin
                    l2p[wr_row]      <= wr_phys;
                    remapped[wr_row] <= 1'b1;
                    assist[wr_row]   <= 1'b0;
                    unavail[wr_row]  <= 1'b0;
                end
                WK_ASSIST:  assist[wr_row]  <= 1'b1;
                WK_UNAVAIL: unavail[wr_row] <= 1'b1;
            endcase
        end
    end

    always_comb begin
        for (int i = 0; i < LROWS; i++) l2p_flat[i*PAW +: PAW] = l2p[i];
        remapped_cnt = '0;
        for (int i = 0; i < LROWS; i++) remapped_cnt = remapped_cnt + 5'(remapped[i]);
    end

    assign degraded = (|assist) | (|unavail);
endmodule
