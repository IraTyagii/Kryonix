# NOT added to the project by default. regenx_top exposes about 280 ports (debug buses
# included), far more than any dev-board header, so for board bring-up either
#   - wrap it (clock, reset, a few switches/LEDs) and constrain only the wrapper, or
#   - keep using out-of-context synthesis for utilization and timing.
# Fill in the package pins of YOUR board, then add this file to constrs_1.
#
# set_property -dict {PACKAGE_PIN <clk_pin>   IOSTANDARD LVCMOS33} [get_ports clk]
# set_property -dict {PACKAGE_PIN <rst_pin>   IOSTANDARD LVCMOS33} [get_ports rst_n]
# set_property -dict {PACKAGE_PIN <led_pin>   IOSTANDARD LVCMOS33} [get_ports init_done]
# set_property -dict {PACKAGE_PIN <led_pin>   IOSTANDARD LVCMOS33} [get_ports degraded]
# set_property -dict {PACKAGE_PIN <led_pin>   IOSTANDARD LVCMOS33} [get_ports data_lost]
