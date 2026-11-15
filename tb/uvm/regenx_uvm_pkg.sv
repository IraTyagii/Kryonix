// regenx_uvm_pkg.sv - UVM environment for REGEN-X.
//
// agent    : driver + monitor on the host port
// scoreboard: shadow memory; rows the DUT reports unavailable must answer with an error
// coverage : operations, rows, response kinds, fault scenarios
// tests    : boot with a chosen fault set, then run traffic (optionally healing at run time)

`timescale 1ns/1ps

package regenx_uvm_pkg;
    import uvm_pkg::*;
    import regenx_pkg::*;
    `include "uvm_macros.svh"

    typedef enum {OP_WRITE, OP_READ, OP_SCRUB, OP_IDLE} regenx_op_e;

    // ------------------------------------------------------------------
    class regenx_item extends uvm_sequence_item;
        rand regenx_op_e  op;
        rand bit [3:0]    addr;
        rand bit [7:0]    wdata;
        rand int unsigned gap;

        bit [7:0]         rdata;
        bit               error;
        bit               corrected;
        int               latency;

        constraint c_gap  { gap inside {[0:6]}; }
        constraint c_op   { op dist {OP_WRITE := 45, OP_READ := 45, OP_SCRUB := 2, OP_IDLE := 8}; }

        `uvm_object_utils_begin(regenx_item)
            `uvm_field_enum(regenx_op_e, op, UVM_ALL_ON)
            `uvm_field_int(addr,  UVM_ALL_ON)
            `uvm_field_int(wdata, UVM_ALL_ON)
            `uvm_field_int(rdata, UVM_ALL_ON | UVM_NOCOMPARE)
            `uvm_field_int(error, UVM_ALL_ON | UVM_NOCOMPARE)
        `uvm_object_utils_end

        function new(string name = "regenx_item");
            super.new(name);
        endfunction
    endclass

    // one injected defect
    class regenx_fault extends uvm_object;
        rand fault_kind_t kind;
        rand bit [4:0]    row;
        rand bit [3:0]    bitn;
        constraint c_row { row < PROWS; bitn < CW; kind != FK_NONE; }
        `uvm_object_utils(regenx_fault)
        function new(string name = "regenx_fault");
            super.new(name);
        endfunction
    endclass

    // ------------------------------------------------------------------
    class regenx_driver extends uvm_driver #(regenx_item);
        `uvm_component_utils(regenx_driver)
        virtual regenx_if vif;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if (!uvm_config_db#(virtual regenx_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", "regenx_driver: no virtual interface")
        endfunction

        task run_phase(uvm_phase phase);
            forever begin
                seq_item_port.get_next_item(req);
                drive(req);
                seq_item_port.item_done();
            end
        endtask

        task drive(regenx_item t);
            repeat (t.gap) @(vif.drv_cb);
            case (t.op)
                OP_SCRUB: begin
                    vif.drv_cb.scrub_req <= 1'b1;
                    @(vif.drv_cb);
                    vif.drv_cb.scrub_req <= 1'b0;
                end
                OP_IDLE: @(vif.drv_cb);
                default: begin
                    vif.drv_cb.req_valid <= 1'b1;
                    vif.drv_cb.req_write <= (t.op == OP_WRITE);
                    vif.drv_cb.req_addr  <= t.addr;
                    vif.drv_cb.req_wdata <= t.wdata;
                    do @(vif.drv_cb); while (!vif.drv_cb.req_ready);
                    vif.drv_cb.req_valid <= 1'b0;
                    // the monitor reports the response; just wait for it here
                    do @(vif.drv_cb); while (!vif.drv_cb.rsp_valid);
                end
            endcase
        endtask
    endclass

    // ------------------------------------------------------------------
    // Latency convention (checked against the waveform, see scripts/uvm_latency_check.py):
    // the accept is sampled on edge k, rsp_valid on edge k+4, so latency = 4 edges.
    class regenx_monitor extends uvm_monitor;
        `uvm_component_utils(regenx_monitor)
        virtual regenx_if vif;
        uvm_analysis_port #(regenx_item) ap;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            ap = new("ap", this);
            if (!uvm_config_db#(virtual regenx_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", "regenx_monitor: no virtual interface")
        endfunction

        task run_phase(uvm_phase phase);
            regenx_item t;
            int         age = 0;
            bit         busy = 0;
            forever begin
                @(vif.mon_cb);
                if (busy) age++;
                if (!busy && vif.mon_cb.req_valid && vif.mon_cb.req_ready) begin
                    t = regenx_item::type_id::create("t");
                    t.op    = vif.mon_cb.req_write ? OP_WRITE : OP_READ;
                    t.addr  = vif.mon_cb.req_addr;
                    t.wdata = vif.mon_cb.req_wdata;
                    busy = 1;
                    age  = 0;
                end else if (busy && vif.mon_cb.rsp_valid) begin
                    t.rdata     = vif.mon_cb.rsp_rdata;
                    t.error     = vif.mon_cb.rsp_error;
                    t.corrected = vif.mon_cb.rsp_corrected;
                    t.latency   = age;      // age counts clock edges since the accept edge
                    busy = 0;
                    ap.write(t);
                end
            end
        endtask
    endclass

    class regenx_agent extends uvm_agent;
        `uvm_component_utils(regenx_agent)
        regenx_driver                    drv;
        regenx_monitor                   mon;
        uvm_sequencer #(regenx_item)     sqr;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            mon = regenx_monitor::type_id::create("mon", this);
            drv = regenx_driver::type_id::create("drv", this);
            sqr = uvm_sequencer#(regenx_item)::type_id::create("sqr", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            drv.seq_item_port.connect(sqr.seq_item_export);
        endfunction
    endclass

    // ------------------------------------------------------------------
    class regenx_scoreboard extends uvm_subscriber #(regenx_item);
        `uvm_component_utils(regenx_scoreboard)
        virtual regenx_if vif;
        bit [7:0] shadow [LROWS];
        int n_checked, n_errors, n_unavail_hits, n_corrected;
        bit [LROWS-1:0] tolerate_err = '0;     // rows where the first error is the expected loss report

        function new(string name, uvm_component parent);
            super.new(name, parent);
            foreach (shadow[i]) shadow[i] = 8'h00;     // the BIST leaves the array cleared
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if (!uvm_config_db#(virtual regenx_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", "regenx_scoreboard: no virtual interface")
        endfunction

        function void reset_model();
            foreach (shadow[i]) shadow[i] = 8'h00;
        endfunction

        function void write(regenx_item t);
            bit gone = vif.dbg_unavail[t.addr];
            n_checked++;
            if (t.corrected) n_corrected++;
            if (t.latency != 4) begin
                n_errors++;
                `uvm_error("LAT", $sformatf("latency %0d, expected 4", t.latency))
            end
            if (gone) begin
                n_unavail_hits++;
                if (!t.error) begin
                    n_errors++;
                    `uvm_error("UNAVAIL", $sformatf("row %0d is unavailable but %s did not fail", t.addr, t.op.name()))
                end
            end else begin
                if (t.error && tolerate_err[t.addr]) begin
                    n_unavail_hits++;
                end else if (t.error) begin
                    n_errors++;
                    `uvm_error("SPURIOUS", $sformatf("unexpected error on %s row %0d", t.op.name(), t.addr))
                end else if (t.op == OP_WRITE) begin
                    shadow[t.addr] = t.wdata;
                end else if (t.rdata !== shadow[t.addr]) begin
                    n_errors++;
                    `uvm_error("DATA", $sformatf("row %0d read %02h expected %02h", t.addr, t.rdata, shadow[t.addr]))
                end
            end
        endfunction

        function void report_phase(uvm_phase phase);
            `uvm_info("SCB", $sformatf("checked=%0d errors=%0d unavailable-row hits=%0d corrected=%0d",
                                       n_checked, n_errors, n_unavail_hits, n_corrected), UVM_LOW)
            if (n_errors != 0) `uvm_error("SCB", "scoreboard mismatches")
        endfunction
    endclass

    // ------------------------------------------------------------------
    class regenx_coverage extends uvm_subscriber #(regenx_item);
        `uvm_component_utils(regenx_coverage)
        regenx_item it;
        fault_kind_t cov_kind;
        int          cov_nfaults;
        bit          cov_degraded;

        covergroup cg_host;
            cp_op:    coverpoint it.op { bins wr = {OP_WRITE}; bins rd = {OP_READ}; }
            cp_row:   coverpoint it.addr { bins rows[] = {[0:15]}; }
            cp_err:   coverpoint it.error;
            cp_fix:   coverpoint it.corrected;
            cp_lat:   coverpoint it.latency { bins ok = {4}; bins other = default; }
            x_op_row: cross cp_op, cp_row;
            x_op_err: cross cp_op, cp_err;
        endgroup

        covergroup cg_scenario;
            cp_kind:  coverpoint cov_kind { bins kinds[] = {[FK_SA0:FK_COUPLE]}; }
            cp_nflt:  coverpoint cov_nfaults { bins n[] = {[0:3]}; }
            cp_deg:   coverpoint cov_degraded;
            x_kn:     cross cp_kind, cp_nflt;
        endgroup

        function new(string name, uvm_component parent);
            super.new(name, parent);
            cg_host     = new();
            cg_scenario = new();
        endfunction

        function void write(regenx_item t);
            it = t;
            cg_host.sample();
        endfunction

        function void sample_scenario(fault_kind_t k, int n, bit deg);
            cov_kind = k; cov_nfaults = n; cov_degraded = deg;
            cg_scenario.sample();
        endfunction
    endclass

    class regenx_env extends uvm_env;
        `uvm_component_utils(regenx_env)
        regenx_agent      agent;
        regenx_scoreboard scb;
        regenx_coverage   cov;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agent = regenx_agent::type_id::create("agent", this);
            scb   = regenx_scoreboard::type_id::create("scb", this);
            cov   = regenx_coverage::type_id::create("cov", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            agent.mon.ap.connect(scb.analysis_export);
            agent.mon.ap.connect(cov.analysis_export);
        endfunction
    endclass

    // ------------------------------------------------------------------
    class regenx_traffic_seq extends uvm_sequence #(regenx_item);
        `uvm_object_utils(regenx_traffic_seq)
        int unsigned n = 200;
        bit          fill_first = 1;

        function new(string name = "regenx_traffic_seq");
            super.new(name);
        endfunction

        task body();
            regenx_item t;
            if (fill_first) begin
                // write every row once so the shadow memory is meaningful
                for (int r = 0; r < LROWS; r++) begin
                    t = regenx_item::type_id::create("fill");
                    start_item(t);
                    if (!t.randomize() with { op == OP_WRITE; addr == r; gap == 0; })
                        `uvm_fatal("RAND", "fill randomize failed")
                    finish_item(t);
                end
            end
            repeat (n) begin
                t = regenx_item::type_id::create("t");
                start_item(t);
                if (!t.randomize()) `uvm_fatal("RAND", "randomize failed")
                finish_item(t);
            end
        endtask
    endclass

    class regenx_sequence_one extends uvm_sequence #(regenx_item);
        `uvm_object_utils(regenx_sequence_one)
        regenx_op_e op;
        bit [3:0]   addr;
        bit [7:0]   data;
        function new(string name = "regenx_sequence_one");
            super.new(name);
        endfunction
        function void set(regenx_op_e o, bit [3:0] a, bit [7:0] d);
            op = o; addr = a; data = d;
        endfunction
        task body();
            regenx_item t = regenx_item::type_id::create("t");
            start_item(t);
            if (!t.randomize() with { op == local::op; addr == local::addr; wdata == local::data; gap == 0; })
                `uvm_fatal("RAND", "one-op randomize failed")
            finish_item(t);
        endtask
    endclass

    // ------------------------------------------------------------------
    class regenx_base_test extends uvm_test;
        `uvm_component_utils(regenx_base_test)
        regenx_env        env;
        virtual regenx_if vif;
        fault_kind_t      first_kind = FK_NONE;
        int               nfaults;
        bit               runtime_heal;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if (!uvm_config_db#(virtual regenx_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", "test: no virtual interface")
            env = regenx_env::type_id::create("env", this);
            uvm_config_db#(virtual regenx_if)::set(this, "env.*", "vif", vif);
        endfunction

        // tests override this to choose what is broken at power-up
        virtual function void configure_faults();
        endfunction

        task run_phase(uvm_phase phase);
            regenx_traffic_seq seq = regenx_traffic_seq::type_id::create("seq");
            phase.raise_objection(this);
            vif.clear_faults();
            configure_faults();
            vif.boot();
            if (!vif.init_done) `uvm_fatal("BOOT", "init_done never rose")
            env.scb.reset_model();
            if (runtime_heal) vif.scrub_en = 1'b1;
            seq.n = 300;
            seq.start(env.agent.sqr);
            post_traffic();
            env.cov.sample_scenario(first_kind, nfaults, vif.degraded);
            phase.drop_objection(this);
        endtask

        virtual task post_traffic();
        endtask
    endclass

    class regenx_clean_test extends regenx_base_test;
        `uvm_component_utils(regenx_clean_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
    endclass

    // one defect of a kind picked with +KIND=n, on a random physical row
    class regenx_single_fault_test extends regenx_base_test;
        `uvm_component_utils(regenx_single_fault_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void configure_faults();
            regenx_fault f = regenx_fault::type_id::create("f");
            int k;
            if (!$value$plusargs("KIND=%d", k)) k = 1;
            if (!f.randomize() with { kind == fault_kind_t'(k); }) `uvm_fatal("RAND", "fault")
            vif.set_fault(0, f.kind, f.row, f.bitn);
            first_kind = f.kind; nfaults = 1;
        endfunction
    endclass

    // three bad rows, two spares: ECC-assist (or an unavailable row) has to take over
    class regenx_spare_exhaustion_test extends regenx_base_test;
        `uvm_component_utils(regenx_spare_exhaustion_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void configure_faults();
            vif.set_fault(0, FK_SA0,   3, 1);
            vif.set_fault(1, FK_SA1,   8, 2);
            vif.set_fault(2, FK_TF_UP, 12, 5);
            first_kind = FK_SA0; nfaults = 3;
        endfunction
    endclass

    // multi-bit row competes with single-bit rows for the spares
    class regenx_severity_test extends regenx_base_test;
        `uvm_component_utils(regenx_severity_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void configure_faults();
            vif.set_fault(0, FK_SA1,  1, 0);
            vif.set_fault(1, FK_SA0,  2, 3);
            vif.set_fault(2, FK_ROW1, 14, 0);
            first_kind = FK_ROW1; nfaults = 3;
        endfunction
    endclass

    // memory is clean at boot, a cell dies during operation and the scrubber moves the row
    class regenx_runtime_heal_test extends regenx_base_test;
        `uvm_component_utils(regenx_runtime_heal_test)
        function new(string name, uvm_component parent); super.new(name, parent); runtime_heal = 1; endfunction
        task post_traffic();
            vif.set_fault(0, FK_SA1, 5, 3);
            first_kind = FK_SA1; nfaults = 1;
            vif.scrub_req = 1'b1; @(posedge vif.clk); vif.scrub_req = 1'b0;
            repeat (1500) @(posedge vif.clk);
            begin
                regenx_traffic_seq s = regenx_traffic_seq::type_id::create("s");
                s.n = 200; s.fill_first = 0;
                s.start(env.agent.sqr);
            end
            if (vif.dbg_map_flat[5*5 +: 5] != 5'd16)
                `uvm_error("HEAL", "row 5 was not migrated to a spare")
        endtask
    endclass

    // two cells die in a row that holds data: ECC cannot fix it, the row must be retired,
    // flagged as data loss, and never migrated into a spare
    class regenx_lost_data_test extends regenx_base_test;
        `uvm_component_utils(regenx_lost_data_test)
        function new(string name, uvm_component parent); super.new(name, parent); runtime_heal = 1; endfunction
        task post_traffic();
            regenx_item t;
            regenx_traffic_seq s;
            // park zero in row 4, then break two cells so both disagree with the stored word
            t = regenx_item::type_id::create("t");
            begin
                regenx_sequence_one one = regenx_sequence_one::type_id::create("one");
                one.set(OP_WRITE, 4, 8'h00);   one.start(env.agent.sqr);
                vif.set_fault(0, FK_SA1, 4, 1);
                vif.set_fault(1, FK_SA1, 4, 6);
                env.scb.tolerate_err[4] = 1'b1;
                one.set(OP_READ, 4, 8'h00);    one.start(env.agent.sqr);
            end
            repeat (400) @(posedge vif.clk);       // scrubber retires the row
            if (!vif.data_lost)          `uvm_error("LOST", "data_lost flag did not rise")
            if (!vif.dbg_unavail[4])     `uvm_error("LOST", "row 4 should be unavailable")
            if (vif.dbg_map_flat[4*5 +: 5] != 5'd4 || vif.remapped_count != 0)
                `uvm_error("LOST", "lost data must not be migrated")
            s = regenx_traffic_seq::type_id::create("s");
            s.n = 200; s.fill_first = 0;
            s.start(env.agent.sqr);               // every access to row 4 must now fail
            first_kind = FK_SA1; nfaults = 2;
        endtask
    endclass

    // random fault sets, random traffic
    class regenx_random_test extends regenx_base_test;
        `uvm_component_utils(regenx_random_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void configure_faults();
            nfaults = $urandom_range(1, NFLT);
            for (int s = 0; s < nfaults; s++) begin
                regenx_fault f = regenx_fault::type_id::create("f");
                if (!f.randomize()) `uvm_fatal("RAND", "fault")
                vif.set_fault(s, f.kind, f.row, f.bitn);
                if (s == 0) first_kind = f.kind;
            end
        endfunction
    endclass
endpackage
