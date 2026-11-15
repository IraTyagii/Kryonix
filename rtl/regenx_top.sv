// regenx_top.sv - REGEN-X: self-healing 16 x 8 memory with two spare rows.
//
// After reset the BIST marches over all 18 physical rows, the repair engine
// builds the logical->physical map, the recovery check proves each repaired
// row, and only then does init_done go high and the host get req_ready.
// Later the scrubber can re-test rows while the host is idle and migrate a row
// that has gone bad since boot (scrub_en / scrub_req / PATROL_PERIOD).
//
// Simulation-only fault injection ports exist with -DREGENX_SIM.

`timescale 1ns/1ps

module regenx_top
    import regenx_pkg::*;
#(
    parameter bit ECC_EN        = 1'b1,    // 0: plain 8-bit words, proposal baseline
    parameter int PATROL_PERIOD = 0        // cycles between automatic patrol rounds, 0 = off
) (
    input  logic        clk,
    input  logic        rst_n,

    // host
    input  logic        req_valid,
    output logic        req_ready,
    input  logic        req_write,
    input  logic [3:0]  req_addr,
    input  logic [7:0]  req_wdata,
    output logic        rsp_valid,
    output logic [7:0]  rsp_rdata,
    output logic        rsp_error,
    output logic        rsp_corrected,

    // healing control
    input  logic        scrub_en,
    input  logic        scrub_req,

    // status
    input  logic        status_clear,   // clears sticky data_lost, lost map and counters
    input  logic [3:0]  reg_addr,
    output logic [31:0] reg_rdata,
    output logic        init_done,
    output logic        bist_busy,
    output logic        degraded,
    output logic        scrub_busy,
    output logic        data_lost,      // sticky: a row's data was lost to an uncorrectable error
    output logic [5:0]  fault_count,
    output logic [4:0]  remapped_count,
    output logic [17:0] dbg_bad_phys,
    output logic [79:0] dbg_map_flat,
    output logic [15:0] dbg_unavail,
    output logic [15:0] dbg_assist,
    output logic [1:0]  dbg_spare_used,
    input  logic [4:0]  dbg_class_row,      // which physical row to classify
    output logic [2:0]  dbg_class
`ifdef REGENX_SIM
  , input  logic [NFLT-1:0]     sim_flt_en,
    input  logic [NFLT*4-1:0]   sim_flt_kind,
    input  logic [NFLT*PAW-1:0] sim_flt_row,
    input  logic [NFLT*4-1:0]   sim_flt_bit
`endif
);
    localparam int PW = ECC_EN ? CW : DW;

    // ---- shared wires ----
    logic              bist_done, rep_done, clash;
    logic [3:0]        grant;

    logic              mem_en, mem_we, mem_rvalid;
    logic [PAW-1:0]    mem_addr;
    logic [PW-1:0]     mem_wdata, mem_rdata;

    logic              b_en, b_we, r_en, r_we, s_en, s_we, h_en, h_we;
    logic [PAW-1:0]    b_addr, r_addr, s_addr, h_addr;
    logic [PW-1:0]     b_wdata, r_wdata, s_wdata, h_wdata;

    // fault log sources
    logic              bf_valid, rl_valid, sl_valid, lg_valid;
    logic [PAW-1:0]    bf_row, rl_row, sl_row, lg_row;
    logic [PW-1:0]     bf_mask, sl_mask, lg_mask;
    logic [2:0]        bf_elem, lg_elem;
    logic [1:0]        bf_pass, lg_pass;

    // table / allocator
    logic [LROWS*PAW-1:0] l2p_flat;
    logic [LROWS-1:0]     remapped, assist, unavail;
    logic [PROWS-1:0]     bad_phys, severe_phys;
    logic [SPARES-1:0]    spare_used;
    logic [LAW-1:0]       owner0, owner1;
    logic                 have_free, free_idx;

    logic              rp_take, rp_take_idx, rp_rel, rp_rel_idx, rp_rm_v;
    logic [LAW-1:0]    rp_take_row, rp_rm_row;
    logic [1:0]        rp_rm_kind;
    logic [PAW-1:0]    rp_rm_phys;
    logic              sc_take, sc_take_idx, sc_rel, sc_rel_idx, sc_rm_v;
    logic [LAW-1:0]    sc_take_row, sc_rm_row;
    logic [1:0]        sc_rm_kind;
    logic [PAW-1:0]    sc_rm_phys;

    logic              rec_start, rec_done, rec_pass, rec_busy;
    logic [LAW-1:0]    rec_row;

    logic              ctl_idle, hint_valid;
    logic [LAW-1:0]    hint_row;
    logic              ev_fix, ev_unc, ev_vfail, ev_chk, ev_flt, ev_mig, ev_rnd, ev_lost;
    logic [LAW-1:0]    lost_row;

    logic [4:0]        remap_cnt;
    logic              last_valid;
    logic [PAW-1:0]    last_row;
    logic [2:0]        last_class;

    // ---- physical array ----
    regenx_mem_array #(.DEPTH(PROWS), .WIDTH(PW)) u_array (
        .clk(clk), .rst_n(rst_n),
        .en(mem_en), .we(mem_we), .addr(mem_addr), .wdata(mem_wdata),
        .rdata(mem_rdata), .rvalid(mem_rvalid)
`ifdef REGENX_SIM
      , .flt_en(sim_flt_en), .flt_kind(sim_flt_kind), .flt_row(sim_flt_row), .flt_bit(sim_flt_bit)
`endif
    );

    regenx_mem_arbiter #(.PW(PW)) u_arb (
        .bist_done(bist_done), .init_done(init_done), .scrub_busy(scrub_busy),
        .b_en(b_en), .b_we(b_we), .b_addr(b_addr), .b_wdata(b_wdata),
        .r_en(r_en), .r_we(r_we), .r_addr(r_addr), .r_wdata(r_wdata),
        .s_en(s_en), .s_we(s_we), .s_addr(s_addr), .s_wdata(s_wdata),
        .h_en(h_en), .h_we(h_we), .h_addr(h_addr), .h_wdata(h_wdata),
        .mem_en(mem_en), .mem_we(mem_we), .mem_addr(mem_addr), .mem_wdata(mem_wdata),
        .grant(grant), .clash(clash)
    );

    // ---- boot sequence ----
    regenx_bist_controller #(.PW(PW)) u_bist (
        .clk(clk), .rst_n(rst_n), .done(bist_done),
        .mem_en(b_en), .mem_we(b_we), .mem_addr(b_addr), .mem_wdata(b_wdata),
        .mem_rdata(mem_rdata),
        .flt_valid(bf_valid), .flt_row(bf_row), .flt_mask(bf_mask),
        .flt_elem(bf_elem), .flt_pass(bf_pass)
    );

    // later reporters (repair engine, scrubber) never overlap with BIST
    always_comb begin
        lg_valid = bf_valid | rl_valid | sl_valid;
        lg_row   = bf_valid ? bf_row : rl_valid ? rl_row : sl_row;
        lg_mask  = bf_valid ? bf_mask : rl_valid ? {PW{1'b1}} : sl_mask;
        lg_elem  = bf_valid ? bf_elem : 3'd0;
        lg_pass  = bf_valid ? bf_pass : 2'd3;
    end

    regenx_fault_manager #(.ECC_EN(ECC_EN), .PW(PW)) u_fault (
        .clk(clk), .rst_n(rst_n),
        .log_valid(lg_valid), .log_row(lg_row), .log_mask(lg_mask),
        .log_elem(lg_elem), .log_pass(lg_pass),
        .bad_phys(bad_phys), .severe_phys(severe_phys), .fault_count(fault_count),
        .last_valid(last_valid), .last_row(last_row), .last_class(last_class),
        .q_row(dbg_class_row), .q_class(dbg_class)
    );

    regenx_spare_allocator u_alloc (
        .clk(clk), .rst_n(rst_n), .spare_bad(bad_phys[PROWS-1:LROWS]),
        .take_valid(init_done ? sc_take : rp_take),
        .take_idx(init_done ? sc_take_idx : rp_take_idx),
        .take_row(init_done ? sc_take_row : rp_take_row),
        .rel_valid(init_done ? sc_rel : rp_rel),
        .rel_idx(init_done ? sc_rel_idx : rp_rel_idx),
        .used(spare_used), .owner0(owner0), .owner1(owner1),
        .have_free(have_free), .free_idx(free_idx)
    );

    regenx_addr_remap u_remap (
        .clk(clk), .rst_n(rst_n),
        .wr_valid(init_done ? sc_rm_v : rp_rm_v),
        .wr_kind(init_done ? sc_rm_kind : rp_rm_kind),
        .wr_row(init_done ? sc_rm_row : rp_rm_row),
        .wr_phys(init_done ? sc_rm_phys : rp_rm_phys),
        .l2p_flat(l2p_flat), .remapped(remapped), .assist(assist), .unavail(unavail),
        .remapped_cnt(remap_cnt), .degraded(degraded)
    );

    regenx_repair_engine u_repair (
        .clk(clk), .rst_n(rst_n), .bist_done(bist_done), .done(rep_done),
        .bad_phys(bad_phys), .severe_phys(severe_phys), .l2p_flat(l2p_flat),
        .remapped(remapped), .assist(assist),
        .have_free(have_free), .free_idx(free_idx),
        .take_valid(rp_take), .take_idx(rp_take_idx), .take_row(rp_take_row),
        .rel_valid(rp_rel), .rel_idx(rp_rel_idx),
        .rm_valid(rp_rm_v), .rm_kind(rp_rm_kind), .rm_row(rp_rm_row), .rm_phys(rp_rm_phys),
        .log_valid(rl_valid), .log_row(rl_row),
        .rec_start(rec_start), .rec_row(rec_row), .rec_done(rec_done), .rec_pass(rec_pass),
        .ev_verify_fail(ev_vfail)
    );

    regenx_recovery_check #(.ECC_EN(ECC_EN), .PW(PW)) u_recovery (
        .clk(clk), .rst_n(rst_n), .start(rec_start), .row(rec_row), .l2p_flat(l2p_flat),
        .busy(rec_busy), .done(rec_done), .pass(rec_pass),
        .mem_en(r_en), .mem_we(r_we), .mem_addr(r_addr), .mem_wdata(r_wdata),
        .mem_rdata(mem_rdata)
    );

    always_ff @(posedge clk) begin
        if (!rst_n) init_done <= 1'b0;
        else if (rep_done) init_done <= 1'b1;
    end

    // ---- host side ----
    regenx_mem_controller #(.ECC_EN(ECC_EN), .PW(PW)) u_ctrl (
        .clk(clk), .rst_n(rst_n), .init_done(init_done), .scrub_busy(scrub_busy),
        .req_valid(req_valid), .req_ready(req_ready), .req_write(req_write),
        .req_addr(req_addr), .req_wdata(req_wdata),
        .rsp_valid(rsp_valid), .rsp_rdata(rsp_rdata), .rsp_error(rsp_error),
        .rsp_corrected(rsp_corrected),
        .l2p_flat(l2p_flat), .unavail(unavail),
        .mem_en(h_en), .mem_we(h_we), .mem_addr(h_addr), .mem_wdata(h_wdata),
        .mem_rdata(mem_rdata),
        .idle(ctl_idle), .hint_valid(hint_valid), .hint_row(hint_row),
        .ev_fix(ev_fix), .ev_unc(ev_unc)
    );

    regenx_scrubber #(.ECC_EN(ECC_EN), .PW(PW), .PERIOD(PATROL_PERIOD)) u_scrub (
        .clk(clk), .rst_n(rst_n), .enable(scrub_en), .kick(scrub_req),
        .init_done(init_done), .host_idle(ctl_idle && !req_valid),
        .hint_valid(hint_valid), .hint_row(hint_row), .busy(scrub_busy),
        .mem_en(s_en), .mem_we(s_we), .mem_addr(s_addr), .mem_wdata(s_wdata),
        .mem_rdata(mem_rdata),
        .l2p_flat(l2p_flat), .assist(assist), .unavail(unavail),
        .rm_valid(sc_rm_v), .rm_kind(sc_rm_kind), .rm_row(sc_rm_row), .rm_phys(sc_rm_phys),
        .have_free(have_free), .free_idx(free_idx),
        .spare_used(spare_used), .spare_bad(bad_phys[PROWS-1:LROWS]),
        .take_valid(sc_take), .take_idx(sc_take_idx), .take_row(sc_take_row),
        .rel_valid(sc_rel), .rel_idx(sc_rel_idx),
        .log_valid(sl_valid), .log_row(sl_row), .log_mask(sl_mask),
        .ev_check(ev_chk), .ev_fault(ev_flt), .ev_migrate(ev_mig), .ev_round(ev_rnd),
        .ev_lost(ev_lost), .lost_row(lost_row)
    );

    regenx_status_regs u_regs (
        .clk(clk), .rst_n(rst_n), .status_clear(status_clear), .reg_addr(reg_addr), .reg_rdata(reg_rdata),
        .init_done(init_done), .bist_busy(bist_busy), .degraded(degraded),
        .scrub_busy(scrub_busy), .ecc_en(ECC_EN),
        .fault_count(fault_count), .last_valid(last_valid), .last_row(last_row),
        .last_class(last_class), .spare_used(spare_used), .spare_bad(bad_phys[PROWS-1:LROWS]),
        .owner0(owner0), .owner1(owner1), .remapped_cnt(remap_cnt),
        .assist(assist), .unavail(unavail),
        .ev_fix(ev_fix), .ev_unc(ev_unc), .ev_verify_fail(ev_vfail),
        .ev_check(ev_chk), .ev_fault(ev_flt), .ev_migrate(ev_mig), .ev_round(ev_rnd),
        .ev_lost(ev_lost), .lost_row(lost_row), .data_lost(data_lost)
    );

    assign bist_busy      = !init_done;
    assign remapped_count = remap_cnt;
    assign dbg_bad_phys   = bad_phys;
    assign dbg_map_flat   = l2p_flat;
    assign dbg_unavail    = unavail;
    assign dbg_assist     = assist;
    assign dbg_spare_used = spare_used;

    // keeps lint quiet about outputs only the testbench looks at
    logic unused_ok;
    assign unused_ok = &{1'b0, mem_rvalid, rec_busy, clash, grant};
endmodule
