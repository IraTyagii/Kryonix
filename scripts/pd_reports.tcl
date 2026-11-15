# timing / area / power on the routed database with extracted parasitics.
# run through scripts/run_pd.sh (output is redirected to reports/pd_summary.rpt)
set root [file dirname [file dirname [file normalize [info script]]]]
cd $root
set plat $root/deps/nangate45
read_lef $plat/NangateOpenCellLibrary.tech.lef
read_lef $plat/NangateOpenCellLibrary.macro.mod.lef
read_liberty $plat/NangateOpenCellLibrary_typical.lib
read_db pd/04_route.odb
read_sdc scripts/regenx.sdc
set_propagated_clock [get_clocks clk]
# routed numbers: RC extracted from the detailed routing (OpenRCX), not a placement estimate
read_spef pd/regenx_top.spef
puts "parasitics: post-route extraction (pd/regenx_top.spef)"
puts "==== design area ===="
report_design_area
puts "==== worst slack (max / min), post-route ===="
report_worst_slack -max
report_worst_slack -min
puts "==== tns / wns ===="
report_tns
report_wns
puts "==== clock skew ===="
report_clock_skew
puts "==== power ===="
report_power
puts "==== setup path ===="
report_checks -path_delay max -digits 3
puts "==== hold path ===="
report_checks -path_delay min -digits 3
puts "PD_REPORTS_DONE"
