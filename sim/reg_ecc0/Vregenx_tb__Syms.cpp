// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb.h"
#include "Vregenx_tb___024root.h"
#include "Vregenx_tb___024unit.h"

// FUNCTIONS
Vregenx_tb__Syms::~Vregenx_tb__Syms()
{
}

Vregenx_tb__Syms::Vregenx_tb__Syms(VerilatedContext* contextp, const char* namep, Vregenx_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_regenx_tb__dut__u_sva.configure(this, name(), "regenx_tb.dut.u_sva", "u_sva", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_degraded.configure(this, name(), "regenx_tb.dut.u_sva.a_degraded", "a_degraded", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_err_rsp.configure(this, name(), "regenx_tb.dut.u_sva.a_err_rsp", "a_err_rsp", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_fix_not_err.configure(this, name(), "regenx_tb.dut.u_sva.a_fix_not_err", "a_fix_not_err", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_host_phase.configure(this, name(), "regenx_tb.dut.u_sva.a_host_phase", "a_host_phase", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_init_order.configure(this, name(), "regenx_tb.dut.u_sva.a_init_order", "a_init_order", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_init_sticky.configure(this, name(), "regenx_tb.dut.u_sva.a_init_sticky", "a_init_sticky", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_lat.configure(this, name(), "regenx_tb.dut.u_sva.a_lat", "a_lat", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_lat_only.configure(this, name(), "regenx_tb.dut.u_sva.a_lat_only", "a_lat_only", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_lost_clear.configure(this, name(), "regenx_tb.dut.u_sva.a_lost_clear", "a_lost_clear", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_lost_nomig.configure(this, name(), "regenx_tb.dut.u_sva.a_lost_nomig", "a_lost_nomig", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_lost_set.configure(this, name(), "regenx_tb.dut.u_sva.a_lost_set", "a_lost_set", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_lost_sticky.configure(this, name(), "regenx_tb.dut.u_sva.a_lost_sticky", "a_lost_sticky", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_lost_unavail.configure(this, name(), "regenx_tb.dut.u_sva.a_lost_unavail", "a_lost_unavail", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_map.configure(this, name(), "regenx_tb.dut.u_sva.a_map", "a_map", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_no_host_boot.configure(this, name(), "regenx_tb.dut.u_sva.a_no_host_boot", "a_no_host_boot", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_no_rsp_boot.configure(this, name(), "regenx_tb.dut.u_sva.a_no_rsp_boot", "a_no_rsp_boot", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_noclash.configure(this, name(), "regenx_tb.dut.u_sva.a_noclash", "a_noclash", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_onehot.configure(this, name(), "regenx_tb.dut.u_sva.a_onehot", "a_onehot", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_range.configure(this, name(), "regenx_tb.dut.u_sva.a_range", "a_range", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_ready_init.configure(this, name(), "regenx_tb.dut.u_sva.a_ready_init", "a_ready_init", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_ready_scrub.configure(this, name(), "regenx_tb.dut.u_sva.a_ready_scrub", "a_ready_scrub", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_rsp_pulse.configure(this, name(), "regenx_tb.dut.u_sva.a_rsp_pulse", "a_rsp_pulse", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_rvalid.configure(this, name(), "regenx_tb.dut.u_sva.a_rvalid", "a_rvalid", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_scrub_quiet.configure(this, name(), "regenx_tb.dut.u_sva.a_scrub_quiet", "a_scrub_quiet", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_single_flight.configure(this, name(), "regenx_tb.dut.u_sva.a_single_flight", "a_single_flight", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_regenx_tb__dut__u_sva__a_unavail_idle.configure(this, name(), "regenx_tb.dut.u_sva.a_unavail_idle", "a_unavail_idle", -9, VerilatedScope::SCOPE_OTHER);
}
