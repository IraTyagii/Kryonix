# Out-of-context synthesis of regenx_top in Vivado (no project needed).
#   vivado -mode batch -source vivado/run_synth.tcl -tclargs [PART]
# Fails (non-zero exit) on any error; prints VIVADO_SYNTH_DONE on success.
set root [file dirname [file dirname [file normalize [info script]]]]
set part [expr {[llength $argv] > 0 ? [lindex $argv 0] : "xc7a35tcpg236-1"}]
file mkdir $root/reports
foreach f {regenx_pkg regenx_ecc regenx_mem_array regenx_bist_controller regenx_fault_manager
           regenx_spare_allocator regenx_addr_remap regenx_mem_arbiter regenx_recovery_check
           regenx_repair_engine regenx_mem_controller regenx_scrubber regenx_status_regs regenx_top} {
    read_verilog -sv $root/rtl/$f.sv
}
read_xdc $root/vivado/regenx_timing.xdc
synth_design -top regenx_top -part $part -mode out_of_context
report_utilization    -file $root/reports/vivado_utilization.rpt
report_timing_summary -file $root/reports/vivado_timing.rpt
report_methodology    -file $root/reports/vivado_methodology.rpt
puts "VIVADO_SYNTH_DONE"
