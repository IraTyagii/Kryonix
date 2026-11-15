// regenx_if.sv - one interface for the whole DUT: host port, healing control,
// status, and the simulation-only fault injection pins.
`timescale 1ns/1ps

interface regenx_if (input logic clk);
    import regenx_pkg::*;

    logic        rst_n = 1'b0;

    // host
    logic        req_valid = 1'b0;
    logic        req_ready;
    logic        req_write = 1'b0;
    logic [3:0]  req_addr  = '0;
    logic [7:0]  req_wdata = '0;
    logic        rsp_valid;
    logic [7:0]  rsp_rdata;
    logic        rsp_error;
    logic        rsp_corrected;

    // healing control and status
    logic        scrub_en  = 1'b0;
    logic        scrub_req = 1'b0;
    logic        init_done, degraded, scrub_busy, data_lost;
    logic [15:0] dbg_unavail, dbg_assist;
    logic [79:0] dbg_map_flat;
    logic [17:0] dbg_bad_phys;
    logic [5:0]  fault_count;
    logic [4:0]  remapped_count;

    // fault injection
    logic [NFLT-1:0]     flt_en   = '0;
    logic [NFLT*4-1:0]   flt_kind = '0;
    logic [NFLT*PAW-1:0] flt_row  = '0;
    logic [NFLT*4-1:0]   flt_bit  = '0;

    clocking drv_cb @(posedge clk);
        default input #1step output #1;
        output req_valid, req_write, req_addr, req_wdata, scrub_en, scrub_req;
        input  req_ready, rsp_valid, rsp_rdata, rsp_error, rsp_corrected, init_done;
    endclocking

    clocking mon_cb @(posedge clk);
        default input #1step;
        input req_valid, req_ready, req_write, req_addr, req_wdata;
        input rsp_valid, rsp_rdata, rsp_error, rsp_corrected;
        input init_done, dbg_unavail, dbg_assist, degraded, scrub_busy;
    endclocking

    function automatic void clear_faults();
        flt_en = '0; flt_kind = '0; flt_row = '0; flt_bit = '0;
    endfunction

    function automatic void set_fault(input int slot, input int kind, input int row, input int bitn);
        flt_en[slot]               = 1'b1;
        flt_kind[slot*4 +: 4]      = 4'(kind);
        flt_row[slot*PAW +: PAW]   = PAW'(row);
        flt_bit[slot*4 +: 4]       = 4'(bitn);
    endfunction

    // reset, then wait until the boot sequence has finished
    task automatic boot(input int timeout = 4000);
        rst_n = 1'b0;
        repeat (4) @(posedge clk);
        rst_n = 1'b1;
        for (int i = 0; i < timeout && !init_done; i++) @(posedge clk);
    endtask
endinterface
