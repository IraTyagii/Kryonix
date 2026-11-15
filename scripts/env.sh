# sourced by the other scripts: paths, strict mode and small helpers. No global state outside deps/.
ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
DEPS=${DEPS:-$ROOT/deps}
SV2V=${SV2V:-$DEPS/sv2v/sv2v}
LIBDIR=$DEPS/nangate45
LIB=$LIBDIR/NangateOpenCellLibrary_typical.lib
UVM_SRC=$DEPS/uvm-core/src
# OpenROAD comes from setup_deps.sh (deps/openroad-env) unless one is already on PATH
if [ -x "$DEPS/openroad-env/bin/openroad" ]; then OPENROAD=${OPENROAD:-$DEPS/openroad-env/bin/openroad}
else OPENROAD=${OPENROAD:-openroad}; fi
export ROOT DEPS SV2V LIBDIR LIB UVM_SRC OPENROAD
cd "$ROOT"
set -Eeuo pipefail
trap 'echo "ERROR: ${BASH_SOURCE[1]:-script} line $LINENO: command failed (exit $?)" >&2' ERR

need() { command -v "$1" >/dev/null 2>&1 || [ -x "$1" ] || { echo "missing tool: $1 (run scripts/setup_deps.sh)" >&2; exit 2; }; }

# run a tool, send everything to a log, keep the real exit status, show the tail on failure
run_logged() {
    local log=$1; shift
    mkdir -p "$(dirname "$log")"
    if ! "$@" > "$log" 2>&1; then
        echo "FAILED: $*  (log: $log)" >&2; tail -25 "$log" >&2; exit 1
    fi
}
# fail unless the marker is present in the file
need_marker() {
    grep -q -- "$2" "$1" || { echo "FAILED: marker '$2' not found in $1" >&2; exit 1; }
}
# fail if any of the patterns shows up
forbid() {
    local f=$1; shift
    for p in "$@"; do
        if grep -q -E -- "$p" "$f"; then echo "FAILED: found '$p' in $f" >&2; grep -m5 -E -- "$p" "$f" >&2; exit 1; fi
    done
}
