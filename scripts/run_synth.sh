#!/usr/bin/env bash
# usage: run_synth.sh [prod|sim|noecc]
#  prod : the real design, netlist feeds place and route
#  sim  : same RTL with the fault-injection model compiled in, only for gate-level equivalence
#  noecc: ECC_EN=0 baseline, area comparison only
source "$(dirname "$0")/env.sh"
need yosys; need "$SV2V"
MODE=${1:-prod}
mkdir -p syn reports
CH=""
case "$MODE" in
    sim)   DEF="-DREGENX_SIM"; TAG=_sim;   NET=syn/regenx_top_sim_netlist.v ;;
    noecc) DEF="";             TAG=_noecc; NET=syn/regenx_top_noecc_netlist.v; CH="chparam -set ECC_EN 0 regenx_top" ;;
    prod)  DEF="";             TAG="";     NET=syn/regenx_top_netlist.v ;;
    *) echo "usage: $0 [prod|sim|noecc]" >&2; exit 2 ;;
esac
FLAT=syn/regenx_flat$TAG.v
# shellcheck disable=SC2046
run_logged reports/sv2v$TAG.log "$SV2V" $DEF $(cat scripts/files.f) -w "$FLAT"
cat > syn/run$TAG.ys <<EOT
read_verilog $FLAT
$CH
hierarchy -check -top regenx_top
synth -flatten -top regenx_top
opt -purge
dfflibmap -liberty $LIB
abc -liberty $LIB -D 4000
opt_clean -purge
hilomap -hicell LOGIC1_X1 Z -locell LOGIC0_X1 Z
tee -o reports/synth_stat$TAG.txt stat -liberty $LIB
read_liberty -lib $LIB
check -assert
write_verilog -noattr -noexpr $NET
EOT
run_logged reports/synth$TAG.log yosys -l reports/synth_full$TAG.log syn/run$TAG.ys
forbid reports/synth_full$TAG.log "^ERROR" "Warning: .*(multiple conflicting drivers|has no driver)"
[ -s "$NET" ] || { echo "FAILED: $NET missing or empty" >&2; exit 1; }
need_marker reports/synth_stat$TAG.txt "Chip area"
grep -E "Number of cells|DFF_X1|Chip area" reports/synth_stat$TAG.txt
echo "SYNTH_RESULT: PASS ($MODE)"
