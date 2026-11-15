// regenx_uvm_top.sv - clock, interface, DUT, and test launch.
// +UVM_TESTNAME=regenx_random_test (or any other test in regenx_uvm_pkg)
`timescale 1ns/1ps

module regenx_uvm_top;
    import uvm_pkg::*;
    import regenx_pkg::*;
    import regenx_uvm_pkg::*;
    `include "uvm_macros.svh"

    logic clk = 1'b0;
    always #5 clk = ~clk;

    regenx_if vif (.clk(clk));

    regenx_top dut (
        .clk(clk), .rst_n(vif.rst_n),
        .req_valid(vif.req_valid), .req_ready(vif.req_ready), .req_write(vif.req_write),
        .req_addr(vif.req_addr), .req_wdata(vif.req_wdata),
        .rsp_valid(vif.rsp_valid), .rsp_rdata(vif.rsp_rdata), .rsp_error(vif.rsp_error),
        .rsp_corrected(vif.rsp_corrected),
        .scrub_en(vif.scrub_en), .scrub_req(vif.scrub_req),
        .status_clear(1'b0), .data_lost(vif.data_lost), .reg_addr(4'd0), .reg_rdata(),
        .init_done(vif.init_done), .bist_busy(), .degraded(vif.degraded), .scrub_busy(vif.scrub_busy),
        .fault_count(vif.fault_count), .remapped_count(vif.remapped_count),
        .dbg_bad_phys(vif.dbg_bad_phys), .dbg_map_flat(vif.dbg_map_flat),
        .dbg_unavail(vif.dbg_unavail), .dbg_assist(vif.dbg_assist), .dbg_spare_used(),
        .dbg_class_row(5'd0), .dbg_class(),
        .sim_flt_en(vif.flt_en), .sim_flt_kind(vif.flt_kind),
        .sim_flt_row(vif.flt_row), .sim_flt_bit(vif.flt_bit)
    );

    initial begin
        uvm_config_db#(virtual regenx_if)::set(null, "uvm_test_top", "vif", vif);
        run_test();
    end
endmodule
