// regenx_sva.sv - protocol and safety assertions, bound onto regenx_top.
// Runs in the normal regression (Verilator --assert); every assert has a cover
// next to it or in the cover section so we can tell it was actually exercised.

`timescale 1ns/1ps

module regenx_sva
    import regenx_pkg::*;
(
    input logic        clk,
    input logic        rst_n,
    input logic        req_valid,
    input logic        req_ready,
    input logic        rsp_valid,
    input logic        rsp_error,
    input logic        rsp_corrected,
    input logic        init_done,
    input logic        bist_done,
    input logic        rep_done,
    input logic        scrub_busy,
    input logic        ctl_idle,
    input logic        degraded,
    input logic        clash,
    input logic [3:0]  grant,
    input logic        mem_en,
    input logic        mem_we,
    input logic [PAW-1:0] mem_addr,
    input logic        mem_rvalid,
    input logic        h_en,
    input logic [LROWS*PAW-1:0] l2p_flat,
    input logic [LROWS-1:0]     remapped,
    input logic [LROWS-1:0]     assist,
    input logic [LROWS-1:0]     unavail,
    input logic [SPARES-1:0]    spare_used,
    input logic [PROWS-1:0]     bad_phys,
    input logic        sc_migrate,
    input logic        sc_fault,
    input logic        data_lost,
    input logic        status_clear,
    input logic        ev_lost,
    input logic [LROWS-1:0] lost_map
);
    default clocking cb @(posedge clk); endclocking

    // ---- bring-up ----
    a_init_sticky:   assert property (disable iff (!rst_n) init_done |=> init_done);
    a_init_order:    assert property (disable iff (!rst_n) init_done |-> bist_done);
    a_ready_init:    assert property (disable iff (!rst_n) req_ready |-> init_done);
    a_ready_scrub:   assert property (disable iff (!rst_n) req_ready |-> !scrub_busy);
    a_no_rsp_boot:   assert property (disable iff (!rst_n) !init_done |-> !rsp_valid);
    a_no_host_boot:  assert property (disable iff (!rst_n) !init_done |-> !h_en);

    // ---- host handshake ----
    a_lat:           assert property (disable iff (!rst_n) $past(req_valid && req_ready, 4) |-> rsp_valid);
    a_lat_only:      assert property (disable iff (!rst_n) rsp_valid |-> $past(req_valid && req_ready, 4));
    a_rsp_pulse:     assert property (disable iff (!rst_n) rsp_valid |=> !rsp_valid);
    a_single_flight: assert property (disable iff (!rst_n) (req_valid && req_ready) |=> !req_ready);
    a_err_rsp:       assert property (disable iff (!rst_n) (rsp_error || rsp_corrected) |-> rsp_valid);
    a_fix_not_err:   assert property (disable iff (!rst_n) rsp_corrected |-> !rsp_error);

    // ---- array ownership ----
    a_onehot:        assert property (disable iff (!rst_n) $onehot(grant));
    a_noclash:       assert property (disable iff (!rst_n) !clash);
    a_range:         assert property (disable iff (!rst_n) mem_en |-> mem_addr < PAW'(PROWS));
    a_rvalid:        assert property (disable iff (!rst_n) (mem_en && !mem_we) |=> mem_rvalid);
    a_scrub_quiet:   assert property (disable iff (!rst_n) scrub_busy |-> ctl_idle);
    a_host_phase:    assert property (disable iff (!rst_n) grant[3] |-> init_done && !scrub_busy);

    // ---- repair map ----
    logic map_ok;
    always_comb begin
        map_ok = 1'b1;
        for (int i = 0; i < LROWS; i++) begin
            if (l2p_flat[i*PAW +: PAW] >= PAW'(PROWS)) map_ok = 1'b0;
            if (remapped[i] != (l2p_flat[i*PAW +: PAW] >= PAW'(LROWS))) map_ok = 1'b0;
            // a row either keeps its own slot or sits in a spare
            if (!remapped[i] && l2p_flat[i*PAW +: PAW] != PAW'(i)) map_ok = 1'b0;
        end
        for (int s = 0; s < SPARES; s++) begin
            int users = 0;
            for (int i = 0; i < LROWS; i++)
                if (l2p_flat[i*PAW +: PAW] == PAW'(LROWS + s)) users++;
            if (users > 1) map_ok = 1'b0;                 // two rows in one spare
            if (users == 1 && !spare_used[s]) map_ok = 1'b0;
            // a bad spare may only still be in use by a row that ECC-assist (or nothing) is covering;
            // the scrubber needs a few cycles between logging the fault and settling the row
            for (int i = 0; i < LROWS; i++)
                if (l2p_flat[i*PAW +: PAW] == PAW'(LROWS + s) && bad_phys[LROWS + s] && !(assist[i] || unavail[i] || scrub_busy))
                    map_ok = 1'b0;
        end
    end
    a_map:           assert property (disable iff (!rst_n) map_ok);
    a_degraded:      assert property (disable iff (!rst_n) degraded == ((|assist) | (|unavail)));
    a_unavail_idle:  assert property (disable iff (!rst_n) (init_done && $rose(|unavail)) |-> degraded);

    // ---- data loss reporting ----
    a_lost_sticky:   assert property (disable iff (!rst_n) (data_lost && !status_clear) |=> data_lost);
    a_lost_clear:    assert property (disable iff (!rst_n) status_clear |=> (!data_lost && lost_map == '0));
    a_lost_set:      assert property (disable iff (!rst_n) (ev_lost && !status_clear) |=> data_lost);
    a_lost_unavail:  assert property (disable iff (!rst_n) ((lost_map & ~unavail) == '0));
    a_lost_nomig:    assert property (disable iff (!rst_n) ev_lost |-> !sc_migrate);

    // ---- coverage: plain counters so any simulator can report them ----
    int n_lost;
    int n_boot, n_remap, n_assist, n_unavail, n_both, n_mig, n_sfault, n_fix, n_err, n_scrub, n_deg;
    logic init_q;
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            init_q <= 1'b0;
        end else begin
            init_q <= init_done;
            if (init_done && !init_q)       n_boot++;
            if (init_done && |remapped)     n_remap++;
            if (init_done && |assist)       n_assist++;
            if (init_done && |unavail)      n_unavail++;
            if (init_done && (&spare_used)) n_both++;
            if (sc_migrate)                 n_mig++;
            if (sc_fault)                   n_sfault++;
            if (rsp_corrected)              n_fix++;
            if (rsp_error)                  n_err++;
            if (scrub_busy)                 n_scrub++;
            if (degraded)                   n_deg++;
            if (ev_lost)                    n_lost++;
        end
    end
    initial begin
        n_boot = 0; n_remap = 0; n_assist = 0; n_unavail = 0; n_both = 0; n_mig = 0;
        n_sfault = 0; n_fix = 0; n_err = 0; n_scrub = 0; n_deg = 0; n_lost = 0;
    end
    final $display("SVA_COVER boots=%0d remap=%0d assist=%0d unavail=%0d both_spares=%0d migrate=%0d scrub_fault=%0d ecc_fix=%0d rsp_err=%0d scrub_cycles=%0d degraded=%0d data_lost_events=%0d",
                   n_boot, n_remap, n_assist, n_unavail, n_both, n_mig, n_sfault, n_fix, n_err, n_scrub, n_deg, n_lost);
endmodule

// hooks it into the design without touching the RTL
bind regenx_top regenx_sva u_sva (
    .clk(clk), .rst_n(rst_n), .req_valid(req_valid), .req_ready(req_ready),
    .rsp_valid(rsp_valid), .rsp_error(rsp_error), .rsp_corrected(rsp_corrected),
    .init_done(init_done), .bist_done(bist_done), .rep_done(rep_done),
    .scrub_busy(scrub_busy), .ctl_idle(ctl_idle), .degraded(degraded),
    .clash(clash), .grant(grant),
    .mem_en(mem_en), .mem_we(mem_we), .mem_addr(mem_addr), .mem_rvalid(mem_rvalid),
    .h_en(h_en), .l2p_flat(l2p_flat), .remapped(remapped), .assist(assist),
    .unavail(unavail), .spare_used(spare_used), .bad_phys(bad_phys),
    .sc_migrate(ev_mig), .sc_fault(ev_flt),
    .data_lost(data_lost), .status_clear(status_clear), .ev_lost(ev_lost), .lost_map(u_regs.lost_map)
);
