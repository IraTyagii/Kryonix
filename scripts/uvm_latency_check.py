#!/usr/bin/env python3
"""Replays the UVM monitor's counting algorithm over a simulation VCD, sampling every
signal just before each rising edge (what a clocking block with 'input #1step' sees),
and reports the latency each convention would produce.
usage: uvm_latency_check.py sim/regenx_demo.vcd"""
import sys
sys.path.insert(0, __file__.rsplit("/", 1)[0])
from vcd_tools import load, Trace

PERIOD = 10000                       # VCD is in ps, 10 ns clock, rising edges at 5 ns + n*10 ns
tr = Trace(*load(sys.argv[1]))
t_end = max(x[0] for s in tr.v.values() for x in s)
busy, age, lat = False, 0, []
for t in range(PERIOD // 2, t_end, PERIOD):
    s = t - 1
    g = lambda n: tr.at(n, s)
    if g("rst_n") == 0:
        busy = False
        continue
    if busy:
        age += 1                                         # same order as the monitor: bump first
    if not busy and g("req_valid") == 1 and g("req_ready") == 1:
        busy, age = True, 0
    elif busy and g("rsp_valid") == 1:
        lat.append(age)
        busy = False
old = sorted(set(a + 1 for a in lat))
new = sorted(set(lat))
print(f"transactions seen: {len(lat)}")
print(f"latency with 'age'      : {new}   (scoreboard expects [4])")
print(f"latency with 'age + 1'  : {old}")
ok = new == [4] and len(lat) > 0
print("UVM_LATENCY_CHECK:", "PASS" if ok else "FAIL")
sys.exit(0 if ok else 1)
