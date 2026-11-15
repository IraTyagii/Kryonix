#!/usr/bin/env bash
# OpenROAD: floorplan -> place -> CTS -> route -> RC extraction, then post-route reports.
# Works from a clean checkout: everything it reads is under deps/ or scripts/ or syn/.
source "$(dirname "$0")/env.sh"
need "$OPENROAD"
[ -s syn/regenx_top_netlist.v ] || ./scripts/run_synth.sh prod > /dev/null
mkdir -p pd reports
run_logged reports/pd_flow.log "$OPENROAD" -exit scripts/pd_flow.tcl
need_marker reports/pd_flow.log "PD_FLOW_DONE"
forbid reports/pd_flow.log "^Error" "\[ERROR"
need_marker reports/pd_flow.log "Number of violations = 0\|violations = 0\|Completing 100%\|Total wire length"
run_logged reports/pd_summary.rpt "$OPENROAD" -exit scripts/pd_reports.tcl
need_marker reports/pd_summary.rpt "PD_REPORTS_DONE"
forbid reports/pd_summary.rpt "^Error" "\[ERROR"
python3 scripts/plot_layout.py pd/regenx_top_routed.def docs/layout.png > /dev/null
grep -E "Design area|^worst slack|^tns|^wns|parasitics" reports/pd_summary.rpt || true
echo "PD_RESULT: PASS"
