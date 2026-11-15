#!/usr/bin/env python3
"""Elaborate the UVM environment with slang against the Accellera UVM library.
There is no UVM-capable simulator in this flow, so this is a full compile and
elaboration check (types, macros, class hierarchy, interface connections), not a run."""
import os, sys
from pyslang.driver import Driver

root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
uvm = os.path.abspath(os.path.join(os.environ.get("DEPS", os.path.join(root, "deps")), "uvm-core", "src"))
rtl = [l.strip() for l in open(os.path.join(root, "scripts", "files.f")) if l.strip()]
files = [os.path.join(uvm, "uvm_pkg.sv")] + [os.path.join(root, f) for f in rtl] + \
        [os.path.join(root, "tb/uvm", f) for f in ("regenx_if.sv", "regenx_uvm_pkg.sv", "regenx_uvm_top.sv")]

d = Driver()
d.addStandardArgs()
args = ["slang", "-DREGENX_SIM", "-I", uvm, "--top", "regenx_uvm_top",
        "-Wno-unused", "--timescale", "1ns/1ps"] + files
if not d.parseCommandLine(" ".join(args), None) if False else False:
    pass
ok = d.parseCommandLine(" ".join(args))
ok = ok and d.processOptions() and d.parseAllSources()
comp = d.createCompilation() if ok else None
if comp is not None:
    d.reportCompilation(comp, False)
    n_err = sum(1 for x in comp.getAllDiagnostics() if x.isError())
else:
    n_err = 1
print(f"UVM_CHECK: {'OK' if n_err == 0 else 'FAILED'} ({n_err} errors)")
sys.exit(0 if n_err == 0 else 1)
