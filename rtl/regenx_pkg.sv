`timescale 1ns/1ps

// regenx_pkg.sv - constants and types shared across REGEN-X
package regenx_pkg;

    localparam int LROWS  = 16;           // rows the host can see
    localparam int SPARES = 2;
    localparam int PROWS  = LROWS + SPARES;
    localparam int DW     = 8;
    localparam int LAW    = 4;
    localparam int PAW    = 5;
    localparam int CW     = 13;           // SECDED word: 8 data + 4 hamming + overall parity
    /* verilator lint_off UNUSEDPARAM */
    localparam int NFLT   = 3;            // fault slots in the simulation model (sim only)
    /* verilator lint_on UNUSEDPARAM */

    // defect kinds the simulation fault model can inject (never synthesized)
    typedef enum logic [3:0] {
        FK_NONE   = 4'd0,
        FK_SA0    = 4'd1,                 // bit always reads 0
        FK_SA1    = 4'd2,
        FK_TF_UP  = 4'd3,                 // bit cannot go 0 -> 1
        FK_TF_DN  = 4'd4,                 // bit cannot go 1 -> 0
        FK_ROW0   = 4'd5,                 // dead word line, whole word reads 0
        FK_ROW1   = 4'd6,
        FK_ALIAS  = 4'd7,                 // write to this row also lands in the next one
        FK_COUPLE = 4'd8                  // bit copies its neighbour on write
    } fault_kind_t;

    // what the BIST signature of a row looks like (see regenx_fault_manager)
    typedef enum logic [2:0] {
        FC_NONE     = 3'd0,
        FC_STUCK_HI = 3'd1,               // reads 1 where 0 was expected, from the first r0
        FC_NO_RISE  = 3'd2,               // SA0 or 0->1 transition fault
        FC_NO_FALL  = 3'd3,               // 1->0 transition fault
        FC_PATTERN  = 3'd4,               // only shows with checkerboard data (coupling)
        FC_MULTI    = 3'd5,               // more than one bit or a whole word
        FC_ONLINE   = 3'd6                // found at run time, no march signature
    } fault_class_t;

    // update kinds for the logical-to-physical table
    typedef enum logic [1:0] {
        WK_IDENT   = 2'd0,
        WK_SPARE   = 2'd1,
        WK_ASSIST  = 2'd2,                // keep the row, lean on ECC
        WK_UNAVAIL = 2'd3
    } remap_kind_t;

endpackage
