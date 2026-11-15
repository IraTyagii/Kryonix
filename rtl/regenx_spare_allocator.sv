`timescale 1ns/1ps

// regenx_spare_allocator.sv - bookkeeping for the two spare rows.
// A spare is usable if it is not marked bad and not already handed out.

module regenx_spare_allocator
    import regenx_pkg::*;
(
    input  logic                 clk,
    input  logic                 rst_n,
    input  logic [SPARES-1:0]    spare_bad,
    input  logic                 take_valid,
    input  logic                 take_idx,
    input  logic [LAW-1:0]       take_row,
    input  logic                 rel_valid,
    input  logic                 rel_idx,
    output logic [SPARES-1:0]    used,
    output logic [LAW-1:0]       owner0,
    output logic [LAW-1:0]       owner1,
    output logic                 have_free,
    output logic                 free_idx
);
    logic [SPARES-1:0] avail;
    assign avail     = ~used & ~spare_bad;
    assign have_free = |avail;
    assign free_idx  = avail[0] ? 1'b0 : 1'b1;      // spare 16 before spare 17

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            used   <= '0;
            owner0 <= '0;
            owner1 <= '0;
        end else begin
            if (rel_valid) used[rel_idx] <= 1'b0;
            if (take_valid) begin
                used[take_idx] <= 1'b1;
                if (take_idx) owner1 <= take_row;
                else          owner0 <= take_row;
            end
        end
    end
endmodule
