#!/usr/bin/env bash
# strict Verilator lint of the synthesizable RTL (with the simulation fault model compiled in)
source "$(dirname "$0")/env.sh"
need verilator
mkdir -p reports
run_logged reports/lint.log verilator --lint-only -Wall -Wno-DECLFILENAME -Wno-TIMESCALEMOD -DREGENX_SIM \
    --top-module regenx_top -f scripts/files.f
# and without it: this is what the synthesis flow sees
run_logged reports/lint_synth.log verilator --lint-only -Wall -Wno-DECLFILENAME -Wno-TIMESCALEMOD \
    --top-module regenx_top -f scripts/files.f
echo "LINT_RESULT: PASS"
