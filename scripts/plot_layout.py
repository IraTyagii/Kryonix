#!/usr/bin/env python3
"""Draw the routed placement from the DEF: flops, logic and clock buffers by colour."""
import re, sys
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
from matplotlib.patches import Rectangle

import os
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
lef = open(os.path.join(os.environ.get("DEPS", os.path.join(ROOT, "deps")), "nangate45", "NangateOpenCellLibrary.macro.mod.lef")).read()
size = {}
for m in re.finditer(r"MACRO (\w+)(.*?)END \1", lef, re.S):
    s = re.search(r"SIZE ([\d.]+) BY ([\d.]+)", m.group(2))
    if s: size[m.group(1)] = (float(s.group(1)), float(s.group(2)))
defn = open(sys.argv[1]).read()
units = int(re.search(r"UNITS DISTANCE MICRONS (\d+)", defn).group(1))
die = list(map(int, re.search(r"DIEAREA \( (-?\d+) (-?\d+) \) \( (-?\d+) (-?\d+) \)", defn).groups()))
comps = re.findall(r"- (\S+) (\w+) (?:\+ SOURCE \w+ )?\+ (?:PLACED|FIXED) \( (-?\d+) (-?\d+) \) (\w+)", defn)
fig, ax = plt.subplots(figsize=(8, 8))
cnt = {"flop": 0, "clock buffer": 0, "logic": 0, "tap": 0}
for name, cell, x, y, orient in comps:
    w, h = size.get(cell, (0.5, 1.4))
    if cell.startswith("DFF"): c, k = "#d9534f", "flop"
    elif cell.startswith("CLKBUF"): c, k = "#f0ad4e", "clock buffer"
    elif cell.startswith("TAP") or cell.startswith("FILL"): c, k = "#cccccc", "tap"
    else: c, k = "#5b8fd6", "logic"
    cnt[k] += 1
    ax.add_patch(Rectangle((int(x) / units, int(y) / units), w, h, fc=c, ec="none", alpha=0.85))
ax.set_xlim(die[0] / units, die[2] / units); ax.set_ylim(die[1] / units, die[3] / units)
ax.set_aspect("equal")
ax.set_title(f"REGEN-X placed and routed (Nangate45), die {die[2]/units:.0f} x {die[3]/units:.0f} um\n"
             + ", ".join(f"{v} {k}" for k, v in cnt.items() if k != "tap"), fontsize=9)
from matplotlib.lines import Line2D
ax.legend(handles=[Line2D([0], [0], marker="s", ls="", color=c, label=l) for l, c in
                   [("flip-flops", "#d9534f"), ("logic", "#5b8fd6"), ("clock buffers", "#f0ad4e")]], loc="upper right", fontsize=8)
ax.set_xlabel("um"); ax.set_ylabel("um")
fig.tight_layout(); fig.savefig(sys.argv[2], dpi=130)
print(cnt, "die um:", die[2] / units, die[3] / units)
