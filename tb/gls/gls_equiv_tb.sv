// gls_equiv_tb.sv - runs the RTL and the synthesized netlist side by side with the
// same stimulus and compares every output on every cycle.
// The netlist is synthesized with the fault-injection model included (run_synth.sh sim),
// so every fault kind can be driven into both copies through the same ports.

`timescale 1ns/1ps

module gls_equiv_tb;
    import regenx_pkg::*;
    parameter int SCEN = 40;

    logic clk = 0, rst_n = 0;
    always #5 clk = ~clk;

    logic        req_valid = 0, req_write = 0, scrub_en = 0, scrub_req = 0;
    logic [3:0]  req_addr = 0;
    logic [7:0]  req_wdata = 0;
    logic [3:0]  reg_addr = 0;
    logic        status_clear = 0;
    wire         r_data_lost, g_data_lost;
    logic [4:0]  dbg_class_row = 0;

    logic [NFLT-1:0]     f_en = 0;
    logic [NFLT*4-1:0]   f_kind = 0, f_bit = 0;
    logic [NFLT*PAW-1:0] f_row = 0;

    wire [90:0] o_r, o_g;       // packed copies of everything observable
    wire        rv_r, rv_g;
    wire [31:0] rr_r, rr_g;

    `define OUTS(p) {p``_req_ready, p``_rsp_valid, p``_rsp_rdata, p``_rsp_error, p``_rsp_corrected, p``_init_done, p``_bist_busy, p``_degraded, p``_scrub_busy, p``_fault_count, p``_remapped_count, p``_dbg_spare_used, p``_dbg_class}

    wire r_req_ready, r_rsp_valid, r_rsp_error, r_rsp_corrected, r_init_done, r_bist_busy, r_degraded, r_scrub_busy;
    wire [7:0] r_rsp_rdata; wire [5:0] r_fault_count; wire [4:0] r_remapped_count; wire [1:0] r_dbg_spare_used; wire [2:0] r_dbg_class;
    wire [17:0] r_bad; wire [79:0] r_map; wire [15:0] r_un, r_as; wire [31:0] r_reg;
    wire g_req_ready, g_rsp_valid, g_rsp_error, g_rsp_corrected, g_init_done, g_bist_busy, g_degraded, g_scrub_busy;
    wire [7:0] g_rsp_rdata; wire [5:0] g_fault_count; wire [4:0] g_remapped_count; wire [1:0] g_dbg_spare_used; wire [2:0] g_dbg_class;
    wire [17:0] g_bad; wire [79:0] g_map; wire [15:0] g_un, g_as; wire [31:0] g_reg;

    regenx_top #(.ECC_EN(1'b1)) dut_r (
        .clk(clk), .rst_n(rst_n), .req_valid(req_valid), .req_ready(r_req_ready), .req_write(req_write),
        .req_addr(req_addr), .req_wdata(req_wdata), .rsp_valid(r_rsp_valid), .rsp_rdata(r_rsp_rdata),
        .rsp_error(r_rsp_error), .rsp_corrected(r_rsp_corrected), .scrub_en(scrub_en), .scrub_req(scrub_req),
        .status_clear(status_clear), .data_lost(r_data_lost), .reg_addr(reg_addr), .reg_rdata(r_reg), .init_done(r_init_done), .bist_busy(r_bist_busy),
        .degraded(r_degraded), .scrub_busy(r_scrub_busy), .fault_count(r_fault_count),
        .remapped_count(r_remapped_count), .dbg_bad_phys(r_bad), .dbg_map_flat(r_map),
        .dbg_unavail(r_un), .dbg_assist(r_as), .dbg_spare_used(r_dbg_spare_used),
        .dbg_class_row(dbg_class_row), .dbg_class(r_dbg_class),
        .sim_flt_en(f_en), .sim_flt_kind(f_kind), .sim_flt_row(f_row), .sim_flt_bit(f_bit));

    regenx_top_gl dut_g (
        .sim_flt_en(f_en), .sim_flt_kind(f_kind), .sim_flt_row(f_row), .sim_flt_bit(f_bit),
        .clk(clk), .rst_n(rst_n), .req_valid(req_valid), .req_ready(g_req_ready), .req_write(req_write),
        .req_addr(req_addr), .req_wdata(req_wdata), .rsp_valid(g_rsp_valid), .rsp_rdata(g_rsp_rdata),
        .rsp_error(g_rsp_error), .rsp_corrected(g_rsp_corrected), .scrub_en(scrub_en), .scrub_req(scrub_req),
        .status_clear(status_clear), .data_lost(g_data_lost), .reg_addr(reg_addr), .reg_rdata(g_reg), .init_done(g_init_done), .bist_busy(g_bist_busy),
        .degraded(g_degraded), .scrub_busy(g_scrub_busy), .fault_count(g_fault_count),
        .remapped_count(g_remapped_count), .dbg_bad_phys(g_bad), .dbg_map_flat(g_map),
        .dbg_unavail(g_un), .dbg_assist(g_as), .dbg_spare_used(g_dbg_spare_used),
        .dbg_class_row(dbg_class_row), .dbg_class(g_dbg_class));

    wire [319:0] all_r = {r_req_ready, r_rsp_valid, r_rsp_error, r_rsp_corrected, r_init_done, r_bist_busy,
                          r_degraded, r_scrub_busy, r_data_lost, r_rsp_rdata, r_fault_count, r_remapped_count,
                          r_dbg_spare_used, r_dbg_class, r_bad, r_map, r_un, r_as, r_reg};
    wire [319:0] all_g = {g_req_ready, g_rsp_valid, g_rsp_error, g_rsp_corrected, g_init_done, g_bist_busy,
                          g_degraded, g_scrub_busy, g_data_lost, g_rsp_rdata, g_fault_count, g_remapped_count,
                          g_dbg_spare_used, g_dbg_class, g_bad, g_map, g_un, g_as, g_reg};

    int mism = 0, cycles = 0, scen_done = 0;
    always @(negedge clk) begin
        cycles++;
        reg_addr <= reg_addr + 4'd1;
        if (all_r !== all_g) begin
            mism++;
            if (mism < 6) $display("[%0t] MISMATCH r=%h g=%h", $time, all_r, all_g);
        end
    end

    // random host stimulus, applied identically to both
    task automatic traffic(input int n);
        for (int i = 0; i < n; i++) begin
            @(negedge clk);
            req_valid = ($urandom_range(0, 3) != 0);
            req_write = $urandom_range(0, 1);
            req_addr  = 4'($urandom);
            req_wdata = 8'($urandom);
            if ($urandom_range(0, 60) == 0) scrub_req = 1; else scrub_req = 0;
        end
        @(negedge clk); req_valid = 0; scrub_req = 0;
    endtask

    int nf;
    initial begin
        for (int s = 0; s < SCEN; s++) begin
            rst_n = 0; req_valid = 0; scrub_en = 0;
            f_en = 0; f_kind = 0; f_row = 0; f_bit = 0;
            repeat (3) @(negedge clk);
            nf = (s < 4) ? s : $urandom_range(0, NFLT);
            for (int k = 0; k < nf; k++) begin
                f_en[k] = 1;
                f_kind[k*4 +: 4]    = 4'($urandom_range(1, 8));
                f_row[k*PAW +: PAW] = PAW'($urandom_range(0, 17));
                f_bit[k*4 +: 4]     = 4'($urandom_range(0, 12));
            end
            scrub_en = (s % 2) == 1;
            status_clear = 0;
            rst_n = 1;
            repeat (2400) @(negedge clk);
            traffic(500);
            repeat (60) @(negedge clk);
            scen_done++;
        end
        $display("GLS_EQUIV scenarios=%0d cycles=%0d mismatches=%0d", scen_done, cycles, mism);
        if (mism == 0) $display("GLS_RESULT: PASS");
        else           $display("GLS_RESULT: FAIL");
        $finish;
    end
endmodule
