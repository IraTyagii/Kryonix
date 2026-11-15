# REGEN-X flow. Run `make setup` once (or see deps/README.md), then `make all`.
.PHONY: setup lint regress synth synth-noecc gls pd uvm uvm-latency mutate demo vivado-synth all

setup:
	./scripts/setup_deps.sh

lint:
	./scripts/lint.sh

regress:
	./scripts/run_regression.sh

synth:
	./scripts/run_synth.sh prod

synth-noecc:
	./scripts/run_synth.sh noecc

gls:
	./scripts/run_gls.sh 40

pd: synth
	./scripts/run_pd.sh

uvm:
	python3 scripts/uvm_check.py

demo:
	iverilog -g2012 -DREGENX_SIM -s regenx_demo_tb -o sim/demo.vvp $$(cat scripts/files.f) tb/regenx_demo_tb.sv
	vvp -n sim/demo.vvp +vcd
	python3 scripts/vcd_tools.py sim/regenx_demo.vcd docs

uvm-latency: demo
	python3 scripts/uvm_latency_check.py sim/regenx_demo.vcd

mutate:
	python3 scripts/mutate.py

vivado-synth:
	vivado -mode batch -source vivado/run_synth.tcl

all: lint regress synth synth-noecc gls pd uvm uvm-latency mutate
