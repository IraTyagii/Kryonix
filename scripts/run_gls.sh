#!/usr/bin/env bash
# gate-level equivalence: RTL vs the synthesized, fault-instrumented netlist, lockstep (Icarus)
#   ./scripts/run_gls.sh [scenarios]
source "$(dirname "$0")/env.sh"
need iverilog; need vvp
SCEN=${1:-40}
./scripts/run_synth.sh sim > reports/gls_synth.log
python3 scripts/gen_cell_models.py "$LIB" syn/regenx_top_sim_netlist.v > syn/nangate_models_sim.v
sed 's/^module regenx_top(/module regenx_top_gl(/' syn/regenx_top_sim_netlist.v > syn/regenx_top_gl.v
# shellcheck disable=SC2046
run_logged reports/gls_compile.log iverilog -g2012 -DREGENX_SIM -s gls_equiv_tb -Pgls_equiv_tb.SCEN=$SCEN -o sim/gls.vvp \
    $(cat scripts/files.f) syn/nangate_models_sim.v syn/regenx_top_gl.v tb/gls/gls_equiv_tb.sv
run_logged reports/gls.log vvp -n sim/gls.vvp
need_marker reports/gls.log "GLS_RESULT: PASS"
forbid reports/gls.log "GLS_RESULT: FAIL" "MISMATCH"
grep -E "GLS_EQUIV|GLS_RESULT" reports/gls.log
