// regenx_demo_tb.sv - short scripted scenario for the waveform figures (run with +vcd).
//  phase 1: boot with three defects (one dead word line, two single-bit cells)
//  phase 2: clean boot, a cell dies in service, the scrubber migrates the row
`timescale 1ns/1ps

module regenx_demo_tb;
    import regenx_pkg::*;
    logic clk = 0, rst_n = 0;
    always #5 clk = ~clk;
    logic req_valid = 0, req_write = 0, scrub_en = 0, scrub_req = 0;
    logic [3:0] req_addr = 0; logic [7:0] req_wdata = 0;
    wire req_ready, rsp_valid, rsp_error, rsp_corrected, init_done, bist_busy, degraded, scrub_busy;
    wire [7:0] rsp_rdata; wire [31:0] reg_rdata; wire [5:0] fault_count; wire [4:0] remapped_count;
    wire [17:0] dbg_bad_phys; wire [79:0] dbg_map_flat; wire [15:0] dbg_unavail, dbg_assist;
    wire [1:0] dbg_spare_used; wire [2:0] dbg_class;
    logic [NFLT-1:0] f_en = 0; logic [NFLT*4-1:0] f_kind = 0, f_bit = 0; logic [NFLT*PAW-1:0] f_row = 0;
    int phase = 0;

    regenx_top dut (.clk, .rst_n, .req_valid, .req_ready, .req_write, .req_addr, .req_wdata,
        .rsp_valid, .rsp_rdata, .rsp_error, .rsp_corrected, .scrub_en, .scrub_req,
        .status_clear(1'b0), .data_lost(), .reg_addr(4'd0), .reg_rdata, .init_done, .bist_busy, .degraded, .scrub_busy,
        .fault_count, .remapped_count, .dbg_bad_phys, .dbg_map_flat, .dbg_unavail, .dbg_assist,
        .dbg_spare_used, .dbg_class_row(5'd5), .dbg_class,
        .sim_flt_en(f_en), .sim_flt_kind(f_kind), .sim_flt_row(f_row), .sim_flt_bit(f_bit));

    task automatic fault(input int s, input int k, input int r, input int b);
        f_en[s] = 1; f_kind[s*4 +: 4] = 4'(k); f_row[s*PAW +: PAW] = PAW'(r); f_bit[s*4 +: 4] = 4'(b);
    endtask
    task automatic op(input bit w, input int a, input int d);
        @(negedge clk); req_valid = 1; req_write = w; req_addr = 4'(a); req_wdata = 8'(d);
        @(posedge clk); while (!req_ready) @(posedge clk);
        @(negedge clk); req_valid = 0;
        @(posedge clk); while (!rsp_valid) @(posedge clk);
        $display("  %s row %0d -> data %02h err=%b fixed=%b", w ? "WR" : "RD", a, rsp_rdata, rsp_error, rsp_corrected);
    endtask

    initial begin
        if ($test$plusargs("vcd")) begin $dumpfile("sim/regenx_demo.vcd"); $dumpvars(0, regenx_demo_tb); end
        // ---- phase 1 ----
        phase = 1;
        fault(0, FK_SA1, 5, 3); fault(1, FK_ROW1, 14, 0); fault(2, FK_SA0, 2, 4);
        repeat (4) @(posedge clk); rst_n = 1;
        while (!init_done) @(posedge clk);
        $display("phase 1 boot: faults=%0d remapped=%0d degraded=%b map[14]=%0d map[2]=%0d assist[5]=%b",
                 fault_count, remapped_count, degraded, dbg_map_flat[14*5 +: 5], dbg_map_flat[2*5 +: 5], dbg_assist[5]);
        op(1, 14, 8'hC3); op(0, 14, 0);
        op(1, 2, 8'h5A);  op(0, 2, 0);
        op(1, 5, 8'hFF);  op(0, 5, 0);
        repeat (10) @(posedge clk);
        // ---- phase 2 ----
        phase = 2;
        rst_n = 0; f_en = 0; repeat (4) @(posedge clk); rst_n = 1;
        while (!init_done) @(posedge clk);
        scrub_en = 1;
        op(1, 9, 8'h3C); op(1, 4, 8'hA7);
        fault(0, FK_SA1, 9, 3);                         // cell dies while holding 3C
        op(0, 9, 0);                                    // corrected by ECC, raises a scrub hint
        repeat (400) @(posedge clk);                    // hint-triggered heal
        $display("phase 2 heal: map[9]=%0d bad9=%b", dbg_map_flat[9*5 +: 5], dbg_bad_phys[9]);
        op(0, 9, 0); op(0, 4, 0);
        repeat (20) @(posedge clk);
        $finish;
    end
endmodule
