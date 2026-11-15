# External dependencies

Everything the flow reads at run time is either in this directory or installed by
`scripts/setup_deps.sh`. Nothing is read from outside the project folder.

## Vendored here

| Path | What | Source / version | License |
|---|---|---|---|
| `nangate45/*.lib, *.lef` | Nangate Open Cell Library 45 nm (typical corner), tech + macro LEF | OpenROAD-flow-scripts `flow/platforms/nangate45` | Nangate/Si2 open library terms |
| `nangate45/make_tracks.tcl, setRC.tcl, rcx_patterns.rules` | track definition, layer RC, OpenRCX extraction rules | same | BSD-3 |
| `sv2v/sv2v` | SystemVerilog-to-Verilog converter (Yosys 0.33 cannot read packages/`import`) | sv2v 0.0.13, Linux x86-64 | BSD-3 |
| `uvm-core/src` | Accellera UVM reference implementation (used to compile-check the UVM env and by XSim `-L uvm` alternative) | commit in `uvm-core/VERSION` | Apache-2.0 |

## Installed by `scripts/setup_deps.sh`

| Tool | Version used | How |
|---|---|---|
| Verilator | 5.020 | apt (Ubuntu 24.04) |
| Icarus Verilog | 12.0 | apt |
| Yosys | 0.33 | apt |
| OpenROAD | 2.0_3175_gf12e2f474 (2022-03-17) | conda, `litex-hub` channel, into `deps/openroad-env` |
| pyslang, matplotlib | pyslang 12.x | pip |
| Python | 3.12 | system |

The OpenROAD build is old: its `pdngen` takes a config file (`scripts/pdn.cfg`), and a few
commands accept fewer options than current releases. A newer OpenROAD will need small edits to
`scripts/pd_flow.tcl`.

## Not available in the sandbox used for development

Vivado/XSim (see `vivado/`), and any UVM-capable simulator. Those flows are provided but were
not executed.
