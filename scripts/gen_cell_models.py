#!/usr/bin/env python3
"""Behavioural Verilog models for the Nangate45 cells a netlist uses (for gate-level sim)."""
import re, sys
lib = open(sys.argv[1]).read()
net = open(sys.argv[2]).read()
used = sorted(set(re.findall(r'^\s*([A-Z0-9]+_X\d)\s+\S+\s*\(', net, re.M)))
out = ["// generated from the Nangate45 liberty: zero-delay behavioural cell models\n`timescale 1ns/1ps\n"]
for c in used:
    m = re.search(r'cell \(%s\) \{' % c, lib)
    i, depth = m.end(), 1
    while depth:
        depth += (lib[i] == '{') - (lib[i] == '}'); i += 1
    body = lib[m.end():i]
    pins = {}
    for pm in re.finditer(r'\bpin \((\w+)\) \{', body):
        j, d = pm.end(), 1
        while d:
            d += (body[j] == '{') - (body[j] == '}'); j += 1
        pb = body[pm.end():j]
        dm = re.search(r'direction\s*:\s*(\w+)', pb)
        fn = re.search(r'function\s*:\s*"([^"]+)"', pb)
        if dm: pins[pm.group(1)] = (dm.group(1), fn.group(1) if fn else None)
    ml = [f'module {c}({", ".join(pins)});']
    for n, (d, f) in pins.items():
        ml.append(f'  {"input" if d == "input" else "output"} {n};')
    if re.search(r'\bff \(', body):
        ml += ["  reg IQ;", "  initial IQ = 1'b0;", "  always @(posedge CK) IQ <= D;"]
        for n, (d, f) in pins.items():
            if d == 'output':
                ml.append(f'  assign {n} = {"IQ" if f == "IQ" else "~IQ"};')
    else:
        for n, (d, f) in pins.items():
            if d == 'output':
                e = f.replace('!', '~').replace('*', '&').replace('+', '|')
                e = re.sub(r'(\w)\s+(\w)', r'\1 & \2', e)
                ml.append(f'  assign {n} = {e};')
    ml.append('endmodule\n')
    out.append('\n'.join(ml))
out.append("module LOGIC1_X1(Z); output Z; assign Z = 1'b1; endmodule\n"
           "module LOGIC0_X1(Z); output Z; assign Z = 1'b0; endmodule\n")
print('\n'.join(out))
