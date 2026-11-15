`timescale 1ns/1ps

// regenx_status_regs.sv - read-only diagnostic registers plus event counters.
//   0 STATUS        [0] init_done [1] bist_busy [2] degraded [3] unrepairable rows present
//                   [4] scrub_busy [5] ecc_en [6] data_lost
//   1 FAULT_COUNT   distinct bad physical rows
//   2 LAST_FAULT    [4:0] physical row, [7:5] class, [8] valid
//   3 SPARE_STATUS  [1:0] used, [3:2] bad, [7:4] owner of spare 0, [11:8] owner of spare 1
//   4 REPAIR_STATUS [4:0] remapped, [9:5] ecc-assist rows, [14:10] unavailable rows,
//                   [19:15] verify failures
//   5 UNAVAIL_MAP   per logical row
//   6 ECC_STATS     [15:0] corrected reads, [31:16] uncorrectable reads
//   7 SCRUB_STATS   [7:0] rows checked, [15:8] faults found, [23:16] migrations,
//                   [31:24] rounds
//   8 LOST_MAP      [15:0] logical rows whose data was lost (sticky), [23:16] loss events
//   9..15           read as zero
// STATUS[6] data_lost is sticky: set by an uncorrectable word met by the scrubber, cleared by
// reset or a status_clear pulse (which also clears the counters). Rows stay unavailable.

module regenx_status_regs
    import regenx_pkg::*;
(
    input  logic              clk,
    input  logic              rst_n,
    input  logic              status_clear,
    input  logic [3:0]        reg_addr,
    output logic [31:0]       reg_rdata,

    input  logic              init_done,
    input  logic              bist_busy,
    input  logic              degraded,
    input  logic              scrub_busy,
    input  logic              ecc_en,
    input  logic [5:0]        fault_count,
    input  logic              last_valid,
    input  logic [PAW-1:0]    last_row,
    input  logic [2:0]        last_class,
    input  logic [SPARES-1:0] spare_used,
    input  logic [SPARES-1:0] spare_bad,
    input  logic [LAW-1:0]    owner0,
    input  logic [LAW-1:0]    owner1,
    input  logic [4:0]        remapped_cnt,
    input  logic [LROWS-1:0]  assist,
    input  logic [LROWS-1:0]  unavail,

    input  logic              ev_fix,
    input  logic              ev_unc,
    input  logic              ev_verify_fail,
    input  logic              ev_check,
    input  logic              ev_fault,
    input  logic              ev_migrate,
    input  logic              ev_round,
    input  logic              ev_lost,
    input  logic [LAW-1:0]    lost_row,
    output logic              data_lost
);
    logic [15:0] n_fix, n_unc;
    logic [7:0]  n_chk, n_flt, n_mig, n_rnd;
    logic [4:0]  n_vfail;
    logic [7:0]  n_lost;
    logic [LROWS-1:0] lost_map;

    function automatic logic [4:0] count16(input logic [LROWS-1:0] v);
        logic [4:0] n = '0;
        for (int i = 0; i < LROWS; i++) n += 5'(v[i]);
        return n;
    endfunction

    always_ff @(posedge clk) begin
        if (!rst_n || status_clear) begin
            n_fix <= '0; n_unc <= '0; n_chk <= '0; n_flt <= '0;
            n_mig <= '0; n_rnd <= '0; n_vfail <= '0; n_lost <= '0;
            lost_map <= '0;
            data_lost <= 1'b0;
        end
        if (rst_n && !status_clear) begin
            if (ev_lost) begin
                data_lost <= 1'b1;
                lost_map[lost_row] <= 1'b1;
                if (n_lost != '1) n_lost <= n_lost + 1'b1;
            end
            if (ev_fix        && n_fix != '1)   n_fix   <= n_fix + 1'b1;
            if (ev_unc        && n_unc != '1)   n_unc   <= n_unc + 1'b1;
            if (ev_check      && n_chk != '1)   n_chk   <= n_chk + 1'b1;
            if (ev_fault      && n_flt != '1)   n_flt   <= n_flt + 1'b1;
            if (ev_migrate    && n_mig != '1)   n_mig   <= n_mig + 1'b1;
            if (ev_round      && n_rnd != '1)   n_rnd   <= n_rnd + 1'b1;
            if (ev_verify_fail && n_vfail != '1) n_vfail <= n_vfail + 1'b1;
        end
    end

    always_comb begin
        case (reg_addr)
            4'd0: reg_rdata = {25'd0, data_lost, ecc_en, scrub_busy, |unavail, degraded, bist_busy, init_done};
            4'd1: reg_rdata = {26'd0, fault_count};
            4'd2: reg_rdata = {23'd0, last_valid, last_class, last_row};
            4'd3: reg_rdata = {20'd0, owner1, owner0, spare_bad, spare_used};
            4'd4: reg_rdata = {12'd0, n_vfail, count16(unavail), count16(assist), remapped_cnt};
            4'd5: reg_rdata = {16'd0, unavail};
            4'd6: reg_rdata = {n_unc, n_fix};
            4'd7: reg_rdata = {n_rnd, n_mig, n_flt, n_chk};
            4'd8: reg_rdata = {8'd0, n_lost, lost_map};
            default: reg_rdata = 32'd0;
        endcase
    end
endmodule
