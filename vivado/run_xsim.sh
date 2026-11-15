#!/usr/bin/env bash
# XSim runs from the command line (Vivado bin directory must be on PATH).
#   vivado/run_xsim.sh regress        self-checking regression + SVA
#   vivado/run_xsim.sh uvm [TEST]     UVM environment (default test regenx_random_test)
set -Eeuo pipefail
cd "$(dirname "$0")/.."
mkdir -p sim/xsim && cd sim/xsim
RTL=$(sed 's|^|../../|' ../../scripts/files.f)
case "${1:-regress}" in
  regress)
    xvlog -sv -d REGENX_SIM $RTL ../../tb/sva/regenx_sva.sv ../../tb/regenx_tb.sv
    xelab regenx_tb -s regress_sim -debug typical
    xsim regress_sim -runall -testplusarg seed=1 | tee run.log
    grep -q "TB_RESULT: PASS" run.log ;;
  uvm)
    TEST=${2:-regenx_random_test}
    xvlog -sv -L uvm -d REGENX_SIM $RTL ../../tb/uvm/regenx_if.sv ../../tb/uvm/regenx_uvm_pkg.sv ../../tb/uvm/regenx_uvm_top.sv
    xelab -L uvm regenx_uvm_top -s uvm_sim -debug typical
    xsim uvm_sim -runall -testplusarg UVM_TESTNAME=$TEST | tee run_uvm.log
    ! grep -q -E "UVM_ERROR *: *[1-9]|UVM_FATAL *: *[1-9]" run_uvm.log ;;
  *) echo "usage: $0 regress|uvm [test]" >&2; exit 2 ;;
esac
echo "XSIM_RESULT: PASS"
