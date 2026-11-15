#!/usr/bin/env python3
"""Waveform helper: (1) re-check protocol rules straight from the VCD, independent of the
simulator's assertions, (2) draw the annotated figures used in the README.
usage: vcd_tools.py sim/regenx_demo.vcd docs"""
import sys, os, re
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

def load(path):
    ids, names, scope = {}, {}, []
    with open(path) as f:
        lines = iter(f)
        for l in lines:
            t = l.split()
            if not t: continue
            if t[0] == "$scope": scope.append(t[2])
            elif t[0] == "$upscope": scope.pop()
            elif t[0] == "$var":
                full = ".".join(scope[1:] + [t[4]])
                ids.setdefault(t[3], []).append(full)
                names[full] = (t[3], int(t[2]))
            elif t[0] == "$enddefinitions": break
        vals = {i: [] for i in ids}
        now = 0
        for l in lines:
            l = l.strip()
            if not l: continue
            if l[0] == "#": now = int(l[1:]); continue
            if l[0] in "01xz":
                vals[l[1:]].append((now, l[0]))
            elif l[0] == "b":
                v, i = l[1:].split()
                vals[i].append((now, v))
    return names, vals

class Trace:
    def __init__(self, names, vals):
        self.n, self.v = names, vals
    def series(self, name):
        i = self.n[name][0]
        return self.v[i]
    def at(self, name, t, cache={}):
        key = (id(self), name)
        if key not in cache:
            cache[key] = ([x[0] for x in self.series(name)], [x[1] for x in self.series(name)])
        ts, vs = cache[key]
        import bisect
        k = bisect.bisect_right(ts, t) - 1
        v = vs[k] if k >= 0 else "x"
        if set(v) <= set("01"): return int(v, 2)
        return None

def check(tr, period=10000):
    t_end = max(x[0] for s in tr.v.values() for x in s)
    edges = list(range(period // 2, t_end, period))      # clk rises at 5, 15, ...
    fails = []
    lat_ok = 0
    hist = {}
    for k, t in enumerate(edges):
        # sample just before the edge: values settled from the previous cycle
        s = t - 1
        g = lambda n: tr.at("regenx_demo_tb." + n if False else n, s)
        req = (g("req_valid"), g("req_ready"))
        hist[k] = dict(acc=(req == (1, 1)), rsp=g("rsp_valid"), grant=g("dut.grant"),
                       init=g("init_done"), rst=g("rst_n"))
    for k, h in hist.items():
        if h["rst"] == 0: continue
        if h["grant"] is not None and bin(h["grant"]).count("1") != 1:
            fails.append((k, "grant not one-hot"))
        if h["grant"] is not None and (h["grant"] & 8) and not h["init"]:
            fails.append((k, "host owns array before init_done"))
        if h["acc"]:
            if hist.get(k + 4, {}).get("rsp") == 1: lat_ok += 1
            elif k + 4 in hist: fails.append((k, "response not 4 cycles after accept"))
        if h["rsp"] == 1 and not hist.get(k - 4, {}).get("acc") and hist.get(k - 4, {}).get("rst"):
            fails.append((k, "response without request"))
        if h["rsp"] == 1 and hist.get(k + 1, {}).get("rsp") == 1:
            fails.append((k, "rsp_valid held two cycles"))
    return lat_ok, fails, len(hist)

def draw(tr, t0, t1, names, out, title, period=10000):
    fig, axes = plt.subplots(len(names), 1, figsize=(12, 0.62 * len(names) + 0.8), sharex=True)
    for ax, (label, sig, kind) in zip(axes, names):
        ser = tr.series(sig)
        xs, ys = [], []
        for (t, v) in ser:
            if set(v) <= set("01"): ys.append(int(v, 2))
            else: ys.append(None)
            xs.append(t)
        # build step
        sx, sy = [t0 / period], [None]
        for t, y in zip(xs, ys):
            if t <= t0: sy[0] = y
            elif t < t1: sx.append(t / period); sy.append(y)
        sx.append(t1 / period); sy.append(sy[-1])
        px, py = [], []
        for i in range(len(sx) - 1):
            px += [sx[i], sx[i + 1]]; py += [sy[i], sy[i]]
        py = [float("nan") if y is None else y for y in py]
        ax.plot(px, py, drawstyle="steps-post", lw=1.2, color="#1f5fa8")
        if kind == "bus":
            ax.set_ylim(min([y for y in py if y == y] + [0]) - 1, max([y for y in py if y == y] + [1]) + 1)
        else:
            ax.set_ylim(-0.3, 1.4); ax.set_yticks([0, 1])
        ax.set_ylabel(label, rotation=0, ha="right", va="center", fontsize=8)
        ax.tick_params(labelsize=7); ax.grid(alpha=0.25)
    axes[0].set_title(title, fontsize=10)
    axes[-1].set_xlabel("clock cycles")
    fig.tight_layout(); fig.savefig(out, dpi=130); plt.close(fig)

if __name__ == "__main__":
    vcd, outdir = sys.argv[1], sys.argv[2]
    os.makedirs(outdir, exist_ok=True)
    names, vals = load(vcd)
    tr = Trace(names, vals)
    ok, fails, n = check(tr)
    print(f"VCD_CHECK cycles={n} transactions_with_4_cycle_latency={ok} violations={len(fails)}")
    for f in fails[:10]: print("  ", f)
    sigs = [("rst_n", "rst_n", "bit"), ("init_done", "init_done", "bit"),
            ("bist done", "dut.bist_done", "bit"), ("repair done", "dut.rep_done", "bit"),
            ("array grant", "dut.grant", "bus"), ("mem_en", "dut.mem_en", "bit"), ("mem_we", "dut.mem_we", "bit"),
            ("phys addr", "dut.mem_addr", "bus"), ("bad rows", "fault_count", "bus"),
            ("remapped", "remapped_count", "bus"), ("degraded", "degraded", "bit")]
    # find boot of phase 1: first 0->1 of init_done
    initd = [t for t, v in tr.series("init_done") if v == "1"]
    draw(tr, 0, initd[0] + 200, sigs, os.path.join(outdir, "wave_boot.png"),
         "REGEN-X boot: BIST (spares first), repair, recovery check, then init_done")
    sigs2 = [("rsp_valid", "rsp_valid", "bit"), ("rsp_corrected", "rsp_corrected", "bit"),
             ("rsp_error", "rsp_error", "bit"), ("scrub_busy", "scrub_busy", "bit"),
             ("array grant", "dut.grant", "bus"), ("mem_en", "dut.mem_en", "bit"),
             ("phys addr", "dut.mem_addr", "bus"), ("fault_count", "fault_count", "bus"),
             ("remapped", "remapped_count", "bus"), ("spare_used", "dbg_spare_used", "bus")]
    corr = [t for t, v in tr.series("rsp_corrected") if v == "1"]
    if corr:
        draw(tr, corr[0] - 300, corr[0] + 1100, sigs2, os.path.join(outdir, "wave_heal.png"),
             "Run-time healing: corrected read raises a hint, scrubber tests the row and moves it to a spare")
