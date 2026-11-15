#!/usr/bin/env bash
# Installs everything that is NOT already in deps/. Safe to re-run.
#   apt packages (Ubuntu 24.04): iverilog verilator yosys python3-pip
#   pip: pyslang matplotlib
#   deps/openroad-env: OpenROAD 2.0_3175 (2022-03-17) from the litex-hub conda channel
# Vendored in the zip: deps/nangate45, deps/sv2v, deps/uvm-core (see deps/README.md).
set -Eeuo pipefail
ROOT=$(cd "$(dirname "$0")/.." && pwd); cd "$ROOT"
if command -v apt-get >/dev/null && [ "$(id -u)" = 0 ]; then
    apt-get update -q && apt-get install -y -q iverilog verilator yosys python3-pip curl
fi
pip install --break-system-packages -q pyslang matplotlib || pip install -q pyslang matplotlib
if [ ! -x deps/openroad-env/bin/openroad ] && ! command -v openroad >/dev/null; then
    mkdir -p deps/.mm
    curl -sSL https://conda.anaconda.org/conda-forge/linux-64/micromamba-2.10.0-0.tar.bz2 | tar -xj -C deps/.mm
    MAMBA_ROOT_PREFIX="$ROOT/deps/.mamba" deps/.mm/bin/micromamba create -y -p deps/openroad-env \
        -c litex-hub -c conda-forge "openroad=2.0_3175_gf12e2f474"
fi
echo "versions:"; for t in verilator iverilog yosys; do "$t" -V 2>&1 | head -1 || true; done
deps/sv2v/sv2v --version
[ -x deps/openroad-env/bin/openroad ] && deps/openroad-env/bin/openroad -version | head -1 || true
echo "SETUP_DONE"
