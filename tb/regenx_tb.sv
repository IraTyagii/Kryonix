// regenx_tb.sv - self-checking regression for REGEN-X.
// Plain SystemVerilog (no classes) so it runs on Icarus and on Verilator --timing.
// The expected repair result is computed here from the injected fault list,
// independently of the RTL, and compared with what the DUT built.
//
//   +seed=N   random seed          -Ptb.ECC_EN=0/1   -Ptb.NRAND=n   -Ptb.PERIOD=n

`timescale 1ns/1ps

module regenx_tb;
    import regenx_pkg::*;

    parameter bit ECC_EN = 1'b1;
    parameter int NRAND  = 300;
    parameter int PERIOD = 0;
    localparam int PW = ECC_EN ? CW : DW;

    // ---------------- DUT ----------------
    logic        clk = 1'b0;
    logic        rst_n = 1'b0;
    logic        req_valid = 1'b0, req_write = 1'b0;
    logic [3:0]  req_addr = '0;
    logic [7:0]  req_wdata = '0;
    logic        scrub_en = 1'b0, scrub_req = 1'b0;
    logic [3:0]  reg_addr = '0;
    logic        status_clear = 1'b0;
    logic [4:0]  dbg_class_row = '0;

    wire         req_ready, rsp_valid, rsp_error, rsp_corrected;
    wire [7:0]   rsp_rdata;
    wire [31:0]  reg_rdata;
    wire         init_done, bist_busy, degraded, scrub_busy, data_lost;
    wire [5:0]   fault_count;
    wire [4:0]   remapped_count;
    wire [17:0]  dbg_bad_phys;
    wire [79:0]  dbg_map_flat;
    wire [15:0]  dbg_unavail, dbg_assist;
    wire [1:0]   dbg_spare_used;
    wire [2:0]   dbg_class;

    logic [NFLT-1:0]     f_en = '0;
    logic [3:0]          f_kind [NFLT];
    logic [PAW-1:0]      f_row  [NFLT];
    logic [3:0]          f_bit  [NFLT];
    logic [NFLT*4-1:0]   flt_kind_flat = '0;
    logic [NFLT*PAW-1:0] flt_row_flat = '0;
    logic [NFLT*4-1:0]   flt_bit_flat = '0;

    regenx_top #(.ECC_EN(ECC_EN), .PATROL_PERIOD(PERIOD)) dut (
        .clk(clk), .rst_n(rst_n),
        .req_valid(req_valid), .req_ready(req_ready), .req_write(req_write),
        .req_addr(req_addr), .req_wdata(req_wdata),
        .rsp_valid(rsp_valid), .rsp_rdata(rsp_rdata), .rsp_error(rsp_error),
        .rsp_corrected(rsp_corrected),
        .scrub_en(scrub_en), .scrub_req(scrub_req), .status_clear(status_clear), .data_lost(data_lost),
        .reg_addr(reg_addr), .reg_rdata(reg_rdata),
        .init_done(init_done), .bist_busy(bist_busy), .degraded(degraded),
        .scrub_busy(scrub_busy), .fault_count(fault_count), .remapped_count(remapped_count),
        .dbg_bad_phys(dbg_bad_phys), .dbg_map_flat(dbg_map_flat),
        .dbg_unavail(dbg_unavail), .dbg_assist(dbg_assist), .dbg_spare_used(dbg_spare_used),
        .dbg_class_row(dbg_class_row), .dbg_class(dbg_class),
        .sim_flt_en(f_en), .sim_flt_kind(flt_kind_flat),
        .sim_flt_row(flt_row_flat), .sim_flt_bit(flt_bit_flat)
    );

    always #5 clk = ~clk;

    // ---------------- bookkeeping ----------------
    int errors = 0;
    int checks = 0;
    int boots  = 0;
    string phase = "init";

    task automatic chk(input bit ok, input string what);
        checks++;
        if (!ok) begin
            errors++;
            if (errors <= 40) $display("[%0t] FAIL (%s): %s", $time, phase, what);
        end
    endtask

    // ---------------- reference model ----------------
    bit        e_bad  [PROWS];
    bit        e_sev  [PROWS];
    bit [4:0]  e_map  [LROWS];
    bit        e_rem  [LROWS];
    bit        e_asst [LROWS];
    bit        e_unav [LROWS];

    function automatic int ones13(input bit [12:0] v);
        int n = 0;
        for (int i = 0; i < 13; i++) n += int'(v[i]);
        return n;
    endfunction

    task automatic model();
        bit [12:0] bm [PROWS];
        bit        free_sp [2];
        int        v;
        for (int p = 0; p < PROWS; p++) begin e_bad[p] = 0; bm[p] = '0; end
        for (int s = 0; s < NFLT; s++) begin
            if (f_en[s]) begin
                int r = int'(f_row[s]);
                int b = int'(f_bit[s]);
                case (f_kind[s])
                    FK_SA0, FK_SA1, FK_TF_UP, FK_TF_DN, FK_COUPLE:
                        if (b < PW) begin e_bad[r] = 1; bm[r][b] = 1'b1; end
                    FK_ROW0, FK_ROW1: begin e_bad[r] = 1; bm[r] = '1; end
                    FK_ALIAS: begin
                        v = (r == PROWS-1) ? 0 : r + 1;
                        e_bad[v] = 1; bm[v] = '1;
                    end
                    default: ;
                endcase
            end
        end
        for (int p = 0; p < PROWS; p++)
            e_sev[p] = e_bad[p] && (!ECC_EN || ones13(bm[p] & ((13'd1 << PW) - 13'd1)) > 1);
        for (int r = 0; r < LROWS; r++) begin
            e_map[r] = 5'(r); e_rem[r] = 0; e_asst[r] = 0; e_unav[r] = 0;
        end
        free_sp[0] = !e_bad[16];
        free_sp[1] = !e_bad[17];
        for (int pass = 0; pass < 2; pass++) begin
            for (int r = 0; r < LROWS; r++) begin
                if (e_bad[r] && (pass == 0 ? e_sev[r] : !e_sev[r])) begin
                    if (free_sp[0])      begin free_sp[0] = 0; e_map[r] = 5'd16; e_rem[r] = 1; end
                    else if (free_sp[1]) begin free_sp[1] = 0; e_map[r] = 5'd17; e_rem[r] = 1; end
                    else if (pass == 0)  e_unav[r] = 1;
                    else                 e_asst[r] = 1;
                end
            end
        end
    endtask

    // ---------------- low level helpers ----------------
    task automatic tick(input int n = 1);
        repeat (n) @(posedge clk);
    endtask

    task automatic clear_faults();
        f_en = '0;
        flt_kind_flat = '0; flt_row_flat = '0; flt_bit_flat = '0;
        for (int i = 0; i < NFLT; i++) begin f_kind[i] = 0; f_row[i] = 0; f_bit[i] = 0; end
    endtask

    task automatic set_fault(input int slot, input int kind, input int row, input int bitn);
        f_en[slot]   = 1'b1;
        f_kind[slot] = 4'(kind);
        f_row[slot]  = PAW'(row);
        f_bit[slot]  = 4'(bitn);
        flt_kind_flat[slot*4 +: 4]    = 4'(kind);
        flt_row_flat[slot*PAW +: PAW] = PAW'(row);
        flt_bit_flat[slot*4 +: 4]     = 4'(bitn);
    endtask

    task automatic do_reset(input int cycles = 4);
        rst_n = 1'b0;
        req_valid = 1'b0; scrub_en = 1'b0; scrub_req = 1'b0;
        tick(cycles);
        @(negedge clk);
    endtask

    // reset with the current fault set, wait for the boot sequence to finish
    task automatic boot();
        int guard = 0;
        do_reset();
        rst_n = 1'b1;
        boots++;
        while (!init_done && guard < 4000) begin tick(); guard++; end
        chk(init_done, "init_done never came");
        settle();
    endtask

    // ---------------- host access ----------------
    logic [7:0] g_data;
    bit         g_err, g_fix;
    int         g_lat;

    task automatic host_op(input bit w, input int a, input int d);
        int guard = 0;
        @(negedge clk);
        req_valid = 1'b1; req_write = w; req_addr = 4'(a); req_wdata = 8'(d);
        @(posedge clk);
        while (!req_ready && guard < 500) begin @(posedge clk); guard++; end
        chk(guard < 500, "req_ready stuck low");
        g_lat = 0;
        @(negedge clk);
        req_valid = 1'b0;
        guard = 0;
        @(posedge clk);
        while (!rsp_valid && guard < 100) begin @(posedge clk); guard++; g_lat++; end
        chk(guard < 100, "no response");
        g_data = rsp_rdata; g_err = rsp_error; g_fix = rsp_corrected;
    endtask

    // ---------------- checks on the built state ----------------
    // functional coverage: what the injected faults turned into
    int cov_kind [9];
    int cov_out  [4];     // clean boot, spare, ecc-assist, unavailable
    int cov_cls  [8];
    function automatic void tally();
        for (int k = 0; k < NFLT; k++) if (f_en[k]) cov_kind[f_kind[k]]++;
        if (f_en == '0) cov_out[0]++;
        for (int r = 0; r < LROWS; r++) begin
            if (e_rem[r])  cov_out[1]++;
            if (e_asst[r]) cov_out[2]++;
            if (e_unav[r]) cov_out[3]++;
        end
    endfunction

    task automatic check_state(input string tag);
        int nb = 0, nr = 0, na = 0, nu = 0;
        model();
        tally();
        for (int p = 0; p < PROWS; p++) begin
            chk(dbg_bad_phys[p] === e_bad[p], $sformatf("%s: bad_phys[%0d] dut=%b exp=%b", tag, p, dbg_bad_phys[p], e_bad[p]));
            nb += int'(e_bad[p]);
        end
        for (int r = 0; r < LROWS; r++) begin
            chk(dbg_map_flat[r*5 +: 5] === e_map[r], $sformatf("%s: map[%0d] dut=%0d exp=%0d", tag, r, dbg_map_flat[r*5 +: 5], e_map[r]));
            chk(dbg_unavail[r] === e_unav[r], $sformatf("%s: unavail[%0d]", tag, r));
            chk(dbg_assist[r]  === e_asst[r], $sformatf("%s: assist[%0d]", tag, r));
            nr += int'(e_rem[r]); na += int'(e_asst[r]); nu += int'(e_unav[r]);
        end
        chk(int'(fault_count) == nb, $sformatf("%s: fault_count %0d exp %0d", tag, fault_count, nb));
        chk(int'(remapped_count) == nr, $sformatf("%s: remapped_count %0d exp %0d", tag, remapped_count, nr));
        chk(degraded === ((na + nu) != 0), $sformatf("%s: degraded flag", tag));
        begin
            bit u0 = 0, u1 = 0;
            for (int r = 0; r < LROWS; r++) begin
                if (e_map[r] == 5'd16) u0 = 1;
                if (e_map[r] == 5'd17) u1 = 1;
            end
            chk(dbg_spare_used === {u1, u0}, $sformatf("%s: spare_used %b exp %b%b", tag, dbg_spare_used, u1, u0));
        end
    endtask

    bit [7:0] shadow [LROWS];

    // write every row, read everything back; rows the DUT calls unavailable must error
    task automatic sweep(input string tag, input int rounds = 2);
        for (int k = 0; k < rounds; k++) begin
            for (int r = 0; r < LROWS; r++) begin
                shadow[r] = 8'($urandom);
                host_op(1'b1, r, int'(shadow[r]));
                chk(g_err === dbg_unavail[r], $sformatf("%s: write err flag row %0d", tag, r));
            end
            for (int r = LROWS-1; r >= 0; r--) begin
                host_op(1'b0, r, 0);
                if (dbg_unavail[r]) chk(g_err === 1'b1, $sformatf("%s: read of unavailable row %0d did not error", tag, r));
                else begin
                    chk(g_err === 1'b0, $sformatf("%s: unexpected error row %0d", tag, r));
                    chk(g_data === shadow[r], $sformatf("%s: row %0d read %02h expected %02h", tag, r, g_data, shadow[r]));
                end
                chk(g_lat <= 6, $sformatf("%s: read latency %0d", tag, g_lat));
            end
        end
        // corner patterns on every usable row
        for (int r = 0; r < LROWS; r++) begin
            if (!dbg_unavail[r]) begin
                foreach (pats[i]) begin
                    host_op(1'b1, r, int'(pats[i]));
                    host_op(1'b0, r, 0);
                    chk(g_data === pats[i] && !g_err, $sformatf("%s: row %0d pattern %02h got %02h", tag, r, pats[i], g_data));
                end
                shadow[r] = 8'h00;
                host_op(1'b1, r, 0);
            end
        end
    endtask
    bit [7:0] pats [8];

    // ---------------- scrub helpers ----------------
    task automatic wait_scrub_idle(input int maxc = 6000);
        int g = 0;
        tick(3);
        while ((scrub_busy || dut.u_scrub.round_on || dut.u_scrub.hint_pend) && g < maxc) begin tick(); g++; end
        chk(g < maxc, "scrub never went idle");
        settle();
    endtask

    task automatic patrol();
        @(negedge clk); scrub_req = 1'b1;
        @(negedge clk); scrub_req = 1'b0;
        wait_scrub_idle();
    endtask

    // status registers are read round-robin in the background; call settle() first
    logic [31:0] regmirror [16];
    always @(posedge clk) begin
        regmirror[reg_addr] <= reg_rdata;
        reg_addr <= reg_addr + 4'd1;
    end
    function automatic int stat(input int a);
        return int'(regmirror[a]);
    endfunction
    task automatic settle();
        tick(20);
    endtask

    // ---------------- directed tests ----------------
    task automatic t_basic();
        phase = "basic";
        clear_faults();
        do_reset();
        chk(req_ready === 1'b0, "ready high in reset");
        rst_n = 1'b1;
        tick(3);
        chk(init_done === 1'b0 && bist_busy === 1'b1, "booting flags");
        chk(req_ready === 1'b0, "ready before init");
        while (!init_done) tick();
        tick(2);
        chk(req_ready === 1'b1, "ready after init");
        check_state("clean");
        chk(degraded === 1'b0 && fault_count == 0, "clean flags");
        sweep("clean");
        settle();
        chk(stat(0) == (ECC_EN ? 32'h21 : 32'h01) && data_lost === 1'b0, $sformatf("STATUS reg %h", stat(0)));
    endtask

    task automatic t_each_single();
        phase = "single";
        for (int k = 1; k <= 8; k++) begin
            for (int r = 0; r < PROWS; r++) begin
                clear_faults();
                set_fault(0, k, r, (r * 5 + k) % PW);
                boot();
                check_state($sformatf("kind%0d row%0d", k, r));
                sweep($sformatf("kind%0d row%0d", k, r), 1);
            end
        end
    endtask

    task automatic t_all_bits();
        phase = "bits";
        for (int k = 1; k <= 4; k++)
            for (int b = 0; b < PW; b++)
                foreach (rows_b[j]) begin
                    clear_faults();
                    set_fault(0, k, rows_b[j], b);
                    boot();
                    check_state($sformatf("kind%0d row%0d bit%0d", k, rows_b[j], b));
                    sweep("bits", 1);
                end
    endtask
    int rows_b [3];

    task automatic t_classes();
        phase = "class";
        for (int k = 1; k <= 8; k++) begin
            if (k != 7) begin
            clear_faults();
            set_fault(0, k, 5, 2);
            boot();
            dbg_class_row = 5'd5;
            tick(1);
            case (k)
                FK_SA1:    chk(dbg_class == FC_STUCK_HI, $sformatf("SA1 class %0d", dbg_class));
                FK_SA0:    chk(dbg_class == FC_NO_RISE,  $sformatf("SA0 class %0d", dbg_class));
                FK_TF_UP:  chk(dbg_class == FC_NO_RISE,  $sformatf("TF_UP class %0d", dbg_class));
                FK_TF_DN:  chk(dbg_class == FC_NO_FALL || dbg_class == FC_STUCK_HI, $sformatf("TF_DN class %0d", dbg_class));
                FK_COUPLE: chk(dbg_class == FC_PATTERN,  $sformatf("couple class %0d", dbg_class));
                default:   chk(dbg_class == FC_MULTI,    $sformatf("row fault class %0d", dbg_class));
            endcase
            end
        end
        // ALIAS: the victim row is the one flagged
        clear_faults(); set_fault(0, FK_ALIAS, 3, 0); boot();
        dbg_class_row = 5'd4; tick(1);
        chk(dbg_class == FC_MULTI, "alias victim class");
        dbg_class_row = 5'd3; tick(1);
        chk(dbg_class == FC_NONE, "alias aggressor must stay clean");
    endtask

    task automatic t_random();
        phase = "random";
        for (int n = 0; n < NRAND; n++) begin
            int nf = $urandom_range(1, NFLT);
            clear_faults();
            for (int s = 0; s < nf; s++)
                set_fault(s, $urandom_range(1, 8), $urandom_range(0, PROWS-1), $urandom_range(0, PW-1));
            boot();
            check_state($sformatf("rand%0d", n));
            sweep($sformatf("rand%0d", n), 1);
        end
    endtask

    // fault that only shows up after BIST: the recovery check has to catch it
    task automatic late_fault(input int slot, input int kind, input int row, input int bitn,
                              input int kind2 = 0, input int row2 = 0);
        int g = 0;
        do_reset();
        rst_n = 1'b1;
        while (!dut.bist_done && g < 3000) begin tick(); g++; end
        set_fault(slot, kind, row, bitn);
        if (kind2 != 0) set_fault(slot + 1, kind2, row2, 0);
        g = 0;
        while (!init_done && g < 3000) begin tick(); g++; end
        chk(init_done, "late fault boot");
        settle();
    endtask

    task automatic t_recovery();
        phase = "recovery";
        // hard row on spare 16 appears after BIST
        clear_faults(); set_fault(0, FK_SA1, 5, 1);
        late_fault(1, FK_ROW1, 16, 0);
        chk(dbg_map_flat[5*5 +: 5] === 5'd17, $sformatf("row5 should have moved to 17, is %0d", dbg_map_flat[5*5 +: 5]));
        chk(dbg_bad_phys[16] === 1'b1, "spare 16 should be marked bad");
        chk((stat(4) >> 15) == 1, $sformatf("verify fail counter %0d", stat(4) >> 15));
        sweep("rec1", 1);
        // both spares die late: severe row has nowhere to go
        clear_faults(); set_fault(0, FK_ROW0, 7, 0);
        late_fault(1, FK_ROW1, 16, 0, FK_ROW1, 17);
        chk(dbg_unavail[7] === 1'b1, "row7 should be unavailable");
        chk(degraded === 1'b1, "degraded");
        sweep("rec2", 1);
        // single-bit row, spares die late: ECC-assist (or unavailable without ECC)
        clear_faults(); set_fault(0, FK_SA0, 2, 4);
        late_fault(1, FK_ROW1, 16, 0, FK_ROW0, 17);
        if (ECC_EN) chk(dbg_assist[2] === 1'b1 && dbg_unavail[2] === 1'b0, "row2 should fall back to ecc assist");
        else        chk(dbg_unavail[2] === 1'b1, "row2 unavailable without ecc");
        sweep("rec3", 1);
    endtask

    task automatic t_degrade();
        phase = "degrade";
        // three single-bit rows, two spares
        clear_faults(); set_fault(0, FK_SA0, 3, 1); set_fault(1, FK_SA1, 8, 2); set_fault(2, FK_TF_UP, 12, 5);
        boot(); check_state("three"); sweep("three", 1);
        chk(degraded === 1'b1, "three faults degraded");
        // single-bit rows + one multi-bit row: severity ordering gives the multi-bit row a spare
        clear_faults(); set_fault(0, FK_SA1, 1, 0); set_fault(1, FK_SA0, 2, 3); set_fault(2, FK_ROW1, 14, 0);
        boot(); check_state("severity"); sweep("severity", 1);
        if (ECC_EN) chk(dbg_map_flat[14*5 +: 5] != 5'd14 && dbg_unavail[14] === 1'b0, "multi-bit row must win a spare");
        // three multi-bit rows: last one unavailable
        clear_faults(); set_fault(0, FK_ROW0, 2, 0); set_fault(1, FK_ROW1, 6, 0); set_fault(2, FK_ROW1, 10, 0);
        boot(); check_state("unavail"); sweep("unavail", 1);
        chk(dbg_unavail[10] === 1'b1, "row10 should be unavailable");
    endtask

    task automatic t_protocol();
        phase = "protocol";
        clear_faults();
        do_reset();
        // host tries to talk during boot
        rst_n = 1'b1;
        @(negedge clk); req_valid = 1'b1; req_write = 1'b1; req_addr = 4'd3; req_wdata = 8'hA5;
        tick(50);
        chk(rsp_valid === 1'b0 && req_ready === 1'b0, "request must not be served during boot");
        while (!init_done) tick();
        // held request gets served now
        tick(2);
        @(negedge clk); req_valid = 1'b0;
        tick(10);
        host_op(1'b0, 3, 0);
        chk(g_data === 8'hA5 || g_data === 8'h00, "held write either happened once or never");
        // random traffic with gaps, every row written once first so the shadow is valid
        fill_random();
        for (int i = 0; i < 400; i++) begin
            int r = $urandom_range(0, 15);
            if ($urandom_range(0, 1)) begin
                shadow[r] = 8'($urandom);
                host_op(1'b1, r, int'(shadow[r]));
            end else begin
                bit [7:0] prev = shadow[r];
                host_op(1'b0, r, 0);
                chk(g_data === prev || g_err, "traffic read mismatch");
            end
            tick($urandom_range(0, 5));
        end
        // reset in the middle of boot, then boot again with a fault
        clear_faults(); set_fault(0, FK_SA1, 9, 3);
        do_reset(); rst_n = 1'b1;
        tick($urandom_range(30, 400));
        boot();
        check_state("reset mid boot"); sweep("reset mid boot", 1);
        // reset in the middle of a scrub
        scrub_en = 1'b1; @(negedge clk); scrub_req = 1'b1; @(negedge clk); scrub_req = 1'b0;
        tick(40);
        clear_faults(); boot(); check_state("reset mid scrub"); sweep("reset mid scrub", 1);
    endtask

    // ---------------- run-time healing ----------------
    task automatic fill_random();
        for (int r = 0; r < LROWS; r++) begin
            if (!dbg_unavail[r]) begin
                shadow[r] = 8'($urandom);
                host_op(1'b1, r, int'(shadow[r]));
            end
        end
    endtask

    task automatic verify_all(input string tag, input bit allow_fix = 1);
        for (int r = 0; r < LROWS; r++) begin
            if (!dbg_unavail[r]) begin
                host_op(1'b0, r, 0);
                chk(!g_err && g_data === shadow[r], $sformatf("%s: row %0d got %02h exp %02h err=%b", tag, r, g_data, shadow[r], g_err));
            end
        end
    endtask

    task automatic t_scrub();
        phase = "scrub";
        // clean patrol must not change anything
        clear_faults(); boot(); fill_random(); scrub_en = 1'b1;
        patrol();
        chk(stat(7) >>> 24 == 1, "one round counted");
        chk((stat(7) & 8'hFF) == 18 - 0 || (stat(7) & 8'hFF) == 16 + 2, $sformatf("rows checked %0d", stat(7) & 8'hFF));
        chk(dbg_bad_phys == 0 && remapped_count == 0, "clean patrol changed state");
        verify_all("clean patrol");

        if (!ECC_EN) begin
            // no ECC: a row that dies later is still detected and moved, but stuck data bits are not recoverable
            set_fault(0, FK_ROW1, 6, 0); patrol();
            chk(dbg_map_flat[6*5 +: 5] === 5'd16, "no-ecc runtime remap");
        end else begin

        // 1. one fault shows up at run time, patrol finds it and moves the row, data survives
        fill_random();
        set_fault(0, FK_SA1, 5, 3);                    // physical row 5, bit 3
        patrol();
        chk(dbg_map_flat[5*5 +: 5] === 5'd16, $sformatf("row5 migrated to %0d", dbg_map_flat[5*5 +: 5]));
        chk(dbg_bad_phys[5] === 1'b1 && fault_count == 1, "row5 logged");
        chk(((stat(7) >> 16) & 8'hFF) == 1, "one migration");
        verify_all("migrate 1");
        sweep("after migrate 1", 1);

        // 2. second fault, second spare
        fill_random();
        set_fault(1, FK_TF_UP, 11, 7); sweep("tf write", 1);   // writes while faulty
        fill_random();
        patrol();
        chk(dbg_map_flat[11*5 +: 5] === 5'd17, "row11 migrated to spare 17");
        verify_all("migrate 2");

        // 3. no spare left: single-bit row goes to ECC assist, data still intact
        fill_random();
        set_fault(2, FK_SA0, 2, 0);
        patrol();
        chk(dbg_assist[2] === 1'b1 && dbg_unavail[2] === 1'b0, "row2 ecc assist");
        chk(degraded === 1'b1, "degraded after spares gone");
        verify_all("assist");
        patrol();                                      // second round: nothing new, assist row stays
        chk(dbg_assist[2] === 1'b1 && ((stat(7) >> 16) & 8'hFF) == 2, "second round stable");
        verify_all("assist 2");
        end
    endtask

    task automatic t_hint();
        phase = "hint";
        if (ECC_EN) begin
        clear_faults(); boot(); scrub_en = 1'b1;
        fill_random();
        // SA fault whose stuck value differs from the stored data: reads need correction
        shadow[9] = 8'h00; host_op(1'b1, 9, 0);
        set_fault(0, FK_SA1, 9, 2);
        host_op(1'b0, 9, 0);
        chk(g_data === 8'h00 && g_fix === 1'b1 && !g_err, "corrected read flagged");
        tick(300);                                     // hint should fire the scrubber on its own
        wait_scrub_idle();
        chk(dbg_map_flat[9*5 +: 5] === 5'd16, "hint healed row 9 without patrol");
        chk(((stat(6) & 16'hFFFF) >= 1), "ecc counter");
        host_op(1'b0, 9, 0);
        chk(g_data === 8'h00 && !g_fix && !g_err, "row 9 clean after heal");
        verify_all("hint");
        // two bad bits written before detection: uncorrectable, error response
        clear_faults(); boot(); scrub_en = 1'b0;
        shadow[4] = 8'h00; host_op(1'b1, 4, 0);
        set_fault(0, FK_SA1, 4, 1); set_fault(1, FK_SA1, 4, 6);
        host_op(1'b0, 4, 0);
        chk(g_err === 1'b1, "double error must raise rsp_error");
        settle();
        chk(((stat(6) >> 16) & 16'hFFFF) >= 1, "uncorrectable counter");
        end
    endtask

    // ---------------- uncorrectable ECC: data is lost, never "recovered" ----------------
    task automatic t_lost();
        phase = "lost";
        if (ECC_EN) begin
            // (a) host read hits a double error, scrubber retires the row
            clear_faults(); boot(); scrub_en = 1'b1;
            fill_random();
            shadow[4] = 8'h00; host_op(1'b1, 4, 0);
            set_fault(0, FK_SA1, 4, 1); set_fault(1, FK_SA1, 4, 6);     // codeword bits that disagree with the stored zeros
            host_op(1'b0, 4, 0);
            chk(g_err === 1'b1, "double error read must error");
            tick(300); wait_scrub_idle();
            chk(dbg_unavail[4] === 1'b1, "lost row must become unavailable");
            chk(data_lost === 1'b1, "data_lost must be sticky-set");
            chk(dbg_map_flat[4*5 +: 5] === 5'd4 && remapped_count == 0 && dbg_spare_used == 2'b00,
                "lost data must not be migrated into a spare");
            chk(((stat(0) >> 6) & 1) == 1, "STATUS.data_lost");
            chk((stat(8) & 16'hFFFF) == 16'h0010, $sformatf("lost map %h", stat(8) & 16'hFFFF));
            chk(((stat(8) >> 16) & 8'hFF) == 1, "loss counter");
            host_op(1'b0, 4, 0); chk(g_err === 1'b1, "later read of lost row errors");
            host_op(1'b1, 4, 8'h77); chk(g_err === 1'b1, "later write of lost row errors");
            for (int r = 0; r < LROWS; r++) if (r != 4) begin
                host_op(1'b0, r, 0);
                chk(!g_err && g_data === shadow[r], $sformatf("lost: neighbour row %0d disturbed", r));
            end
            // patrol must leave a lost row alone and keep the flag
            patrol();
            chk(data_lost === 1'b1 && dbg_unavail[4] === 1'b1, "patrol changed lost state");
            // status clear: flag and counters go, the row stays unavailable
            @(negedge clk); status_clear = 1'b1; @(negedge clk); status_clear = 1'b0; settle();
            chk(data_lost === 1'b0 && (stat(8) & 16'hFFFF) == 0, "status_clear did not clear");
            chk(dbg_unavail[4] === 1'b1, "status_clear must not resurrect the row");
            // reset clears everything
            clear_faults(); boot();
            chk(data_lost === 1'b0 && dbg_unavail == 0, "reset must clear data_lost");

            // (b) patrol finds it first (no host read): two cells die in a row holding data
            clear_faults(); boot(); scrub_en = 1'b1; fill_random();
            set_fault(0, FK_SA1, 6, 1); set_fault(1, FK_SA1, 6, 6);      // both disagree with an all-zero codeword
            shadow[6] = 8'h00; host_op(1'b1, 6, 8'h00);
            patrol();
            chk(dbg_unavail[6] === 1'b1 && data_lost === 1'b1, "patrol-found double error retires the row");
            chk(remapped_count == 0, "patrol must not migrate unrecoverable data");

            // (c) one bad cell plus a stuck cell elsewhere in the word is still just single-bit: migrated, not lost
            clear_faults(); boot(); scrub_en = 1'b1; fill_random();
            set_fault(0, FK_SA1, 8, 5);
            patrol();
            chk(data_lost === 1'b0 && dbg_map_flat[8*5 +: 5] === 5'd16, "single bit must migrate cleanly");
            verify_all("lost (c)");
        end else begin
            // no ECC: nothing can be uncorrectable, so the flag must never rise
            clear_faults(); boot(); scrub_en = 1'b1; fill_random();
            set_fault(0, FK_SA1, 4, 1); set_fault(1, FK_SA1, 4, 6);
            patrol();
            chk(data_lost === 1'b0, "no-ecc build must not report data loss");
        end
    endtask

    // faults keep arriving while the host hammers the memory
    task automatic t_storm();
        int injected = 0;
        bit [PROWS-1:0] used_rows = '0;
        phase = "storm";
        if (ECC_EN) begin
        clear_faults(); boot(); scrub_en = 1'b1; fill_random();
        for (int e = 0; e < 5; e++) begin
            int p, kind;
            // pick a physical row that is in use and not damaged yet
            do p = $urandom_range(0, PROWS-1); while (used_rows[p] || e_row_gone(p));
            used_rows[p] = 1'b1;
            kind = $urandom_range(1, 4);
            if ($urandom_range(0, 4) == 0) kind = FK_COUPLE;
            set_fault(e % NFLT, kind, p, $urandom_range(0, PW-1));
            injected++;
            for (int i = 0; i < 250; i++) begin
                int r = $urandom_range(0, 15);
                if ($urandom_range(0, 2) == 0) begin
                    shadow[r] = 8'($urandom);
                    host_op(1'b1, r, int'(shadow[r]));
                    chk(!g_err, "storm write error");
                end else begin
                    host_op(1'b0, r, 0);
                    chk(!g_err && g_data === shadow[r], $sformatf("storm row %0d got %02h exp %02h", r, g_data, shadow[r]));
                end
                tick($urandom_range(0, 12));
                if (i % 80 == 79) begin @(negedge clk); scrub_req = 1; @(negedge clk); scrub_req = 0; end
            end
            wait_scrub_idle();
            // slots are reused, the older fault is physically still there only if its slot lives on
            if (e >= NFLT - 1) begin end
        end
        patrol(); patrol();
        verify_all("storm end");
        chk(dbg_unavail == 0, "no row may be lost to single-bit faults");
        end
    endtask

    // a physical row nobody uses any more (replaced) is not worth damaging again
    function automatic bit e_row_gone(input int p);
        for (int r = 0; r < LROWS; r++) if (dbg_map_flat[r*5 +: 5] == 5'(p)) return 1'b0;
        return 1'b1;
    endfunction

    task automatic t_period();
        phase = "period";
        if (PERIOD != 0) begin
        clear_faults(); boot(); scrub_en = 1'b1; fill_random();
        set_fault(0, FK_SA1, 13, 5);
        tick(PERIOD * 2 + 3000);
        wait_scrub_idle();
        if (ECC_EN) begin
            chk(dbg_map_flat[13*5 +: 5] === 5'd16, "timer patrol repaired row 13");
            verify_all("period");
        end
        chk(stat(7) >>> 24 >= 1, "timer started a round");
        end
    endtask

    // ---------------- main ----------------
    int seed, rnd_seed;
    initial begin
        if (!$value$plusargs("seed=%d", seed)) seed = 1;
        rnd_seed = seed;
        void'($urandom(rnd_seed));
        if ($test$plusargs("vcd")) begin
            $dumpfile("sim/regenx.vcd");
            $dumpvars(0, regenx_tb.dut);
        end
        pats[0] = 8'h00; pats[1] = 8'hFF; pats[2] = 8'h55; pats[3] = 8'hAA;
        pats[4] = 8'h01; pats[5] = 8'h80; pats[6] = 8'h0F; pats[7] = 8'hF0;
        rows_b[0] = 0; rows_b[1] = 9; rows_b[2] = 16;
        clear_faults();
        t_basic();
        t_classes();
        t_degrade();
        t_recovery();
        t_protocol();
        t_scrub();
        t_hint();
        t_lost();
        t_storm();
        t_period();
        t_each_single();
        t_all_bits();
        t_random();
        $display("COVERAGE fault kinds (slots): SA0=%0d SA1=%0d TF_UP=%0d TF_DN=%0d ROW0=%0d ROW1=%0d ALIAS=%0d COUPLE=%0d",
                 cov_kind[1], cov_kind[2], cov_kind[3], cov_kind[4], cov_kind[5], cov_kind[6], cov_kind[7], cov_kind[8]);
        $display("COVERAGE outcomes: clean_boots=%0d rows_in_spare=%0d rows_ecc_assist=%0d rows_unavailable=%0d",
                 cov_out[0], cov_out[1], cov_out[2], cov_out[3]);
        $display("------------------------------------------------------------");
        $display("ECC_EN=%0d seed=%0d boots=%0d checks=%0d errors=%0d", ECC_EN, seed, boots, checks, errors);
        if (errors == 0) $display("TB_RESULT: PASS");
        else             $display("TB_RESULT: FAIL");
        $finish;
    end

    initial begin
        #2000000000;
        $display("TB_RESULT: FAIL (watchdog)");
        $finish;
    end
endmodule
