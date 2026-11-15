#!/usr/bin/env bash
# Functional regression on Verilator with SVA live, both ECC configurations.
#   ./scripts/run_regression.sh            -> the standard configuration below
#   SEEDS=3 NRAND=100 ./scripts/run_regression.sh   (quick smoke run, do not quote as the full result)
source "$(dirname "$0")/env.sh"
need verilator
SEEDS=${SEEDS:-5}          # random seeds per configuration
NRAND=${NRAND:-300}        # random multi-fault boots per run
PERIOD=${PERIOD:-3000}     # timer patrol period used in the run
mkdir -p sim reports
out=reports/regression.txt
: > "$out"
echo "config: SEEDS=$SEEDS NRAND=$NRAND PERIOD=$PERIOD, ECC_EN in {1,0}" | tee -a "$out"
runs=0
for ecc in 1 0; do
    d=sim/reg_ecc$ecc
    run_logged reports/build_ecc$ecc.log verilator --binary --timing --assert -Wno-fatal -Wno-lint -Wno-style \
        -DREGENX_SIM --top-module regenx_tb -GECC_EN=$ecc -GNRAND=$NRAND -GPERIOD=$PERIOD \
        -Mdir $d -f scripts/sim_files.f -o sim_reg
    for s in $(seq 1 "$SEEDS"); do
        log=reports/run_ecc${ecc}_seed$s.log
        status=0
        "./$d/sim_reg" +seed=$s > "$log" 2>&1 || status=$?
        { grep -E "SVA_COVER|COVERAGE|errors=" "$log" || true; } | sed "s/^/[ecc=$ecc seed=$s] /" >> "$out"
        if [ $status -ne 0 ] || ! grep -q "TB_RESULT: PASS" "$log" || grep -q -E " FAIL \(|Assertion failed|%Error" "$log"; then
            echo "[ecc=$ecc seed=$s] FAIL (exit $status), see $log" | tee -a "$out" >&2
            grep -m10 -E " FAIL \(|Assertion failed|%Error" "$log" >&2 || true
            echo "REGRESSION_RESULT: FAIL" | tee -a "$out"
            exit 1
        fi
        runs=$((runs + 1))
    done
done
echo "runs passed: $runs" | tee -a "$out"
echo "REGRESSION_RESULT: PASS" | tee -a "$out"
