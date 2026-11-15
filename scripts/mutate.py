#!/usr/bin/env python3
"""Mutation check: break the RTL in a known way, run the regression, see if anything notices.
A mutant that survives is a hole in the tests. Results go to reports/mutation.txt.
usage: mutate.py [name ...]   (no names = all)"""
import os, shutil, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

MUTANTS = [
    ("ecc_no_correct", "rtl/regenx_ecc.sv", "fixed[syn] = ~c[syn];", "fixed[syn] = c[syn];"),
    ("bist_no_checker_pass", "rtl/regenx_bist_controller.sv", "assign bg     = (pass == 2'd1) ? chk : '0;", "assign bg     = '0;"),
    ("severity_ignored", "rtl/regenx_fault_manager.sv", "severe_phys[i] = bad_phys[i] && (!ECC_EN || ones(mask[i]) > 1);", "severe_phys[i] = bad_phys[i];"),
    ("recovery_blind", "rtl/regenx_recovery_check.sv", "if (rd_data != pat || rd_bad) fail <= 1'b1;", "if (1'b0) fail <= 1'b1;"),
    ("scrub_wrong_pattern", "rtl/regenx_scrubber.sv", "3'd3:    pat = chk;", "3'd3:    pat = '0;"),
    ("spare_double_alloc", "rtl/regenx_spare_allocator.sv", "assign avail     = ~used & ~spare_bad;", "assign avail     = ~spare_bad;"),
    ("host_latency", "rtl/regenx_mem_controller.sv", "C_ACCESS: state <= C_RESP;", "C_ACCESS: state <= C_XLATE;"),
    ("arb_scrub_ignored", "rtl/regenx_mem_arbiter.sv", "else if (scrub_busy)  grant = 4'b0100;", "else if (1'b0)  grant = 4'b0100;"),
    # the data-loss path
    ("lost_data_migrates", "rtl/regenx_scrubber.sv", "if (rd_bad) state <= SC_LOST;", "if (1'b0) state <= SC_LOST;"),
    ("lost_flag_not_sticky", "rtl/regenx_status_regs.sv", "data_lost <= 1'b1;", "data_lost <= 1'b0;"),
    ("status_clear_ignored", "rtl/regenx_status_regs.sv", "if (!rst_n || status_clear) begin", "if (!rst_n) begin"),
    ("lost_row_stays_usable", "rtl/regenx_scrubber.sv", "rm_kind  = WK_UNAVAIL;\n                ev_lost  = 1'b1;", "rm_kind  = WK_ASSIST;\n                ev_lost  = 1'b1;"),
]

def sh(cmd, cwd):
    return subprocess.run(cmd, cwd=cwd, shell=True, capture_output=True, text=True)

def one(name, path, old, new):
    work = f"/tmp/mut_{name}"
    shutil.rmtree(work, ignore_errors=True)
    shutil.copytree(ROOT, work, ignore=shutil.ignore_patterns("sim", "reports", "pd", "syn", "docs", "*.vcd", "deps", "__pycache__"))
    os.makedirs(f"{work}/sim", exist_ok=True)
    target = os.path.join(work, path)
    text = open(target).read()
    if old not in text:
        return "SKIPPED (pattern not found, update scripts/mutate.py)", False
    open(target, "w").write(text.replace(old, new, 1))
    for ecc in (1, 0):
        b = sh(f"verilator --binary --timing --assert -Wno-fatal -Wno-lint -Wno-style -DREGENX_SIM "
               f"--top-module regenx_tb -GECC_EN={ecc} -GNRAND=25 -CFLAGS -O0 -Mdir sim/o{ecc} "
               f"-f scripts/sim_files.f -o s{ecc}", work)
        exe = f"{work}/sim/o{ecc}/s{ecc}"
        if b.returncode != 0 or not os.path.exists(exe):
            return f"KILLED (does not build, ECC_EN={ecc})", True
        r = sh(f"./sim/o{ecc}/s{ecc} +seed=5", work)
        out = r.stdout + r.stderr
        tb = " FAIL (" in out
        sva = "Assertion failed" in out
        if r.returncode != 0 or "TB_RESULT: PASS" not in out or tb or sva:
            how = "testbench + SVA" if (tb and sva) else ("SVA" if sva else "testbench")
            return f"KILLED by {how} (ECC_EN={ecc})", True
    return "SURVIVED", False

def main():
    only = sys.argv[1:]
    todo = [m for m in MUTANTS if not only or m[0] in only]
    lines, killed = [], 0
    for name, path, old, new in todo:
        verdict, k = one(name, path, old, new)
        lines.append(f"{name:24s} {verdict}")
        killed += int(k)
        print(lines[-1], flush=True)
    summary = f"mutants killed: {killed}/{len(todo)}"
    print(summary)
    if not only:
        os.makedirs(os.path.join(ROOT, "reports"), exist_ok=True)
        open(os.path.join(ROOT, "reports", "mutation.txt"), "w").write("\n".join(lines + [summary]) + "\n")
    sys.exit(0 if killed == len(todo) else 1)

if __name__ == "__main__":
    main()
