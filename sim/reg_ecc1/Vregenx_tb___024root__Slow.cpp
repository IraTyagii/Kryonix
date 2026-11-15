// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb__Syms.h"
#include "Vregenx_tb___024root.h"

void Vregenx_tb___024root___ctor_var_reset(Vregenx_tb___024root* vlSelf);

Vregenx_tb___024root::Vregenx_tb___024root(Vregenx_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregenx_tb___024root___ctor_var_reset(this);
}

void Vregenx_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vregenx_tb___024root::~Vregenx_tb___024root() {
}
