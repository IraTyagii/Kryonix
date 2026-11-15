# 250 MHz target, generous I/O budgets since the host interface is registered
create_clock -name clk -period 4.0 [get_ports clk]
set_clock_uncertainty 0.1 [get_clocks clk]
set_input_delay  1.0 -clock clk [delete_from_list [all_inputs] [get_ports clk]]
set_output_delay 1.0 -clock clk [all_outputs]
set_false_path -from [get_ports rst_n]
