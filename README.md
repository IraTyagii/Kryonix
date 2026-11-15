# REGEN-X: self-healing 16 x 8 memory

A memory that tests itself at power-up, repairs itself with spare rows, proves the repair, and keeps
healing while it is in service. Written in SystemVerilog, verified with a Verilator/Icarus regression,
SVA, gate-level equivalence and a UVM environment, and taken through synthesis and place-and-route
on an open PDK.

## What it does

1. **Boot.** After reset a March C- BIST sweeps all 18 physical rows (16 + 2 spares, spares first),
   twice: once with solid data and once with a checkerboard (finds coupling inside a word).
2. **Repair.** Rows ECC cannot cover get spares first; single-bit rows get a spare only if one is
   left, otherwise they stay in place in *ECC-assist* mode; rows with nothing left are marked
   unavailable and answer with `rsp_error`.
3. **Prove it.** Every remapped or assisted row is exercised through the real host path
   (remap + ECC) with four patterns. A spare that fails is thrown out and the row is decided again.
4. **Serve.** Host gets `req_ready` only after `init_done`. One request in flight, fixed 4-cycle latency.
5. **Keep healing.** A scrubber re-tests rows while the host is idle (patrol round, timer, or a hint
   raised when a read needed ECC correction), and moves a row that died in service to a healthy
   spare *with its data*.

## What is new compared with the proposal baseline

| Feature | Why it matters |
|---|---|
| SECDED (13,8) ECC on every physical word (`ECC_EN`, default 1) | masks a single bad bit, flags double errors |
| Severity-aware spare allocation | multi-bit rows (ECC cannot help) win the scarce spares |
| ECC-assist mode | a single-bit row keeps working when spares run out, so capacity is not lost |
| Two-background March (solid + checkerboard) | classic March C- misses intra-word coupling |
| March-signature diagnosis | each bad row is classified: stuck-high, cannot-rise, cannot-fall, pattern, multi-bit |
| Recovery verification with retry | a repair is checked end to end, a bad spare is replaced |
| Online scrubber with live migration, error-triggered healing | repair is not limited to boot time |
| Status register bank | fault count, class of last fault, spare owners, ECC and scrub counters, sticky data-loss flag and lost-row map |
| Uncorrectable-error policy | lost data is never migrated; the row is retired and reported |

`ECC_EN=0` gives the plain 8-bit baseline from the proposal (same modules, no ECC, no assist).

## Module map

| Proposal block | File |
|---|---|
| Memory array (+ simulation fault model) | `rtl/regenx_mem_array.sv` |
| BIST controller | `rtl/regenx_bist_controller.sv` |
| Fault manager | `rtl/regenx_fault_manager.sv` |
| Spare allocator | `rtl/regenx_spare_allocator.sv` |
| Address remap unit | `rtl/regenx_addr_remap.sv` |
| Memory arbiter | `rtl/regenx_mem_arbiter.sv` |
| Recovery verification | `rtl/regenx_recovery_check.sv` |
| Status registers | `rtl/regenx_status_regs.sv` |
| Memory controller (host side) | `rtl/regenx_mem_controller.sv` |
| Added: repair engine, scrubber, ECC, package, top | `regenx_repair_engine`, `regenx_scrubber`, `regenx_ecc`, `regenx_pkg`, `regenx_top` |

Status registers (4-bit address): reg 0 bit 6 = `data_lost` (sticky), reg 8 = lost-row map + loss counter. `status_clear` clears the flag, map and counters (rows stay unavailable).

Fault kinds the simulation model can inject (`-DREGENX_SIM`, never synthesized): stuck-at-0/1,
transition up/down, dead word line (row all 0 / all 1), write alias into the next row, intra-word coupling.

## Verification status (final RTL)

Executed and passing on the final RTL (logs in `reports/`):

| Check | Result |
|---|---|
| Lint (`scripts/lint.sh`, with and without the sim fault model) | clean, `-Wall` |
| Functional regression (`scripts/run_regression.sh`: 5 seeds x ECC on/off, NRAND=300, timer patrol 3000) | **10/10 runs pass**; ECC on: 3,110 boots, 2.69M checks; ECC off: 2,780 boots, 2.38M checks; 0 errors; 26 SVA properties live, none fired |
| Uncorrectable ECC (`t_lost`) | row retired, sticky `data_lost`, nothing migrated, neighbours intact, `status_clear` and reset behave |
| Gate-level equivalence (`scripts/run_gls.sh`) | RTL vs synthesized netlist, 40 scenarios, 118,560 cycles, 0 mismatches |
| Synthesis (Yosys + Nangate45, `check -assert`) | ECC on: 8,721 cells, 1,414 flops, 14,899 um^2; ECC off baseline: 6,432 cells, 1,085 flops, 11,030 um^2 (+35 %) |
| OpenROAD floorplan to route (`scripts/run_pd.sh`) | reaches `PD_FLOW_DONE`; 0 DRC violations; 17,148 um^2, 64 % utilization |
| Post-route timing (OpenRCX SPEF, 250 MHz target) | setup slack +0.08 ns, hold slack +0.01 ns, TNS 0. Earlier placement-only estimates (+1.05 ns) were optimistic and are not used |
| UVM environment | elaborates with 0 errors against the Accellera UVM source (compile only, see below) |
| UVM monitor latency | replayed on a fresh waveform: `age` gives 4 (matches scoreboard), the old `age + 1` gave 5 |
| Waveform protocol re-check from the VCD | 1,749 cycles, 11 transactions at 4-cycle latency, 0 violations |
| Functional coverage | per-seed fault-kind / outcome tallies and SVA cover counters in `reports/regression.txt` |

**Not done / not verified in this package**
- **Mutation testing:** `scripts/mutate.py` was rewritten (12 mutants including the data-loss path) and passes a syntax check. A full run was started but had not finished when this zip was made, so there is **no mutation report here**; do not quote the earlier 9/9 figure, it was for the previous RTL. Run `make mutate` to regenerate `reports/mutation.txt`.
- **UVM was never executed** (no UVM-capable simulator available), only compiled and elaborated.
- **Vivado was never run.** `vivado/` has the project-generation Tcl, XSim and UVM scripts and a timing-only XDC, all untested. The `.xpr` is created by `vivado/create_project.tcl`. The default part is a placeholder; pick your board before adding pin constraints.
- The physical-design flow was run in the development tree, not yet from a fresh unzip. OpenROAD (2022-03 build) is installed by `scripts/setup_deps.sh`, not vendored.

## Honest limits

- **UVM was compiled, not run.** There is no UVM-capable simulator in this flow. The self-checking regression, SVA and gate-level runs are the executed evidence; the UVM environment is a compile/elaboration-checked deliverable that needs a commercial simulator (or Verilator UVM support) to run.
- The physical design uses the open Nangate45 library, not a foundry PDK. Timing and power come from OpenROAD's parasitic estimates, not sign-off extraction. No GDS was produced.
- The array is flop-based. Faults are simulation models; real silicon defects will differ.
- Data survival of a cell that dies in service is only guaranteed with `ECC_EN=1` (single-bit). Without ECC the row is still detected and moved, but a stuck bit's old data cannot be recovered.
- Cells that power up in an unknown state make "cannot-fall" and "stuck-high" ambiguous in real silicon; the classification is what the march observes.

## Running it

```
./scripts/setup_deps.sh   # once: apt packages, pip packages, OpenROAD into deps/openroad-env
make lint regress         # 10-run regression (SEEDS / NRAND / PERIOD env vars override)
make synth synth-noecc gls pd
make uvm uvm-latency demo mutate
make vivado-synth         # needs Vivado, untested here
```
All scripts use strict shell mode and fail on a nonzero tool exit or a missing PASS marker
(`TB_RESULT`, `REGRESSION_RESULT`, `GLS_RESULT`, `SYNTH_RESULT`, `PD_FLOW_DONE`, `LINT_RESULT`).
Dependencies and versions: `deps/README.md`.
#GDS 
<img width="1846" height="1172" alt="Screenshot from 2026-11-15 09-19-34" src="https://github.com/user-attachments/assets/0f17d560-5fed-45c9-99a2-bf78a308a793" />
