// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb__Syms.h"
#include "Vregenx_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregenx_tb___024root___dump_triggers__act(Vregenx_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregenx_tb___024root___eval_triggers__act(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->regenx_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__regenx_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->regenx_tb__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__regenx_tb__DOT__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__regenx_tb__DOT__clk__0 
        = vlSelf->regenx_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregenx_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vregenx_tb___024root___nba_sequent__TOP__0(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__b_en;
    regenx_tb__DOT__dut__DOT__b_en = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__r_en;
    regenx_tb__DOT__dut__DOT__r_en = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__s_en;
    regenx_tb__DOT__dut__DOT__s_en = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__s_we;
    regenx_tb__DOT__dut__DOT__s_we = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__s_addr;
    regenx_tb__DOT__dut__DOT__s_addr = 0;
    CData/*7:0*/ regenx_tb__DOT__dut__DOT__s_wdata;
    regenx_tb__DOT__dut__DOT__s_wdata = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__sl_valid;
    regenx_tb__DOT__dut__DOT__sl_valid = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__sl_row;
    regenx_tb__DOT__dut__DOT__sl_row = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__rp_take;
    regenx_tb__DOT__dut__DOT__rp_take = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__rp_rm_v;
    regenx_tb__DOT__dut__DOT__rp_rm_v = 0;
    CData/*1:0*/ regenx_tb__DOT__dut__DOT__rp_rm_kind;
    regenx_tb__DOT__dut__DOT__rp_rm_kind = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__sc_take;
    regenx_tb__DOT__dut__DOT__sc_take = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__sc_rm_v;
    regenx_tb__DOT__dut__DOT__sc_rm_v = 0;
    CData/*1:0*/ regenx_tb__DOT__dut__DOT__sc_rm_kind;
    regenx_tb__DOT__dut__DOT__sc_rm_kind = 0;
    CData/*2:0*/ regenx_tb__DOT__dut__DOT__last_class;
    regenx_tb__DOT__dut__DOT__last_class = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__u_bist__DOT__pos;
    regenx_tb__DOT__dut__DOT__u_bist__DOT__pos = 0;
    CData/*0:0*/ regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0;
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0;
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__u_repair__DOT__cur_phys;
    regenx_tb__DOT__dut__DOT__u_repair__DOT__cur_phys = 0;
    IData/*31:0*/ regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users;
    regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users = 0;
    CData/*0:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__bad;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__bad = 0;
    CData/*7:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__m;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__m = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__Vfuncout;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n = 0;
    CData/*3:0*/ __Vdlyvdim0__regenx_tb__DOT__regmirror__v0;
    __Vdlyvdim0__regenx_tb__DOT__regmirror__v0 = 0;
    IData/*31:0*/ __Vdlyvval__regenx_tb__DOT__regmirror__v0;
    __Vdlyvval__regenx_tb__DOT__regmirror__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0;
    __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0 = 0;
    CData/*7:0*/ __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0;
    __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1;
    __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1 = 0;
    CData/*7:0*/ __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1;
    __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1 = 0;
    CData/*2:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state;
    __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0;
    __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0;
    __Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 = 0;
    CData/*0:0*/ __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0;
    __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v1;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0;
    __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0;
    __Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 = 0;
    CData/*0:0*/ __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0;
    __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v1;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0;
    __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0 = 0;
    CData/*7:0*/ __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0;
    __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v1;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0;
    __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0 = 0;
    CData/*4:0*/ __Vdlyvval__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0;
    __Vdlyvval__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v1;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v1 = 0;
    CData/*2:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state;
    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 0;
    CData/*3:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row = 0;
    CData/*2:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state;
    __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 0;
    CData/*1:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state;
    __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state = 0;
    CData/*0:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on;
    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on = 0;
    CData/*4:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr;
    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr = 0;
    CData/*4:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state;
    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0;
    CData/*7:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk = 0;
    CData/*7:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt = 0;
    CData/*7:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig = 0;
    CData/*7:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd = 0;
    CData/*4:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail = 0;
    CData/*7:0*/ __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost = 0;
    // Body
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok)))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:92: Assertion failed in %Nregenx_tb.dut.u_sva.a_map: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 92, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__ev_lost)) 
                                     | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__ev_mig)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:101: Assertion failed in %Nregenx_tb.dut.u_sva.a_lost_nomig: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 101, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__clash))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:63: Assertion failed in %Nregenx_tb.dut.u_sva.a_noclash: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 63, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | VL_ONEHOT_I((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__grant))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:62: Assertion failed in %Nregenx_tb.dut.u_sva.a_onehot: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 62, "");
        }
    }
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_en)) 
                                     | (0x12U > (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_addr)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:64: Assertion failed in %Nregenx_tb.dut.u_sva.a_range: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 64, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_10_0)) 
                                     | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_ready)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:57: Assertion failed in %Nregenx_tb.dut.u_sva.a_single_flight: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 57, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_15_0)) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__data_lost))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:99: Assertion failed in %Nregenx_tb.dut.u_sva.a_lost_set: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 99, "");
        }
    }
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 = 0U;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v1 = 0U;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 = 0U;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v1 = 0U;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0 = 0U;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1 = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_11_0)) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_rvalid))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:65: Assertion failed in %Nregenx_tb.dut.u_sva.a_rvalid: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 65, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_ready)) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:48: Assertion failed in %Nregenx_tb.dut.u_sva.a_ready_init: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 48, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_13_0)) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__data_lost))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:97: Assertion failed in %Nregenx_tb.dut.u_sva.a_lost_sticky: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 97, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_14_0)) 
                                     | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__data_lost)) 
                                        & (0U == (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map))))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:98: Assertion failed in %Nregenx_tb.dut.u_sva.a_lost_clear: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 98, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | (0U == ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map) 
                                            & (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__unavail))))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:100: Assertion failed in %Nregenx_tb.dut.u_sva.a_lost_unavail: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 100, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done) 
                                     | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__h_en)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:51: Assertion failed in %Nregenx_tb.dut.u_sva.a_no_host_boot: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 51, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done)) 
                                     | (3U == (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_bist__DOT__state)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:47: Assertion failed in %Nregenx_tb.dut.u_sva.a_init_order: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 47, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__degraded) 
                                     == ((0U != (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__assist)) 
                                         | (0U != (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__unavail))))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:93: Assertion failed in %Nregenx_tb.dut.u_sva.a_degraded: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 93, "");
        }
    }
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0 = 0U;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v1 = 0U;
    __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_0_0)) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:46: Assertion failed in %Nregenx_tb.dut.u_sva.a_init_sticky: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 46, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done) 
                                         & ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_12_0)) 
                                            & (0U != (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__unavail))))) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__degraded))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:94: Assertion failed in %Nregenx_tb.dut.u_sva.a_unavail_idle: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 94, "");
        }
    }
    __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state;
    __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_4_3)) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_valid))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:54: Assertion failed in %Nregenx_tb.dut.u_sva.a_lat: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 54, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_valid)) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_8_3))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:55: Assertion failed in %Nregenx_tb.dut.u_sva.a_lat_only: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 55, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done) 
                                     | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_valid)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:50: Assertion failed in %Nregenx_tb.dut.u_sva.a_no_rsp_boot: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 50, "");
        }
    }
    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state;
    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_corrected)) 
                                     | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_error)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:59: Assertion failed in %Nregenx_tb.dut.u_sva.a_fix_not_err: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 59, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_9_0)) 
                                     | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_valid)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:56: Assertion failed in %Nregenx_tb.dut.u_sva.a_rsp_pulse: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 56, "");
        }
    }
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0 = 0U;
    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v1 = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_error) 
                                         | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_corrected))) 
                                     | (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_valid))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:58: Assertion failed in %Nregenx_tb.dut.u_sva.a_err_rsp: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 58, "");
        }
    }
    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr;
    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on;
    __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd;
    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_ready)) 
                                     | (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__scrub_busy)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:49: Assertion failed in %Nregenx_tb.dut.u_sva.a_ready_scrub: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 49, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__scrub_busy)) 
                                     | (0U == (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state)))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:66: Assertion failed in %Nregenx_tb.dut.u_sva.a_scrub_quiet: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 66, "");
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n)) 
                                  | ((~ ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__grant) 
                                         >> 3U)) | 
                                     ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done) 
                                      & (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__scrub_busy))))))))) {
            VL_WRITEF("[%0t] %%Error: regenx_sva.sv:67: Assertion failed in %Nregenx_tb.dut.u_sva.a_host_phase: 'assert' failed.\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("tb/sva/regenx_sva.sv", 67, "");
        }
    }
    __Vdlyvval__regenx_tb__DOT__regmirror__v0 = vlSelf->regenx_tb__DOT__reg_rdata;
    __Vdlyvdim0__regenx_tb__DOT__regmirror__v0 = vlSelf->regenx_tb__DOT__reg_addr;
    vlSelf->regenx_tb__DOT__reg_addr = (0xfU & ((IData)(1U) 
                                                + (IData)(vlSelf->regenx_tb__DOT__reg_addr)));
    vlSelf->regenx_tb__DOT__regmirror[__Vdlyvdim0__regenx_tb__DOT__regmirror__v0] 
        = __Vdlyvval__regenx_tb__DOT__regmirror__v0;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (vlSelf->regenx_tb__DOT__dut__DOT__ev_flt) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_sfault 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_sfault);
        }
        if (vlSelf->regenx_tb__DOT__dut__DOT__ev_mig) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_mig 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_mig);
        }
        if (vlSelf->regenx_tb__DOT__dut__DOT__ev_lost) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_lost 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_lost);
        }
        if (vlSelf->regenx_tb__DOT__degraded) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_deg 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_deg);
        }
        if (((IData)(vlSelf->regenx_tb__DOT__init_done) 
             & (0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_unavail 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_unavail);
        }
        if (((IData)(vlSelf->regenx_tb__DOT__init_done) 
             & (0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_assist 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_assist);
        }
        if (((IData)(vlSelf->regenx_tb__DOT__init_done) 
             & (0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_remap 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_remap);
        }
        if (((IData)(vlSelf->regenx_tb__DOT__init_done) 
             & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__init_q)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_boot 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_boot);
        }
        if (((IData)(vlSelf->regenx_tb__DOT__init_done) 
             & (3U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_both 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_both);
        }
        if (vlSelf->regenx_tb__DOT__rsp_corrected) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_fix 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_fix);
        }
        if (vlSelf->regenx_tb__DOT__rsp_error) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_err 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_err);
        }
        if (vlSelf->regenx_tb__DOT__scrub_busy) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_scrub 
                = ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_scrub);
        }
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr 
            = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr_hit)
                ? 0U : ((IData)(1U) + vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr));
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__ev_chk) 
             & (0xffU != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk)))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk)));
        }
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr = 0U;
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__ev_vfail) 
             & (0x1fU != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail)))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail)));
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__ev_flt) 
             & (0xffU != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt)))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt)));
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__ev_mig) 
             & (0xffU != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig)))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig)));
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (vlSelf->regenx_tb__DOT__dut__DOT__ev_lost) {
            if ((0xffU != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost))) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost)));
            }
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_10_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n) 
           & ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_valid) 
              & (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_ready)));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_15_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n) 
           & (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__ev_lost));
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_valid) 
             & (0x12U > (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
            if (((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem)) 
                 & (5U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem)))) {
                if ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_pass))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_h4c0ef68d__0 = 1U;
                    if (((4U >= (7U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem) 
                                       - (IData)(1U)))) 
                         && (0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
                        __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 
                            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_h4c0ef68d__0;
                        __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 = 1U;
                        __Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 
                            = (7U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem) 
                                     - (IData)(1U)));
                        __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0 
                            = vlSelf->regenx_tb__DOT__dut__DOT__lg_row;
                    }
                }
            }
        }
    } else {
        __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v1 = 1U;
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0))) 
                & vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c
                [__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0]) 
               | (0x1fU & ((IData)(__Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0) 
                           << (IData)(__Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v0))));
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c__v1) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[1U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[2U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[3U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[4U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[5U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[6U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[7U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[8U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[9U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0xaU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0xbU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0xcU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0xdU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0xeU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0xfU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0x10U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[0x11U] = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_valid) 
             & (0x12U > (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
            if (((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem)) 
                 & (5U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem)))) {
                if ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_pass))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hecd4f861__0 = 1U;
                    if (((4U >= (7U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem) 
                                       - (IData)(1U)))) 
                         && (0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
                        __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 
                            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hecd4f861__0;
                        __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 = 1U;
                        __Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 
                            = (7U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_elem) 
                                     - (IData)(1U)));
                        __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0 
                            = vlSelf->regenx_tb__DOT__dut__DOT__lg_row;
                    }
                }
            }
        }
    } else {
        __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v1 = 1U;
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0))) 
                & vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s
                [__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0]) 
               | (0x1fU & ((IData)(__Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0) 
                           << (IData)(__Vdlyvlsb__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v0))));
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s__v1) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[1U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[2U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[3U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[4U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[5U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[6U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[7U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[8U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[9U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0xaU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0xbU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0xcU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0xdU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0xeU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0xfU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0x10U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[0x11U] = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_en) 
             & VL_GTS_III(32, 0x12U, (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr)))) {
            if (vlSelf->regenx_tb__DOT__dut__DOT__mem_we) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h121f0798__0 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val;
                if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr))) {
                    __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0 
                        = vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h121f0798__0;
                    __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0 = 1U;
                    __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0 
                        = vlSelf->regenx_tb__DOT__dut__DOT__mem_addr;
                }
                if (vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h90f5bdf9__0 
                        = vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata;
                    if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row))) {
                        __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1 
                            = vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h90f5bdf9__0;
                        __Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1 = 1U;
                        __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1 
                            = vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row;
                    }
                }
            }
        }
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__cells[__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0] 
            = __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v0;
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__cells[__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1] 
            = __Vdlyvval__regenx_tb__DOT__dut__DOT__u_array__DOT__cells__v1;
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_11_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n) 
           & ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_en) 
              & (~ (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_we))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_13_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n) 
           & (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__data_lost));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_14_0 = 0U;
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_valid) 
             & (0x12U > (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
            if ((1U & (~ ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)) 
                          && (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                    >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row))))))) {
                vlSelf->regenx_tb__DOT__fault_count 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__fault_count)));
            }
        }
        if (vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid) {
            if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind) 
                          >> 1U)))) {
                __Vdlyvval__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0 
                    = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind))
                        ? ((IData)(vlSelf->regenx_tb__DOT__init_done)
                            ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__sc_rm_phys)
                            : (IData)(vlSelf->regenx_tb__DOT__dut__DOT__rp_rm_phys))
                        : (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row));
                __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0 = 1U;
                __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0 
                    = vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row;
            }
        }
    } else {
        vlSelf->regenx_tb__DOT__fault_count = 0U;
        __Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v1 = 1U;
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0] 
            = __Vdlyvval__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v0;
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p__v1) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[0U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[1U] = 1U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[2U] = 2U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[3U] = 3U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[4U] = 4U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[5U] = 5U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[6U] = 6U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[7U] = 7U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[8U] = 8U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[9U] = 9U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[0xaU] = 0xaU;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[0xbU] = 0xbU;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[0xcU] = 0xcU;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[0xdU] = 0xdU;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[0xeU] = 0xeU;
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[0xfU] = 0xfU;
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n) 
           & (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_12_0 
        = (0U != (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__unavail));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_4_3 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_3_2;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_8_3 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_7_2;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_9_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n) 
           & (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_valid));
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 2U;
                } else if ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                  >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 5U;
                } else if (vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__last_row) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 6U;
                } else {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)));
                    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 2U;
                }
            }
        } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
                if ((4U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state))) {
                    if (vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__fail) {
                        __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 4U;
                    } else if (vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__last_row) {
                        __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 6U;
                    } else {
                        __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)));
                        __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 2U;
                    }
                }
            } else if (vlSelf->regenx_tb__DOT__dut__DOT__rec_start) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 3U;
            } else if (vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__last_row) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 6U;
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)));
            }
        } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
            if (vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__last_row) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row = 0U;
                if (vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 2U;
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild = 1U;
                }
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)));
            }
        } else if ((3U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row = 0U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild = 0U;
            __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 1U;
        }
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_valid) 
             & (0x12U > (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_h5c1b265e__0 
                = (((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row))
                     ? vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask
                    [vlSelf->regenx_tb__DOT__dut__DOT__lg_row]
                     : 0U) | ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_valid)
                               ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_mask)
                               : ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__rl_valid)
                                   ? 0xffU : (IData)(vlSelf->regenx_tb__DOT__dut__DOT__sl_mask))));
            if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row))) {
                __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_h5c1b265e__0;
                __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0 = 1U;
                __Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0 
                    = vlSelf->regenx_tb__DOT__dut__DOT__lg_row;
            }
        }
    } else {
        __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild = 0U;
        __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state = 0U;
        __Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v1 = 1U;
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[__Vdlyvdim0__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0] 
            = __Vdlyvval__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v0;
    }
    if (__Vdlyvset__regenx_tb__DOT__dut__DOT__u_fault__DOT__mask__v1) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[1U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[2U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[3U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[4U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[5U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[6U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[7U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[8U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[9U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0xaU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0xbU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0xcU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0xdU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0xeU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0xfU] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0x10U] = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[0x11U] = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__ev_rnd) 
             & (0xffU != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd)))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd)));
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__init_q 
        = ((IData)(vlSelf->regenx_tb__DOT__rst_n) && (IData)(vlSelf->regenx_tb__DOT__init_done));
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_unc = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_fix = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_valid) {
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx)))) {
                vlSelf->regenx_tb__DOT__dut__DOT__owner0 
                    = vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_row;
            }
            if (vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx) {
                vlSelf->regenx_tb__DOT__dut__DOT__owner1 
                    = vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_row;
            }
        }
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_valid) 
             & (0x12U > (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__last_valid = 1U;
            vlSelf->regenx_tb__DOT__dut__DOT__last_row 
                = vlSelf->regenx_tb__DOT__dut__DOT__lg_row;
        }
        vlSelf->regenx_tb__DOT__dut__DOT__mem_rvalid = 0U;
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_en) 
             & VL_GTS_III(32, 0x12U, (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr)))) {
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_we)))) {
                vlSelf->regenx_tb__DOT__dut__DOT__mem_rvalid = 1U;
            }
        }
        if (vlSelf->regenx_tb__DOT__dut__DOT__ev_lost) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map 
                = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map) 
                   | (0xffffU & ((IData)(1U) << (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row))));
        }
        if (vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid) {
            if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind) 
                          >> 1U)))) {
                vlSelf->regenx_tb__DOT__dut__DOT__remapped 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row))) 
                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped)) 
                       | (0xffffU & ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind)) 
                                     << (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row))));
            }
        }
        if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 0U;
        } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state))) {
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state))) {
                if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                     != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__pat))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__fail = 1U;
                }
                if ((3U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 4U;
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k)));
                    __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 1U;
                }
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 2U;
        } else if (vlSelf->regenx_tb__DOT__dut__DOT__rec_start) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k = 0U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q 
                = vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
            vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__fail = 0U;
            __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 1U;
        }
        vlSelf->regenx_tb__DOT__dut__DOT__bf_valid = 0U;
        if ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state))) {
            if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                 != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__rd_exp))) {
                vlSelf->regenx_tb__DOT__dut__DOT__bf_valid = 1U;
                vlSelf->regenx_tb__DOT__dut__DOT__bf_row 
                    = vlSelf->regenx_tb__DOT__dut__DOT__b_addr;
                vlSelf->regenx_tb__DOT__dut__DOT__bf_mask 
                    = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                       ^ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__rd_exp));
                vlSelf->regenx_tb__DOT__dut__DOT__bf_elem 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem;
                vlSelf->regenx_tb__DOT__dut__DOT__bf_pass 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass;
            }
            if ((5U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_idx;
                vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_elem;
                vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_pass;
                __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_state;
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem 
                = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_elem;
            vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx 
                = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_idx;
            vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass 
                = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_pass;
            __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state 
                = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_state;
        }
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__owner0 = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__owner1 = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__last_valid = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__last_row = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_rvalid = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__remapped = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k = 0U;
        __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__fail = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem = 0U;
        __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state = 2U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__bf_valid = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__bf_row = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__bf_mask = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__bf_elem = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__bf_pass = 0U;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        vlSelf->regenx_tb__DOT__dut__DOT__ev_rnd = 0U;
        if ((((((IData)(vlSelf->regenx_tb__DOT__scrub_req) 
                | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr_hit)) 
               & (IData)(vlSelf->regenx_tb__DOT__scrub_en)) 
              & (IData)(vlSelf->regenx_tb__DOT__init_done)) 
             & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)))) {
            __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on = 1U;
            __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr = 0U;
        }
        if ((0x10U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0U;
            } else if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0U;
            } else {
                vlSelf->regenx_tb__DOT__scrub_busy = 0U;
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0U;
            }
        } else if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state 
                        = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))
                            ? (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                                == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q))
                                ? 0x10U : 0xcU) : 0xfU);
                } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0xeU;
                } else if ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)));
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0xdU;
                } else {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0x10U;
                }
            } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state 
                        = ((1U & ((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed)) 
                                  | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare)))
                            ? 0x10U : (((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                          >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row)) 
                                         & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__rest_fail))) 
                                        & VL_GTES_III(32, 1U, 
                                                      ([&]() {
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v 
                                                = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask;
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (1U 
                                                   & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                   + 
                                                   (1U 
                                                    & ((IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v) 
                                                       >> 1U)));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                   + 
                                                   (1U 
                                                    & ((IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v) 
                                                       >> 2U)));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                   + 
                                                   (1U 
                                                    & ((IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v) 
                                                       >> 3U)));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                   + 
                                                   (1U 
                                                    & ((IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v) 
                                                       >> 4U)));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                   + 
                                                   (1U 
                                                    & ((IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v) 
                                                       >> 5U)));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                   + 
                                                   (1U 
                                                    & ((IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v) 
                                                       >> 6U)));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                = (__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n 
                                                   + 
                                                   (1U 
                                                    & ((IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__v) 
                                                       >> 7U)));
                                            __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__Vfuncout 
                                                = __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__n;
                                        }(), __Vfunc_regenx_tb__DOT__dut__DOT__u_scrub__DOT__ones__661__Vfuncout)))
                                        ? 0x10U : 0xcU));
                } else {
                    if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                         != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__rest_fail = 1U;
                    }
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0xbU;
                }
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state 
                    = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))
                        ? 0xaU : 9U);
            }
        } else if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask 
                        = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask) 
                           | ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                              ^ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__pat)));
                    if ((4U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))) {
                        __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state 
                            = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare)
                                ? 0xbU : 8U);
                    } else {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step)));
                        __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 5U;
                    }
                } else {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 7U;
                }
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state 
                    = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))
                        ? 6U : 0x10U);
            }
        } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q 
                    = vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata;
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 5U;
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step = 0U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask = 0U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__rest_fail = 0U;
            if (vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare) {
                if ((1U & (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used) 
                            >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_sp)) 
                           | (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> ((IData)(0x10U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_sp)))))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0x10U;
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q 
                        = (0x1fU & ((IData)(0x10U) 
                                    + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_sp)));
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 5U;
                }
            } else if ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row)))) {
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0x10U;
            } else {
                vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q 
                    = ((0x4fU >= (0x7fU & ((IData)(5U) 
                                           * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row))))
                        ? (0x1fU & (((0U == (0x1fU 
                                             & ((IData)(5U) 
                                                * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row))))
                                      ? 0U : (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                                              (((IData)(4U) 
                                                + (0x7fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row)))))) 
                                    | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                                       (3U & (((IData)(5U) 
                                               * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row)) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(5U) 
                                            * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row))))))
                        : 0U);
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 2U;
            }
        } else if ((((IData)(vlSelf->regenx_tb__DOT__scrub_en) 
                     & (IData)(vlSelf->regenx_tb__DOT__init_done)) 
                    & ((~ (IData)(vlSelf->regenx_tb__DOT__req_valid)) 
                       & (0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state))))) {
            if (vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend = 0U;
                vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_q;
                vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare = 0U;
                vlSelf->regenx_tb__DOT__scrub_busy = 1U;
                __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 1U;
            } else if (vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on) {
                if ((0x12U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr))) {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on = 0U;
                    vlSelf->regenx_tb__DOT__dut__DOT__ev_rnd = 1U;
                } else {
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr)));
                    vlSelf->regenx_tb__DOT__scrub_busy = 1U;
                    __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 1U;
                    if ((0x10U > (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare = 0U;
                        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row 
                            = (0xfU & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr));
                    } else {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare = 1U;
                        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_sp 
                            = (1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr));
                    }
                }
            }
        }
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask = 0U;
        __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr = 0U;
        __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = 0U;
        vlSelf->regenx_tb__DOT__scrub_busy = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_sp = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__rest_fail = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp = 0U;
        __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__ev_rnd = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__rst_n)))) {
        vlSelf->regenx_tb__DOT__data_lost = 0U;
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_3_2 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_2_1;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_7_2 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_6_1;
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_recovery__DOT__state;
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_bist__DOT__state;
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on;
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr;
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_scrub__DOT__state;
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (1U 
                                                   & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 1U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 2U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 3U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 4U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 5U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 6U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 7U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 8U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 9U))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 0xaU))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 0xbU))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 0xcU))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 0xdU))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 0xeU))));
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = (0x1fU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                          >> 0xfU))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__pat 
        = ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k))
            ? 0x55U : ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k))
                        ? 0xaaU : ((2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k))
                                    ? 0xffU : 0U)));
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__last_row 
        = (0xfU == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row));
    regenx_tb__DOT__dut__DOT__r_en = ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state)) 
                                      | (2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state)));
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (vlSelf->regenx_tb__DOT__dut__DOT__ev_lost) {
            vlSelf->regenx_tb__DOT__data_lost = 1U;
        }
        vlSelf->regenx_tb__DOT__rsp_valid = 0U;
        vlSelf->regenx_tb__DOT__rsp_error = 0U;
        vlSelf->regenx_tb__DOT__rsp_corrected = 0U;
        if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state))) {
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state))) {
                vlSelf->regenx_tb__DOT__rsp_valid = 1U;
                vlSelf->regenx_tb__DOT__rsp_error = vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q;
                vlSelf->regenx_tb__DOT__rsp_corrected = 0U;
                vlSelf->regenx_tb__DOT__rsp_rdata = 
                    ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__read_ok)
                      ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata)
                      : 0U);
                __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state = 0U;
            } else {
                __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__phys_q 
                = ((0x4fU >= (0x7fU & ((IData)(5U) 
                                       * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q))))
                    ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                                  * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q))))
                                  ? 0U : (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                                          (((IData)(4U) 
                                            + (0x7fU 
                                               & ((IData)(5U) 
                                                  * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q)))))) 
                                | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                                   (3U & (((IData)(5U) 
                                           * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(5U) 
                                                * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q))))))
                    : 0U);
            vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q 
                = (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                         >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q)));
            __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state = 2U;
        } else if (((IData)(vlSelf->regenx_tb__DOT__req_valid) 
                    & (IData)(vlSelf->regenx_tb__DOT__req_ready))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wr_q 
                = vlSelf->regenx_tb__DOT__req_write;
            vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q 
                = vlSelf->regenx_tb__DOT__req_addr;
            vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wdata_q 
                = vlSelf->regenx_tb__DOT__req_wdata;
            __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state = 1U;
        }
    } else {
        __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wr_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wdata_q = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__phys_q = 0U;
        vlSelf->regenx_tb__DOT__rsp_valid = 0U;
        vlSelf->regenx_tb__DOT__rsp_rdata = 0U;
        vlSelf->regenx_tb__DOT__rsp_error = 0U;
        vlSelf->regenx_tb__DOT__rsp_corrected = 0U;
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state;
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [0U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
        = ((0xffffffe0U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
           | (IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [1U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
        = ((0xfffffc1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 5U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [2U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
        = ((0xffff83ffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0xaU));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [3U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
        = ((0xfff07fffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0xfU));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [4U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
        = ((0xfe0fffffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0x14U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [5U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
        = ((0xc1ffffffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0x19U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [6U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
        = ((0x3fffffffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0x1eU));
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
        = ((0xfffffff8U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              >> 2U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [7U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
        = ((0xffffff07U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 3U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [8U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
        = ((0xffffe0ffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 8U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [9U];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
        = ((0xfffc1fffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0xdU));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [0xaU];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
        = ((0xff83ffffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0x12U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [0xbU];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
        = ((0xf07fffffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0x17U));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [0xcU];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
        = ((0xfffffffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U]) 
           | ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
              << 0x1cU));
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
        = ((0xfffeU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U]) 
           | (0xffffU & ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
                         >> 4U)));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [0xdU];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
        = ((0xffc1U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U]) 
           | (0xffffU & ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
                         << 1U)));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [0xeU];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
        = ((0xf83fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U]) 
           | (0xffffU & ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
                         << 6U)));
    regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p
        [0xfU];
    vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
        = ((0x7ffU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U]) 
           | (0xffffU & ((IData)(regenx_tb__DOT__dut__DOT__u_remap__DOT____Vlvbound_h861abc8d__0) 
                         << 0xbU)));
    regenx_tb__DOT__dut__DOT__b_en = ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state)) 
                                      | (2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state)));
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__rd_exp 
        = (((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)) 
            | ((3U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)) 
               | (5U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem))))
            ? ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass))
                ? 0xaaU : 0U) : ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass))
                                  ? 0x55U : 0xffU));
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_elem 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem;
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_pass 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass;
    if ((0x11U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_idx = 0U;
        if ((2U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_elem 
                = ((5U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem))
                    ? (7U & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)))
                    : 0U);
            if ((5U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_pass 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass)));
            }
        }
        vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_state 
            = ((2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass))
                ? 3U : ((5U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem))
                         ? 0U : 2U));
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_idx 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx)));
        vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_state 
            = ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem))
                ? 2U : 0U);
    }
    regenx_tb__DOT__dut__DOT__u_bist__DOT__pos = (0x1fU 
                                                  & (((3U 
                                                       != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)) 
                                                      & (4U 
                                                         != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)))
                                                      ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx)
                                                      : 
                                                     ((IData)(0x11U) 
                                                      - (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed 
        = ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask)) 
           | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__rest_fail));
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__pat 
        = ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
            ? 0x55U : ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
                        ? ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
                            ? 0xaaU : 0U) : ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
                                              ? 0xffU
                                              : 0U)));
    vlSelf->regenx_tb__DOT__dut__DOT__ev_lost = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__ev_chk = 0U;
    regenx_tb__DOT__dut__DOT__s_we = 0U;
    regenx_tb__DOT__dut__DOT__s_en = 0U;
    regenx_tb__DOT__dut__DOT__s_addr = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_2_1 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_1_0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_6_1 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_5_0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__read_ok 
        = ((3U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state)) 
           & ((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wr_q)) 
              & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q))));
    vlSelf->regenx_tb__DOT__dut__DOT__h_en = ((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q)) 
                                              & (2U 
                                                 == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state)));
    regenx_tb__DOT__dut__DOT__u_repair__DOT__cur_phys 
        = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row))))
                          ? 0U : (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                                  (((IData)(4U) + (0x7fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))))) 
                        | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                           (3U & (((IData)(5U) * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(5U) 
                                                  * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row))))))
            : 0U);
    vlSelf->regenx_tb__DOT__dut__DOT__b_addr = (0x1fU 
                                                & ((2U 
                                                    > (IData)(regenx_tb__DOT__dut__DOT__u_bist__DOT__pos))
                                                    ? 
                                                   ((IData)(0x10U) 
                                                    + (IData)(regenx_tb__DOT__dut__DOT__u_bist__DOT__pos))
                                                    : 
                                                   ((IData)(regenx_tb__DOT__dut__DOT__u_bist__DOT__pos) 
                                                    - (IData)(2U))));
    vlSelf->regenx_tb__DOT__dut__DOT__ev_flt = 0U;
    regenx_tb__DOT__dut__DOT__s_wdata = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__pat;
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid) {
            if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind))) {
                if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind)))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__assist 
                        = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                           | (0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row))));
                }
            } else {
                vlSelf->regenx_tb__DOT__dut__DOT__assist 
                    = ((~ ((IData)(1U) << (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row))) 
                       & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist));
            }
        }
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_valid) 
             & (0x12U > (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row)))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hc596298d__0 = 1U;
            if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row))) {
                vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row))) 
                        & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys) 
                       | (0x3ffffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hc596298d__0) 
                                      << (IData)(vlSelf->regenx_tb__DOT__dut__DOT__lg_row))));
            }
        }
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__assist = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__bad_phys = 0U;
    }
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys);
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3fffeU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | (IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 1U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3fffdU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 1U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 2U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3fffbU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 2U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 3U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3fff7U & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 3U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 4U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3ffefU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 4U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 5U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3ffdfU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 5U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 6U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3ffbfU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 6U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 7U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3ff7fU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 7U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 8U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3feffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 8U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 9U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3fdffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 9U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0xaU));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3fbffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0xaU));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0xbU));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3f7ffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0xbU));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0xcU));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3efffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0xcU));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0xdU));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3dfffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0xdU));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0xeU));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x3bfffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0xeU));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0xfU));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x37fffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0xfU));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0x10U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x2ffffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0x10U));
    regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0 
        = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                 >> 0x11U));
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = 
        ((0x1ffffU & vlSelf->regenx_tb__DOT__dut__DOT__severe_phys) 
         | ((IData)(regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hed977498__0) 
            << 0x11U));
    if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__last_row))) {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c
            [vlSelf->regenx_tb__DOT__dut__DOT__last_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s
            [vlSelf->regenx_tb__DOT__dut__DOT__last_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__m 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask
            [vlSelf->regenx_tb__DOT__dut__DOT__last_row];
    } else {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__m = 0U;
    }
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__bad 
        = ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__last_row)) 
           && (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__last_row))));
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if (((IData)(vlSelf->regenx_tb__DOT__init_done)
              ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__sc_rel)
              : (IData)(vlSelf->regenx_tb__DOT__dut__DOT__rp_rel))) {
            vlSelf->regenx_tb__DOT__dut__DOT__spare_used 
                = ((~ ((IData)(1U) << ((IData)(vlSelf->regenx_tb__DOT__init_done)
                                        ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__sc_rel_idx)
                                        : (IData)(vlSelf->regenx_tb__DOT__dut__DOT__rp_rel_idx)))) 
                   & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used));
        }
        if (vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_valid) {
            vlSelf->regenx_tb__DOT__dut__DOT__spare_used 
                = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used) 
                   | (3U & ((IData)(1U) << (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx))));
        }
        if (vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid) {
            if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind))) {
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__unavail 
                        = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                           | (0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row))));
                }
            } else {
                vlSelf->regenx_tb__DOT__dut__DOT__unavail 
                    = ((~ ((IData)(1U) << (IData)(vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row))) 
                       & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail));
            }
        }
        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_en) 
             & VL_GTS_III(32, 0x12U, (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr)))) {
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_we)))) {
                vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata 
                    = vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val;
            }
        }
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__spare_used = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__unavail = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__ev_lost = 1U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__ev_chk = 1U;
                        if (vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed) {
                            vlSelf->regenx_tb__DOT__dut__DOT__ev_flt = 1U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        regenx_tb__DOT__dut__DOT__s_we = 1U;
                        regenx_tb__DOT__dut__DOT__s_wdata 
                            = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q;
                    }
                }
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                        regenx_tb__DOT__dut__DOT__s_en = 1U;
                        regenx_tb__DOT__dut__DOT__s_addr 
                            = (0x1fU & ((IData)(0x10U) 
                                        + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp)));
                    }
                } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    regenx_tb__DOT__dut__DOT__s_en = 1U;
                    regenx_tb__DOT__dut__DOT__s_addr 
                        = (0x1fU & ((IData)(0x10U) 
                                    + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp)));
                }
            } else if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                    regenx_tb__DOT__dut__DOT__s_we = 1U;
                    regenx_tb__DOT__dut__DOT__s_wdata 
                        = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q;
                }
                regenx_tb__DOT__dut__DOT__s_en = 1U;
            }
        } else if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    regenx_tb__DOT__dut__DOT__s_we = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                    regenx_tb__DOT__dut__DOT__s_en = 1U;
                }
            } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                regenx_tb__DOT__dut__DOT__s_en = 1U;
            }
        } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                regenx_tb__DOT__dut__DOT__s_en = 1U;
            }
        }
    }
    if (vlSelf->regenx_tb__DOT__dut__DOT__bf_valid) {
        vlSelf->regenx_tb__DOT__dut__DOT__lg_elem = vlSelf->regenx_tb__DOT__dut__DOT__bf_elem;
        vlSelf->regenx_tb__DOT__dut__DOT__lg_pass = vlSelf->regenx_tb__DOT__dut__DOT__bf_pass;
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__lg_elem = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT__lg_pass = 3U;
    }
    {
        if (__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__bad) {
            if (VL_LTS_III(32, 1U, ([&]() {
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v 
                                = __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__m;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n = 0U;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v) 
                                            >> 1U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v) 
                                            >> 2U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v) 
                                            >> 3U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v) 
                                            >> 4U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v) 
                                            >> 5U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v) 
                                            >> 6U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v) 
                                            >> 7U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__Vfuncout 
                                = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n;
                        }(), vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__Vfuncout))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 5U;
                goto __Vlabel1;
            } else if (((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s)) 
                        & (0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c)))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 6U;
                goto __Vlabel1;
            } else if ((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 4U;
                goto __Vlabel1;
            } else if ((1U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 1U;
                goto __Vlabel1;
            } else if ((2U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 2U;
                goto __Vlabel1;
            } else {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 3U;
                goto __Vlabel1;
            }
        } else {
            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 0U;
            goto __Vlabel1;
        }
        __Vlabel1: ;
    }
    if (vlSelf->regenx_tb__DOT__rst_n) {
        if ((6U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
            vlSelf->regenx_tb__DOT__init_done = 1U;
        }
    } else {
        vlSelf->regenx_tb__DOT__init_done = 0U;
    }
    regenx_tb__DOT__dut__DOT__last_class = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout;
    vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail 
        = (3U & ((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used)) 
                 & (~ (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                       >> 0x10U))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_valid) 
           & (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_ready));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_5_0 
        = ((IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_valid) 
           & (IData)(vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_ready));
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 1U;
    if ((0x12U <= (0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped)) 
         != (0x10U <= (0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped)) 
         & (0U != (0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 5U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 1U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                               >> 5U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 1U)) & (1U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                        >> 5U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0xaU)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 2U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                               >> 0xaU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 2U)) & (2U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                        >> 0xaU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0xfU)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 3U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                               >> 0xfU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 3U)) & (3U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                        >> 0xfU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0x14U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 4U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                               >> 0x14U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 4U)) & (4U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                        >> 0x14U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0x19U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 5U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                               >> 0x19U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 5U)) & (5U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                        >> 0x19U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                             << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x1eU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 6U)) != (0x10U <= (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                << 2U) 
                                               | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                  >> 0x1eU)))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 6U)) & (6U != (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                         << 2U) | (
                                                   vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                   >> 0x1eU)))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 3U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 7U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                               >> 3U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 7U)) & (7U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        >> 3U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 8U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 8U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                               >> 8U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 8U)) & (8U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        >> 8U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0xdU)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 9U)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                               >> 0xdU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 9U)) & (9U != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        >> 0xdU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0x12U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 0xaU)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 >> 0x12U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 0xaU)) & (0xaU != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                            >> 0x12U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0x17U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 0xbU)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 >> 0x17U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 0xbU)) & (0xbU != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                            >> 0x17U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                             << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x1cU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 0xcU)) != (0x10U <= (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                  << 4U) 
                                                 | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                    >> 0x1cU)))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 0xcU)) & (0xcU != (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                             << 4U) 
                                            | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                               >> 0x1cU)))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 1U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 0xdU)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                 >> 1U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 0xdU)) & (0xdU != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                            >> 1U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 6U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 0xeU)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                 >> 6U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 0xeU)) & (0xeU != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                            >> 6U))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((0x12U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 0xbU)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                >> 0xfU)) != (0x10U <= (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                 >> 0xbU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
             >> 0xfU)) & (0xfU != (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                            >> 0xbU))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users = 0U;
    if ((0x10U == (0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 5U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0xaU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0xfU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0x14U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0x19U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                             << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x1eU))))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 3U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 8U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0xdU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0x12U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0x17U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                             << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x1cU))))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 1U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 6U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x10U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 0xbU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if (VL_LTS_III(32, 1U, regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users)) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U == regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users) 
         & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((((0x10U == (0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
          & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
             >> 0x10U)) & (~ (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                               | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                              | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x200U == (0x3e0U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 1U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x4000U == (0x7c00U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 2U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x80000U == (0xf8000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 3U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x1000000U == (0x1f00000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 4U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x20000000U == (0x3e000000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 5U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((((0x10U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                               << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                         >> 0x1eU)))) 
          & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
             >> 0x10U)) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                               >> 6U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x80U == (0xf8U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 7U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x1000U == (0x1f00U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 8U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x20000U == (0x3e000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 9U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x400000U == (0x7c0000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xaU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x8000000U == (0xf800000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xbU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((((0x10U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                               << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                         >> 0x1cU)))) 
          & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
             >> 0x10U)) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                               >> 0xcU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x20U == (0x3eU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xdU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x400U == (0x7c0U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xeU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x8000U == (0xf800U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x10U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xfU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users = 0U;
    if ((0x11U == (0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 5U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0xaU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0xfU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0x14U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                            >> 0x19U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                             << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x1eU))))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 3U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 8U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0xdU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0x12U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            >> 0x17U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                             << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x1cU))))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 1U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 6U)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if ((0x11U == (0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            >> 0xbU)))) {
        regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users 
            = ((IData)(1U) + regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users);
    }
    if (VL_LTS_III(32, 1U, regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users)) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((1U == regenx_tb__DOT__dut__DOT__u_sva__DOT__unnamedblk2__DOT__unnamedblk3__DOT__users) 
         & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used) 
               >> 1U)))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((((0x11U == (0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
          & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
             >> 0x11U)) & (~ (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                               | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                              | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x220U == (0x3e0U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 1U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x4400U == (0x7c00U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 2U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x88000U == (0xf8000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 3U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x1100000U == (0x1f00000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 4U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x22000000U == (0x3e000000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 5U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((((0x11U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                               << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                         >> 0x1eU)))) 
          & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
             >> 0x11U)) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                               >> 6U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x88U == (0xf8U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 7U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x1100U == (0x1f00U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 8U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x22000U == (0x3e000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 9U) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x440000U == (0x7c0000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xaU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x8800000U == (0xf800000U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xbU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if ((((0x11U == (0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                               << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                         >> 0x1cU)))) 
          & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
             >> 0x11U)) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                               >> 0xcU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x22U == (0x3eU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xdU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x440U == (0x7c0U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xeU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    if (((IData)(((0x8800U == (0xf800U & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U])) 
                  & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> 0x11U))) & (~ ((((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                        >> 0xfU) | (IData)(vlSelf->regenx_tb__DOT__scrub_busy))))) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = 0U;
    }
    vlSelf->regenx_tb__DOT__degraded = (0U != ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                               | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
    vlSelf->regenx_tb__DOT__dut__DOT__ev_mig = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rm_phys = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rel = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rel_idx = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__sl_mask = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask;
    regenx_tb__DOT__dut__DOT__sc_take = 0U;
    regenx_tb__DOT__dut__DOT__sl_valid = 0U;
    regenx_tb__DOT__dut__DOT__sl_row = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q;
    regenx_tb__DOT__dut__DOT__sc_rm_v = 0U;
    regenx_tb__DOT__dut__DOT__sc_rm_kind = 0U;
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                             == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__ev_mig = 1U;
                            vlSelf->regenx_tb__DOT__dut__DOT__sc_rm_phys 
                                = (0x1fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp)));
                            if ((0x10U <= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__sc_rel = 1U;
                                vlSelf->regenx_tb__DOT__dut__DOT__sc_rel_idx 
                                    = (1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q));
                            }
                            regenx_tb__DOT__dut__DOT__sc_take = 1U;
                            regenx_tb__DOT__dut__DOT__sc_rm_v = 1U;
                            regenx_tb__DOT__dut__DOT__sc_rm_kind = 1U;
                        }
                        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                             != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__sl_mask = 0xffU;
                            regenx_tb__DOT__dut__DOT__sl_valid = 1U;
                            regenx_tb__DOT__dut__DOT__sl_row 
                                = (0x1fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp)));
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)))))) {
                        regenx_tb__DOT__dut__DOT__sc_rm_v = 1U;
                        regenx_tb__DOT__dut__DOT__sc_rm_kind = 3U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if (vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed) {
                        vlSelf->regenx_tb__DOT__dut__DOT__sl_mask 
                            = ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask))
                                ? 0xffU : (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask));
                        regenx_tb__DOT__dut__DOT__sl_valid = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                    regenx_tb__DOT__dut__DOT__sc_rm_v = 1U;
                    regenx_tb__DOT__dut__DOT__sc_rm_kind = 3U;
                }
            }
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state 
        = __Vdly__regenx_tb__DOT__dut__DOT__u_repair__DOT__state;
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__ev_vfail = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__rec_start = 0U;
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
                vlSelf->regenx_tb__DOT__dut__DOT__ev_vfail 
                    = ((4U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state)) 
                       & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__fail));
            }
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state)))) {
                vlSelf->regenx_tb__DOT__dut__DOT__rec_start 
                    = (1U & (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist)) 
                             >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)));
            }
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel_idx = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rm_phys = 0U;
    regenx_tb__DOT__dut__DOT__rp_rm_v = 0U;
    regenx_tb__DOT__dut__DOT__rp_take = 0U;
    regenx_tb__DOT__dut__DOT__rp_rm_kind = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__rl_valid = 0U;
    if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state)))) {
                if ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                           >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel = 1U;
                    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel_idx 
                        = (1U & (IData)(regenx_tb__DOT__dut__DOT__u_repair__DOT__cur_phys));
                    vlSelf->regenx_tb__DOT__dut__DOT__rl_valid = 1U;
                }
            }
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
                if ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__rp_rm_phys 
                        = (0x1fU & ((IData)(0x10U) 
                                    + (1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)))));
                    regenx_tb__DOT__dut__DOT__rp_take = 1U;
                    regenx_tb__DOT__dut__DOT__rp_rm_kind = 1U;
                } else {
                    regenx_tb__DOT__dut__DOT__rp_rm_kind 
                        = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__severe_phys 
                                  >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))
                            ? 3U : 2U);
                }
            } else {
                regenx_tb__DOT__dut__DOT__rp_rm_kind 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                              >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))
                        ? 0U : 3U);
            }
            regenx_tb__DOT__dut__DOT__rp_rm_v = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
            if ((1U & ((vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)) 
                       & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild)
                           ? (~ (vlSelf->regenx_tb__DOT__dut__DOT__severe_phys 
                                 >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))
                           : (vlSelf->regenx_tb__DOT__dut__DOT__severe_phys 
                              >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))))) {
                if ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__rp_rm_phys 
                        = (0x1fU & ((IData)(0x10U) 
                                    + (1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)))));
                    regenx_tb__DOT__dut__DOT__rp_take = 1U;
                    regenx_tb__DOT__dut__DOT__rp_rm_kind = 1U;
                } else {
                    regenx_tb__DOT__dut__DOT__rp_rm_kind 
                        = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild)
                            ? 2U : 3U);
                }
                regenx_tb__DOT__dut__DOT__rp_rm_v = 1U;
            }
        }
    }
    if (vlSelf->regenx_tb__DOT__init_done) {
        vlSelf->regenx_tb__DOT__req_ready = ((~ (IData)(vlSelf->regenx_tb__DOT__scrub_busy)) 
                                             & (0U 
                                                == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state)));
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx 
            = (1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp));
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row;
    } else {
        vlSelf->regenx_tb__DOT__req_ready = 0U;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx 
            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)));
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
    }
    vlSelf->regenx_tb__DOT__reg_rdata = ((8U & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                          ? ((4U & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map)))))
                                          : ((4U & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                              ? ((2U 
                                                  & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                                   ? 
                                                  (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk))))
                                                   : 
                                                  (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_unc) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_fix)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                                   ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)
                                                   : 
                                                  (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail) 
                                                    << 0xfU) 
                                                   | ((([&]() {
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v 
                                            = vlSelf->regenx_tb__DOT__dut__DOT__unavail;
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (1U & (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 1U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 2U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 3U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 4U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 5U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 6U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 7U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 8U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 9U))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 0xaU))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 0xbU))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 0xcU))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 0xdU))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 0xeU))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n 
                                            = (0x1fU 
                                               & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v) 
                                                      >> 0xfU))));
                                        vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__Vfuncout 
                                            = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n;
                                    }(), (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__Vfuncout)) 
                                                       << 0xaU) 
                                                      | ((([&]() {
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v 
                                                = vlSelf->regenx_tb__DOT__dut__DOT__assist;
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (1U 
                                                   & (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 1U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 2U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 3U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 4U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 5U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 6U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 7U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 8U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 9U))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 0xaU))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 0xbU))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 0xcU))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 0xdU))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 0xeU))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n 
                                                = (0x1fU 
                                                   & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v) 
                                                          >> 0xfU))));
                                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__Vfuncout 
                                                = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n;
                                        }(), (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__Vfuncout)) 
                                                          << 5U) 
                                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt))))))
                                              : ((2U 
                                                  & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                                   ? 
                                                  (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__owner1) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__owner0) 
                                                       << 4U) 
                                                      | ((0xcU 
                                                          & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                             >> 0xeU)) 
                                                         | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used))))
                                                   : 
                                                  (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__last_valid) 
                                                    << 8U) 
                                                   | (((IData)(regenx_tb__DOT__dut__DOT__last_class) 
                                                       << 5U) 
                                                      | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__last_row))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->regenx_tb__DOT__reg_addr))
                                                   ? (IData)(vlSelf->regenx_tb__DOT__fault_count)
                                                   : 
                                                  (((IData)(vlSelf->regenx_tb__DOT__data_lost) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelf->regenx_tb__DOT__degraded) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & ((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
                                                                   << 1U)) 
                                                               | (IData)(vlSelf->regenx_tb__DOT__init_done))))))))));
    vlSelf->regenx_tb__DOT__dut__DOT__lg_row = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_valid)
                                                 ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_row)
                                                 : 
                                                ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__rl_valid)
                                                  ? (IData)(regenx_tb__DOT__dut__DOT__u_repair__DOT__cur_phys)
                                                  : (IData)(regenx_tb__DOT__dut__DOT__sl_row)));
    if (vlSelf->regenx_tb__DOT__init_done) {
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid 
            = regenx_tb__DOT__dut__DOT__sc_rm_v;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_valid 
            = regenx_tb__DOT__dut__DOT__sc_take;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind 
            = regenx_tb__DOT__dut__DOT__sc_rm_kind;
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid 
            = regenx_tb__DOT__dut__DOT__rp_rm_v;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_valid 
            = regenx_tb__DOT__dut__DOT__rp_take;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind 
            = regenx_tb__DOT__dut__DOT__rp_rm_kind;
    }
    vlSelf->regenx_tb__DOT__dut__DOT__grant = ((3U 
                                                == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state))
                                                ? ((IData)(vlSelf->regenx_tb__DOT__init_done)
                                                    ? 
                                                   ((IData)(vlSelf->regenx_tb__DOT__scrub_busy)
                                                     ? 4U
                                                     : 8U)
                                                    : 2U)
                                                : 1U);
    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__grant))) {
        vlSelf->regenx_tb__DOT__dut__DOT__mem_en = regenx_tb__DOT__dut__DOT__b_en;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_we = 
            (2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state));
        vlSelf->regenx_tb__DOT__dut__DOT__mem_addr 
            = vlSelf->regenx_tb__DOT__dut__DOT__b_addr;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata 
            = (((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)) 
                | ((2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)) 
                   | (4U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem))))
                ? ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass))
                    ? 0xaaU : 0U) : ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass))
                                      ? 0x55U : 0xffU));
    } else if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__grant))) {
        vlSelf->regenx_tb__DOT__dut__DOT__mem_en = regenx_tb__DOT__dut__DOT__r_en;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_we = 
            (1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state));
        vlSelf->regenx_tb__DOT__dut__DOT__mem_addr 
            = ((0x4fU >= (0x7fU & ((IData)(5U) * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q))))
                ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                              * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q))))
                              ? 0U : (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                                      (((IData)(4U) 
                                        + (0x7fU & 
                                           ((IData)(5U) 
                                            * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(5U) 
                                                       * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q)))))) 
                            | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[
                               (3U & (((IData)(5U) 
                                       * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q))))))
                : 0U);
        vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__pat;
    } else if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__grant))) {
        vlSelf->regenx_tb__DOT__dut__DOT__mem_en = regenx_tb__DOT__dut__DOT__s_en;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_we = regenx_tb__DOT__dut__DOT__s_we;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_addr 
            = regenx_tb__DOT__dut__DOT__s_addr;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata 
            = regenx_tb__DOT__dut__DOT__s_wdata;
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT__mem_en = vlSelf->regenx_tb__DOT__dut__DOT__h_en;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_we = vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wr_q;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_addr 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__phys_q;
        vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wdata_q;
    }
    vlSelf->regenx_tb__DOT__dut__DOT__clash = (((((IData)(regenx_tb__DOT__dut__DOT__b_en) 
                                                  & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__grant))) 
                                                 | ((IData)(regenx_tb__DOT__dut__DOT__r_en) 
                                                    & (~ 
                                                       ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__grant) 
                                                        >> 1U)))) 
                                                | ((IData)(regenx_tb__DOT__dut__DOT__s_en) 
                                                   & (~ 
                                                      ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__grant) 
                                                       >> 2U)))) 
                                               | ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__h_en) 
                                                  & (~ 
                                                     ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__grant) 
                                                      >> 3U))));
    vlSelf->regenx_tb__DOT__dut__DOT__lg_valid = (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_valid) 
                                                   | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__rl_valid)) 
                                                  | (IData)(regenx_tb__DOT__dut__DOT__sl_valid));
}
