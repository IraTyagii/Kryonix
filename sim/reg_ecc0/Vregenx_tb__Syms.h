// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGENX_TB__SYMS_H_
#define VERILATED_VREGENX_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vregenx_tb.h"

// INCLUDE MODULE CLASSES
#include "Vregenx_tb___024root.h"
#include "Vregenx_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vregenx_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vregenx_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vregenx_tb___024root           TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_regenx_tb__dut__u_sva;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_degraded;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_err_rsp;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_fix_not_err;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_host_phase;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_init_order;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_init_sticky;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_lat;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_lat_only;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_lost_clear;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_lost_nomig;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_lost_set;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_lost_sticky;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_lost_unavail;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_map;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_no_host_boot;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_no_rsp_boot;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_noclash;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_onehot;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_range;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_ready_init;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_ready_scrub;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_rsp_pulse;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_rvalid;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_scrub_quiet;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_single_flight;
    VerilatedScope __Vscope_regenx_tb__dut__u_sva__a_unavail_idle;

    // CONSTRUCTORS
    Vregenx_tb__Syms(VerilatedContext* contextp, const char* namep, Vregenx_tb* modelp);
    ~Vregenx_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
