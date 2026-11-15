# REGEN-X: Self-healing 16 × 8 memory

REGEN-X is a SystemVerilog design for a 16-word logical memory with 8-bit host data and two spare physical words. At reset, built-in self-test (BIST) examines the physical array, the repair logic builds a logical-to-physical map, and recovery verification checks repaired or ECC-assisted rows. After initialization, a host interface accesses the memory while an online scrubber can periodically or reactively inspect rows and migrate data when a correctable fault is found.

The implementation in this repository is a **flop-based memory model**, not a compiled SRAM macro. Fault injection is a simulation-only feature enabled with `-DREGENX_SIM`.

## Design configuration

| Item | Implementation |
|---|---|
| Logical capacity | 16 words × 8 data bits |
| Physical capacity | 18 words: 16 logical locations plus 2 spare locations |
| Address widths | 4-bit logical address; 5-bit physical address |
| Stored word width | 13 bits when ECC is enabled; 8 bits when disabled |
| ECC | Optional SECDED (13,8), enabled by default with `ECC_EN=1` |
| Automatic patrol | Controlled by `PATROL_PERIOD`; `0` disables timer-triggered patrol |
| Host interface | Valid/ready request and valid response; one request in flight |

The package constants are defined in `rtl/regenx_pkg.sv`. The top-level parameters are declared in `rtl/regenx_top.sv`.

## Operation

1. **Boot BIST.** After reset, `regenx_bist_controller` tests all 18 physical words through the raw memory port, bypassing address remapping and ECC. The test uses three backgrounds/passes: an all-zero background, a checkerboard background, and a final clear pass that leaves the words at zero. The physical traversal visits the two spare words first, followed by the 16 normal physical words. The checkerboard pass is intended to expose intra-word coupling that an all-zero background alone may not reveal.

2. **Fault logging and diagnosis.** `regenx_fault_manager` records the failing physical row and bit mask, retaining signatures from the solid/all-zero and checkerboard tests. It classifies observed failures using the March signature. The available classes are `FC_STUCK_HI`, `FC_NO_RISE`, `FC_NO_FALL`, `FC_PATTERN`, `FC_MULTI`, and `FC_ONLINE`; the classification describes what the test observed and is not a physical failure-analysis guarantee.

3. **Repair and allocation.** `regenx_repair_engine` processes severe rows before mild rows. A row is considered severe when ECC is disabled or the recorded failing-bit mask contains more than one bit. Severe rows are assigned a spare when one is available; otherwise they are marked unavailable. A single-bit row can be assigned a spare if one remains, or retained at its original physical location in ECC-assist mode. The spare allocator tracks the two spare rows and their logical owners.

4. **Recovery verification.** `regenx_recovery_check` exercises a candidate remapped or assisted row through the same remap and ECC path used for host accesses. It writes and reads four data patterns and reports pass/fail. If a replacement spare fails verification, the repair engine releases that spare and retries the decision for the affected row. An assisted row that fails verification is marked unavailable.

5. **Host service.** The host controller accepts a request only when `init_done` is asserted, the controller is idle, and the scrubber is not busy. It translates the logical address through the remap table, accesses the physical array, and returns a response. An unavailable logical row produces `rsp_error`. The controller permits one request in flight.

6. **Online scrubbing.** `regenx_scrubber` can start a patrol round on an explicit scrub request or on its configured timer. It can also receive a row hint from the host controller after a read requires ECC correction or reports an uncorrectable ECC result. For a correctable row, it saves the decoded data before running a destructive raw-word test. If the row fails, it attempts to move the saved data to a healthy spare; if no spare is available, a single-bit fault can remain in ECC-assist mode, while a fault ECC cannot cover is marked unavailable. If the initial ECC read is uncorrectable, the data is treated as lost: the row is retired and **is not migrated**.

## ECC behavior

`rtl/regenx_ecc.sv` implements the optional SECDED (13,8) encoder and decoder. With `ECC_EN=1`, each 8-bit data word is stored as a 13-bit codeword: eight data bits, four Hamming check bits, and one overall parity bit. A single-bit error is corrected on read and indicated by `rsp_corrected`; a detected uncorrectable error is reported with `rsp_error`. A corrected or uncorrectable host read can raise a scrub hint for the corresponding logical row.

With `ECC_EN=0`, the physical word width is 8 bits and the ECC encoder/decoder act as pass-through logic. ECC correction and ECC-assist behavior are disabled. The regression runs both configurations; the no-ECC configuration is a comparison build, not a guarantee of preserving data from a faulty bit during migration.

## Main RTL modules

| Module | Source file | Responsibility |
|---|---|---|
| Shared constants, enums and types | `rtl/regenx_pkg.sv` | Defines row counts, widths, fault kinds/classes and remap kinds |
| Top-level integration | `rtl/regenx_top.sv` | Connects BIST, fault handling, repair, remap, host, scrubber, status and memory |
| Physical memory array | `rtl/regenx_mem_array.sv` | 18-word flop array with optional simulation-only fault injection |
| Memory arbiter | `rtl/regenx_mem_arbiter.sv` | Selects which client drives the shared physical memory port |
| BIST controller | `rtl/regenx_bist_controller.sv` | Runs the three-pass physical-memory test |
| Fault manager | `rtl/regenx_fault_manager.sv` | Stores failing masks/signatures and derives fault classes/severity |
| Spare allocator | `rtl/regenx_spare_allocator.sv` | Tracks spare availability and logical-row ownership |
| Address remapper | `rtl/regenx_addr_remap.sv` | Maps logical rows to physical rows or marks assist/unavailable states |
| Repair engine | `rtl/regenx_repair_engine.sv` | Allocates spares, applies remap decisions and coordinates recovery checks |
| Recovery checker | `rtl/regenx_recovery_check.sv` | Verifies repaired/assisted rows through the remap and ECC data path |
| ECC encoder/decoder | `rtl/regenx_ecc.sv` | Implements optional SECDED (13,8) |
| Host memory controller | `rtl/regenx_mem_controller.sv` | Implements host request/response, address translation, ECC reporting and scrub hints |
| Online scrubber | `rtl/regenx_scrubber.sv` | Patrols/hint-checks rows and migrates recoverable data |
| Status registers | `rtl/regenx_status_regs.sv` | Exposes state, fault, ECC, scrub, migration and data-loss diagnostics |

The physical array is shared. BIST uses it during boot; repair verification uses it after BIST; host and scrubber use it during normal operation. `regenx_mem_arbiter` selects the active client. The top-level control sequencing prevents the boot test and later repair/scrub activity from being treated as simultaneous independent memory ports.

## Status register map

The status interface uses a 4-bit `reg_addr` and returns a 32-bit `reg_rdata`. The implemented register addresses are:

| Address | Contents |
|---:|---|
| `0` | Status flags: `init_done`, `bist_busy`, `degraded`, unavailable-row-present, `scrub_busy`, `ecc_en`, and sticky `data_lost` (bit 6) |
| `1` | Fault count |
| `2` | Last-fault valid, class and physical row |
| `3` | Spare usage, spare-bad state and owner fields |
| `4` | Verification-failure count and counts of unavailable, assisted and remapped rows |
| `5` | 16-bit unavailable logical-row map |
| `6` | ECC corrected-read and uncorrectable-read counters |
| `7` | Scrub/repair event counters |
| `8` | Bits `[15:0]`: lost logical-row map; bits `[23:16]`: loss-event count |

`status_clear` clears the sticky data-loss flag, lost-row map and event counters. It does **not** restore rows marked unavailable or undo the remap/repair state. Reset also clears the status state.

## Simulation fault injection

The simulation-only fault model is compiled with `-DREGENX_SIM`; it is not part of the synthesized hardware interface. The supported fault kinds in `regenx_pkg.sv` / `regenx_mem_array.sv` are:

- `FK_SA0`, `FK_SA1`: stuck-at-zero or stuck-at-one bit read behavior.
- `FK_TF_UP`, `FK_TF_DN`: failed 0→1 or 1→0 transition behavior.
- `FK_ROW0`, `FK_ROW1`: whole-word/word-line read as all zero or all one.
- `FK_ALIAS`: a write to the selected row also writes the next physical row.
- `FK_COUPLE`: a selected bit is written from its neighboring bit, modeling intra-word coupling.

These are RTL simulation abstractions. They do not establish that the design has been tested against the full range of physical SRAM defect mechanisms.

## Verification and implementation evidence in this package

The following results are recorded in the included `reports/` files and scripts. They describe the supplied run artifacts, not a fresh rerun on every machine.

| Check | Evidence in this package |
|---|---|
| Lint | `scripts/lint.sh` runs Verilator lint with and without `REGENX_SIM`; lint logs are included in `reports/` |
| Functional regression | `scripts/run_regression.sh` runs five seeds with ECC enabled and five with ECC disabled, with `NRAND=300` and `PERIOD=3000`; `reports/regression.txt` records **10 passed runs**, zero testbench errors |
| Regression volume | ECC on: 622 boots per seed (3,110 total), about 2.69 million checks total; ECC off: 556 boots per seed (2,780 total), about 2.38 million checks total |
| SVA | The regression testbench includes the SVA checker; the regression report records SVA coverage counters and no test failures |
| Uncorrectable data-loss path | The regression testbench includes the `t_lost` scenario; see `tb/regenx_tb.sv` and the regression logs for the exercised behavior |
| Gate-level equivalence | `scripts/run_gls.sh` compares RTL and synthesized netlist in 40 scenarios; the included GLS report records 118,560 cycles and zero mismatches |
| Synthesis | Yosys with the Nangate45 standard-cell library: ECC build 8,721 cells, 1,414 DFFs, 14,899.192 µm²; no-ECC build 6,432 cells, 1,085 DFFs, 11,029.956 µm² |
| Place and route | `scripts/run_pd.sh` reaches `PD_FLOW_DONE`; the included OpenROAD report records 17,148 µm² design area at 64% utilization |
| Post-route timing | Extracted parasitics are written to SPEF; reported worst setup slack is +0.08 ns and worst hold slack is +0.01 ns, with TNS/WNS reported as 0 |
| UVM source check | `make uvm` runs a Slang compile/elaboration check against the Accellera UVM source; this is not a UVM simulation run |
| UVM monitor latency check | `make uvm-latency` checks the demo VCD against the UVM monitor's latency calculation |
| Demo waveform | `make demo` runs the Icarus demo testbench, writes a VCD and processes it with `scripts/vcd_tools.py` |

### Not established by the included evidence

- **UVM simulation was not run.** The UVM environment is compile/elaboration checked with Slang; no UVM-capable simulator run is included.
- **Mutation testing is not reported as passing.** `scripts/mutate.py` is present and `make mutate` invokes it, but this archive does not contain a completed mutation-test report. Run it and inspect its output before making any mutation-coverage claim.
- **Vivado was not run.** The `vivado/` scripts are provided but are unverified in this package. The project-generation Tcl uses a placeholder part; select the actual FPGA part and add board pin constraints before using it for a board build.
- **No GDS is included or claimed.** The recorded physical-design flow uses the open Nangate45 library, not a foundry PDK. The timing values are OpenROAD post-route estimates using extracted parasitics, not foundry sign-off timing.
- **No silicon measurement exists.** Area, timing and power figures are implementation-tool results, not measured silicon characteristics.

## Limitations and interpretation

- The storage array is implemented with standard-cell flops; it is not an SRAM macro. A real SRAM implementation would require macro integration and a compatible test/repair interface.
- Faults are injected by a simulation-only behavioral model. Silicon defect behavior, retention, disturb, process variation and radiation effects are not qualified by these tests.
- ECC can correct a single-bit error in a codeword and detect the supported uncorrectable cases; it cannot reconstruct arbitrary lost data. When the scrubber reads an uncorrectable word, it retires the row and does not migrate the corrupted data.
- In the no-ECC configuration, a faulty row can be detected and remapped, but the original data may already be corrupted and cannot be recovered by ECC.
- March diagnosis reports the observed signature. Unknown power-up cell values can make some physical defect categories ambiguous; the RTL classification should not be interpreted as definitive silicon diagnosis.
- This is a prototype RTL and open-source implementation flow, not a production-qualified memory subsystem or a functional-safety certification.

## Build and run

Run the commands from the repository root in a supported Linux environment (the setup script targets Ubuntu packages). On Windows, use WSL2 with Ubuntu.

```sh
./scripts/setup_deps.sh       # install required tools / prepare OpenROAD environment
make lint                     # Verilator lint, with and without simulation fault model
make regress                  # five seeds × ECC on/off regression
make synth                    # Yosys synthesis, ECC enabled
make synth-noecc              # Yosys synthesis, ECC disabled
make gls                      # RTL vs synthesized gate-level equivalence
make pd                       # synthesis followed by OpenROAD place-and-route
make uvm                      # Slang UVM compile/elaboration check only
make demo                     # Icarus demo simulation and VCD processing
make uvm-latency               # demo VCD monitor-latency check
make mutate                   # run the mutation script; inspect its result
make vivado-synth              # requires Vivado; unverified in this package

# GDS 
<img width="1846" height="1172" alt="Screenshot from 2026-11-15 09-19-34" src="https://github.com/user-attachments/assets/0f17d560-5fed-45c9-99a2-bf78a308a793" />
