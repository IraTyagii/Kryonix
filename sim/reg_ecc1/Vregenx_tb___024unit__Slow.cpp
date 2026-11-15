// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb__Syms.h"
#include "Vregenx_tb___024unit.h"

void Vregenx_tb___024unit___ctor_var_reset(Vregenx_tb___024unit* vlSelf);

Vregenx_tb___024unit::Vregenx_tb___024unit(Vregenx_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregenx_tb___024unit___ctor_var_reset(this);
}

void Vregenx_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vregenx_tb___024unit::~Vregenx_tb___024unit() {
}
