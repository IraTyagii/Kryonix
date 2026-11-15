# RTL-to-route for REGEN-X on the open Nangate45 platform (OpenROAD).
# normally started through scripts/run_pd.sh; paths are resolved from this file's location
set root [file dirname [file dirname [file normalize [info script]]]]
cd $root
set plat $root/deps/nangate45
set out  pd
file mkdir $out reports

read_lef $plat/NangateOpenCellLibrary.tech.lef
read_lef $plat/NangateOpenCellLibrary.macro.mod.lef
read_liberty $plat/NangateOpenCellLibrary_typical.lib
read_verilog syn/regenx_top_netlist.v
link_design regenx_top
read_sdc scripts/regenx.sdc

# ---- floorplan ----
initialize_floorplan -utilization 55 -aspect_ratio 1.0 -core_space 4 \
    -site FreePDK45_38x28_10R_NP_162NW_34O
source $plat/make_tracks.tcl
set ::env(MIN_ROUTING_LAYER) metal2
set ::env(MAX_ROUTING_LAYER) metal7
set ::env(MIN_CLK_ROUTING_LAYER) metal4
source $plat/setRC.tcl

place_pins -hor_layers metal3 -ver_layers metal2 -random
tapcell -distance 120 -tapcell_master TAPCELL_X1
add_global_connection -net VDD -pin_pattern VDD -power
add_global_connection -net VSS -pin_pattern VSS -ground
pdngen scripts/pdn.cfg
write_db $out/01_floorplan.odb
report_design_area

# ---- placement ----
global_placement -density 0.6 -routability_driven -timing_driven
repair_design
detailed_placement
check_placement -verbose
write_db $out/02_place.odb
report_design_area

# ---- clock tree ----
estimate_parasitics -placement
clock_tree_synthesis -root_buf CLKBUF_X3 -buf_list CLKBUF_X3 -sink_clustering_enable
set_propagated_clock [get_clocks clk]
estimate_parasitics -placement
repair_timing -slack_margin 0.01
detailed_placement
check_placement -verbose
write_db $out/03_cts.odb

# ---- route ----
set_routing_layers -signal metal2-metal7 -clock metal4-metal7
global_route -congestion_iterations 50 -verbose
detailed_route -output_drc reports/route_drc.rpt -verbose 1
write_db $out/04_route.odb

# ---- post-route RC extraction (OpenRCX) so that timing is not a placement estimate ----
define_process_corner -ext_model_index 0 X
extract_parasitics -ext_model_file $plat/rcx_patterns.rules -corner_cnt 1
write_spef $out/regenx_top.spef
write_def $out/regenx_top_routed.def
write_verilog $out/regenx_top_routed.v

puts "PD_FLOW_DONE"
