// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

VL_ATTR_COLD void Vregenx_tb___024root___eval_static__TOP(Vregenx_tb___024root* vlSelf);

VL_ATTR_COLD void Vregenx_tb___024root___eval_static(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_static\n"); );
    // Body
    Vregenx_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vregenx_tb___024root___eval_static__TOP(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->regenx_tb__DOT__clk = 0U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__req_write = 0U;
    vlSelf->regenx_tb__DOT__req_addr = 0U;
    vlSelf->regenx_tb__DOT__req_wdata = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    vlSelf->regenx_tb__DOT__reg_addr = 0U;
    vlSelf->regenx_tb__DOT__dbg_class_row = 0U;
    vlSelf->regenx_tb__DOT__f_en = 0U;
    vlSelf->regenx_tb__DOT__flt_kind_flat = 0U;
    vlSelf->regenx_tb__DOT__flt_row_flat = 0U;
    vlSelf->regenx_tb__DOT__flt_bit_flat = 0U;
    vlSelf->regenx_tb__DOT__errors = 0U;
    vlSelf->regenx_tb__DOT__checks = 0U;
    vlSelf->regenx_tb__DOT__boots = 0U;
    vlSelf->regenx_tb__DOT__phase = std::string{"init"};
}

VL_ATTR_COLD void Vregenx_tb___024root___eval_initial__TOP(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_boot = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_remap = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_assist = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_unavail = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_both = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_mig = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_sfault = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_fix = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_err = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_scrub = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_deg = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_lost = 0U;
}

VL_ATTR_COLD void Vregenx_tb___024root___eval_final__TOP(Vregenx_tb___024root* vlSelf);

VL_ATTR_COLD void Vregenx_tb___024root___eval_final(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_final\n"); );
    // Body
    Vregenx_tb___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vregenx_tb___024root___eval_final__TOP(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_final__TOP\n"); );
    // Body
    VL_WRITEF("SVA_COVER boots=%0d remap=%0d assist=%0d unavail=%0d both_spares=%0d migrate=%0d scrub_fault=%0d ecc_fix=%0d rsp_err=%0d scrub_cycles=%0d degraded=%0d data_lost_events=%0d\n",
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_boot,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_remap,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_assist,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_unavail,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_both,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_mig,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_sfault,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_fix,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_err,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_scrub,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_deg,
              32,vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_lost);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregenx_tb___024root___dump_triggers__stl(Vregenx_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregenx_tb___024root___eval_phase__stl(Vregenx_tb___024root* vlSelf);

VL_ATTR_COLD void Vregenx_tb___024root___eval_settle(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vregenx_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/regenx_tb.sv", 10, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vregenx_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregenx_tb___024root___dump_triggers__stl(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregenx_tb___024root___stl_sequent__TOP__0(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___stl_sequent__TOP__0\n"); );
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
    CData/*7:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__old_val;
    regenx_tb__DOT__dut__DOT__u_array__DOT__old_val = 0;
    CData/*3:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r = 0;
    IData/*31:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0;
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
    CData/*0:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__bad;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__bad = 0;
    CData/*7:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__m;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__m = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__c;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__c = 0;
    CData/*0:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__bad;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__bad = 0;
    CData/*7:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__m;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__m = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c = 0;
    // Body
    vlSelf->regenx_tb__DOT__dut__DOT__ev_lost = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__ev_chk = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__last_row 
        = (0xfU == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row));
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
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__ev_vfail = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__ev_mig = 0U;
    vlSelf->regenx_tb__DOT__req_ready = ((IData)(vlSelf->regenx_tb__DOT__init_done) 
                                         & ((~ (IData)(vlSelf->regenx_tb__DOT__scrub_busy)) 
                                            & (0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__read_ok 
        = ((3U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state)) 
           & ((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wr_q)) 
              & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr_hit 
        = ((IData)(vlSelf->regenx_tb__DOT__scrub_en) 
           & ((IData)(vlSelf->regenx_tb__DOT__init_done) 
              & (0xbb7U == vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr)));
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
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rm_phys = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rel = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rel_idx = 0U;
    regenx_tb__DOT__dut__DOT__sc_take = 0U;
    regenx_tb__DOT__dut__DOT__sl_row = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q;
    vlSelf->regenx_tb__DOT__dut__DOT__rl_valid = 0U;
    if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dbg_class_row))) {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__c 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c
            [vlSelf->regenx_tb__DOT__dbg_class_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s
            [vlSelf->regenx_tb__DOT__dbg_class_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__m 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask
            [vlSelf->regenx_tb__DOT__dbg_class_row];
    } else {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__c = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__m = 0U;
    }
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__bad 
        = ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dbg_class_row)) 
           && (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> (IData)(vlSelf->regenx_tb__DOT__dbg_class_row))));
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
                    }
                }
            }
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
                        }
                        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                             != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q))) {
                            regenx_tb__DOT__dut__DOT__sl_row 
                                = (0x1fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp)));
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->regenx_tb__DOT__init_done) {
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row;
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row;
    }
    if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state)))) {
                if ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                           >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel = 1U;
                    vlSelf->regenx_tb__DOT__dut__DOT__rl_valid = 1U;
                }
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
        if (__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__bad) {
            if (VL_LTS_III(32, 1U, ([&]() {
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v 
                                = __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__m;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n = 0U;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v) 
                                            >> 1U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v) 
                                            >> 2U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v) 
                                            >> 3U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v) 
                                            >> 4U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v) 
                                            >> 5U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v) 
                                            >> 6U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v) 
                                            >> 7U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__Vfuncout 
                                = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n;
                        }(), vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__Vfuncout))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = 5U;
                goto __Vlabel1;
            } else if (((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s)) 
                        & (0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__c)))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = 6U;
                goto __Vlabel1;
            } else if ((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = 4U;
                goto __Vlabel1;
            } else if ((1U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = 1U;
                goto __Vlabel1;
            } else if ((2U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = 2U;
                goto __Vlabel1;
            } else {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = 3U;
                goto __Vlabel1;
            }
        } else {
            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = 0U;
            goto __Vlabel1;
        }
        __Vlabel1: ;
    }
    vlSelf->regenx_tb__DOT__dbg_class = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout;
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed 
        = ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask)) 
           | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__rest_fail));
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
    vlSelf->regenx_tb__DOT__degraded = (0U != ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                               | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
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
                goto __Vlabel2;
            } else if (((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s)) 
                        & (0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__c)))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 6U;
                goto __Vlabel2;
            } else if ((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 4U;
                goto __Vlabel2;
            } else if ((1U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 1U;
                goto __Vlabel2;
            } else if ((2U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 2U;
                goto __Vlabel2;
            } else {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 3U;
                goto __Vlabel2;
            }
        } else {
            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = 0U;
            goto __Vlabel2;
        }
        __Vlabel2: ;
    }
    regenx_tb__DOT__dut__DOT__last_class = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout;
    vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail 
        = (3U & ((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used)) 
                 & (~ (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                       >> 0x10U))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__pat 
        = ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k))
            ? 0x55U : ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k))
                        ? 0xaaU : ((2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k))
                                    ? 0xffU : 0U)));
    regenx_tb__DOT__dut__DOT__s_we = 0U;
    regenx_tb__DOT__dut__DOT__s_en = 0U;
    regenx_tb__DOT__dut__DOT__b_en = ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state)) 
                                      | (2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state)));
    regenx_tb__DOT__dut__DOT__r_en = ((1U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state)) 
                                      | (2U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state)));
    vlSelf->regenx_tb__DOT__dut__DOT__h_en = ((~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q)) 
                                              & (2U 
                                                 == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state)));
    regenx_tb__DOT__dut__DOT__s_addr = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q;
    regenx_tb__DOT__dut__DOT__u_bist__DOT__pos = (0x1fU 
                                                  & (((3U 
                                                       != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)) 
                                                      & (4U 
                                                         != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem)))
                                                      ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx)
                                                      : 
                                                     ((IData)(0x11U) 
                                                      - (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx))));
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__pat 
        = ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
            ? 0x55U : ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
                        ? ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
                            ? 0xaaU : 0U) : ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step))
                                              ? 0xffU
                                              : 0U)));
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
    vlSelf->regenx_tb__DOT__dut__DOT__ev_flt = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__sl_mask = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask;
    regenx_tb__DOT__dut__DOT__sl_valid = 0U;
    regenx_tb__DOT__dut__DOT__rp_rm_v = 0U;
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        regenx_tb__DOT__dut__DOT__s_we = 1U;
                    }
                }
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                        regenx_tb__DOT__dut__DOT__s_en = 1U;
                        regenx_tb__DOT__dut__DOT__s_addr 
                            = (0x1fU & ((IData)(0x10U) 
                                        + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp)));
                    }
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                             != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__sl_mask = 0xffU;
                            regenx_tb__DOT__dut__DOT__sl_valid = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    regenx_tb__DOT__dut__DOT__s_en = 1U;
                    regenx_tb__DOT__dut__DOT__s_addr 
                        = (0x1fU & ((IData)(0x10U) 
                                    + (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp)));
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                        regenx_tb__DOT__dut__DOT__s_we = 1U;
                    }
                    regenx_tb__DOT__dut__DOT__s_en = 1U;
                }
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        if (vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed) {
                            vlSelf->regenx_tb__DOT__dut__DOT__sl_mask 
                                = ((0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask))
                                    ? 0xffU : (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask));
                            regenx_tb__DOT__dut__DOT__sl_valid = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        if (vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed) {
                            vlSelf->regenx_tb__DOT__dut__DOT__ev_flt = 1U;
                        }
                    }
                }
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
    if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                      >> 1U)))) {
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
                regenx_tb__DOT__dut__DOT__rp_rm_v = 1U;
            }
        }
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
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rm_phys = 0U;
    regenx_tb__DOT__dut__DOT__sc_rm_v = 0U;
    regenx_tb__DOT__dut__DOT__sc_rm_kind = 0U;
    regenx_tb__DOT__dut__DOT__rp_take = 0U;
    regenx_tb__DOT__dut__DOT__rp_rm_kind = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__b_addr = (0x1fU 
                                                & ((2U 
                                                    > (IData)(regenx_tb__DOT__dut__DOT__u_bist__DOT__pos))
                                                    ? 
                                                   ((IData)(0x10U) 
                                                    + (IData)(regenx_tb__DOT__dut__DOT__u_bist__DOT__pos))
                                                    : 
                                                   ((IData)(regenx_tb__DOT__dut__DOT__u_bist__DOT__pos) 
                                                    - (IData)(2U))));
    regenx_tb__DOT__dut__DOT__s_wdata = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__pat;
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        if (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata) 
                             == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q))) {
                            regenx_tb__DOT__dut__DOT__sc_rm_v = 1U;
                            regenx_tb__DOT__dut__DOT__sc_rm_kind = 1U;
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                    if ((1U & (~ (IData)((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)))))) {
                        regenx_tb__DOT__dut__DOT__sc_rm_v = 1U;
                        regenx_tb__DOT__dut__DOT__sc_rm_kind = 3U;
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
    if (vlSelf->regenx_tb__DOT__init_done) {
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx 
            = (1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp));
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid 
            = regenx_tb__DOT__dut__DOT__sc_rm_v;
    } else {
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx 
            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)));
        vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid 
            = regenx_tb__DOT__dut__DOT__rp_rm_v;
    }
    if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
                if ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__rp_rm_phys 
                        = (0x1fU & ((IData)(0x10U) 
                                    + (1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail)))));
                    regenx_tb__DOT__dut__DOT__rp_take = 1U;
                }
            }
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
                }
            }
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_valid 
        = ((IData)(vlSelf->regenx_tb__DOT__init_done)
            ? (IData)(regenx_tb__DOT__dut__DOT__sc_take)
            : (IData)(regenx_tb__DOT__dut__DOT__rp_take));
    if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                      >> 1U)))) {
            regenx_tb__DOT__dut__DOT__rp_rm_kind = 
                ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))
                  ? ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail))
                      ? 1U : ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__severe_phys 
                                     >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))
                               ? 3U : 2U)) : ((1U & 
                                               ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                                                >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))
                                               ? 0U
                                               : 3U));
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
                regenx_tb__DOT__dut__DOT__rp_rm_kind 
                    = ((0U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail))
                        ? 1U : ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild)
                                 ? 2U : 3U));
            }
        }
    }
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind 
        = ((IData)(vlSelf->regenx_tb__DOT__init_done)
            ? (IData)(regenx_tb__DOT__dut__DOT__sc_rm_kind)
            : (IData)(regenx_tb__DOT__dut__DOT__rp_rm_kind));
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state))) {
                        regenx_tb__DOT__dut__DOT__s_wdata 
                            = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q;
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state)))) {
                    regenx_tb__DOT__dut__DOT__s_wdata 
                        = vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q;
                }
            }
        }
    }
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
    vlSelf->regenx_tb__DOT__dut__DOT__lg_row = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_valid)
                                                 ? (IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_row)
                                                 : 
                                                ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__rl_valid)
                                                  ? (IData)(regenx_tb__DOT__dut__DOT__u_repair__DOT__cur_phys)
                                                  : (IData)(regenx_tb__DOT__dut__DOT__sl_row)));
    vlSelf->regenx_tb__DOT__dut__DOT__lg_valid = (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__bf_valid) 
                                                   | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__rl_valid)) 
                                                  | (IData)(regenx_tb__DOT__dut__DOT__sl_valid));
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
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel_idx = 0U;
    if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state)))) {
                if ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remapped) 
                           >> (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row)))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel_idx 
                        = (1U & (IData)(regenx_tb__DOT__dut__DOT__u_repair__DOT__cur_phys));
                }
            }
        }
    }
    regenx_tb__DOT__dut__DOT__u_array__DOT__old_val 
        = (VL_GTS_III(32, 0x12U, (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr))
            ? ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr))
                ? vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__cells
               [vlSelf->regenx_tb__DOT__dut__DOT__mem_addr]
                : 0U) : 0U);
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
        = vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata;
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
        = regenx_tb__DOT__dut__DOT__u_array__DOT__old_val;
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit = 0U;
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row = 0U;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k 
        = (0xfU & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat));
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r 
        = (0x1fU & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat));
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
        = (0xfU & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat));
    if (((IData)(vlSelf->regenx_tb__DOT__f_en) & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r) 
                                                  == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr)))) {
        if (VL_GTS_III(32, 8U, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0xffU & ((1U 
                                                & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                                   >> 
                                                   (7U 
                                                    & ((7U 
                                                        == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                        ? 
                                                       (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                        - (IData)(1U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                                               << (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((1U & (((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                    >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                         >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0xffU & ((1U 
                                                & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                                   >> 
                                                   (7U 
                                                    & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                               << (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if ((1U & ((~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                   >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                               & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                  >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                            = (((~ ((IData)(1U) << 
                                    (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                               | (0xffU & ((1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                                  >> 
                                                  (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                           << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val) 
                           | (0xffU & ((IData)(1U) 
                                       << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                    = ((~ ((IData)(1U) << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                       & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val));
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0xffU;
        } else if ((7U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit = 1U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row 
                = ((0x11U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))));
        }
    }
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k 
        = (0xfU & ((IData)(vlSelf->regenx_tb__DOT__flt_kind_flat) 
                   >> 4U));
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r 
        = (0x1fU & ((IData)(vlSelf->regenx_tb__DOT__flt_row_flat) 
                    >> 5U));
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
        = (0xfU & ((IData)(vlSelf->regenx_tb__DOT__flt_bit_flat) 
                   >> 4U));
    if ((((IData)(vlSelf->regenx_tb__DOT__f_en) >> 1U) 
         & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r) 
            == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr)))) {
        if (VL_GTS_III(32, 8U, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0xffU & ((1U 
                                                & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                                   >> 
                                                   (7U 
                                                    & ((7U 
                                                        == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                        ? 
                                                       (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                        - (IData)(1U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                                               << (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((1U & (((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                    >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                         >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0xffU & ((1U 
                                                & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                                   >> 
                                                   (7U 
                                                    & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                               << (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if ((1U & ((~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                   >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                               & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                  >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                            = (((~ ((IData)(1U) << 
                                    (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                               | (0xffU & ((1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                                  >> 
                                                  (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                           << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val) 
                           | (0xffU & ((IData)(1U) 
                                       << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                    = ((~ ((IData)(1U) << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                       & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val));
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0xffU;
        } else if ((7U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit = 1U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row 
                = ((0x11U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))));
        }
    }
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k 
        = (0xfU & ((IData)(vlSelf->regenx_tb__DOT__flt_kind_flat) 
                   >> 8U));
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r 
        = (0x1fU & ((IData)(vlSelf->regenx_tb__DOT__flt_row_flat) 
                    >> 0xaU));
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
        = (0xfU & ((IData)(vlSelf->regenx_tb__DOT__flt_bit_flat) 
                   >> 8U));
    if ((((IData)(vlSelf->regenx_tb__DOT__f_en) >> 2U) 
         & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r) 
            == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_addr)))) {
        if (VL_GTS_III(32, 8U, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0xffU & ((1U 
                                                & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                                   >> 
                                                   (7U 
                                                    & ((7U 
                                                        == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                        ? 
                                                       (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                        - (IData)(1U))
                                                        : 
                                                       ((IData)(1U) 
                                                        + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                                               << (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((1U & (((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                    >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                         >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0xffU & ((1U 
                                                & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                                   >> 
                                                   (7U 
                                                    & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                               << (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if ((1U & ((~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                   >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                               & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                  >> (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                            = (((~ ((IData)(1U) << 
                                    (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                               | (0xffU & ((1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                                  >> 
                                                  (7U 
                                                   & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                           << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val) 
                           | (0xffU & ((IData)(1U) 
                                       << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                    = ((~ ((IData)(1U) << (7U & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                       & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val));
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0xffU;
        } else if ((7U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit = 1U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row 
                = ((0x11U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))));
        }
    }
}

VL_ATTR_COLD void Vregenx_tb___024root___eval_stl(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vregenx_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vregenx_tb___024root___eval_triggers__stl(Vregenx_tb___024root* vlSelf);

VL_ATTR_COLD bool Vregenx_tb___024root___eval_phase__stl(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vregenx_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vregenx_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregenx_tb___024root___dump_triggers__act(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge regenx_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge regenx_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregenx_tb___024root___dump_triggers__nba(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge regenx_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge regenx_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregenx_tb___024root___ctor_var_reset(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->regenx_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__req_valid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__req_write = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__req_addr = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__req_wdata = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__scrub_en = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__scrub_req = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__reg_addr = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dbg_class_row = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__req_ready = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__rsp_error = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__rsp_corrected = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__rsp_rdata = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__reg_rdata = VL_RAND_RESET_I(32);
    vlSelf->regenx_tb__DOT__init_done = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__degraded = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__scrub_busy = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__data_lost = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__fault_count = VL_RAND_RESET_I(6);
    vlSelf->regenx_tb__DOT__dbg_class = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__f_en = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->regenx_tb__DOT__f_kind[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->regenx_tb__DOT__f_row[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->regenx_tb__DOT__f_bit[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->regenx_tb__DOT__flt_kind_flat = VL_RAND_RESET_I(12);
    vlSelf->regenx_tb__DOT__flt_row_flat = VL_RAND_RESET_I(15);
    vlSelf->regenx_tb__DOT__flt_bit_flat = VL_RAND_RESET_I(12);
    vlSelf->regenx_tb__DOT__errors = 0;
    vlSelf->regenx_tb__DOT__checks = 0;
    vlSelf->regenx_tb__DOT__boots = 0;
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->regenx_tb__DOT__e_bad[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->regenx_tb__DOT__e_sev[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regenx_tb__DOT__e_map[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regenx_tb__DOT__e_rem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regenx_tb__DOT__e_asst[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regenx_tb__DOT__e_unav[__Vi0] = 0;
    }
    vlSelf->regenx_tb__DOT__g_data = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__g_err = 0;
    vlSelf->regenx_tb__DOT__g_lat = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->regenx_tb__DOT__cov_kind[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->regenx_tb__DOT__cov_out[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regenx_tb__DOT__shadow[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->regenx_tb__DOT__pats[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regenx_tb__DOT__regmirror[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->regenx_tb__DOT__rows_b[__Vi0] = 0;
    }
    vlSelf->regenx_tb__DOT__seed = 0;
    vlSelf->regenx_tb__DOT____Vrepeat0 = VL_RAND_RESET_I(32);
    vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 = 0;
    vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0 = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__clash = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__grant = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__mem_en = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__mem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__mem_addr = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__mem_rdata = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__h_en = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__b_addr = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__bf_valid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__rl_valid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__lg_valid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__bf_row = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__lg_row = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__bf_mask = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__sl_mask = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__bf_elem = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__lg_elem = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__bf_pass = VL_RAND_RESET_I(2);
    vlSelf->regenx_tb__DOT__dut__DOT__lg_pass = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(80, vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat);
    vlSelf->regenx_tb__DOT__dut__DOT__remapped = VL_RAND_RESET_I(16);
    vlSelf->regenx_tb__DOT__dut__DOT__assist = VL_RAND_RESET_I(16);
    vlSelf->regenx_tb__DOT__dut__DOT__unavail = VL_RAND_RESET_I(16);
    vlSelf->regenx_tb__DOT__dut__DOT__bad_phys = VL_RAND_RESET_I(18);
    vlSelf->regenx_tb__DOT__dut__DOT__severe_phys = VL_RAND_RESET_I(18);
    vlSelf->regenx_tb__DOT__dut__DOT__spare_used = VL_RAND_RESET_I(2);
    vlSelf->regenx_tb__DOT__dut__DOT__owner0 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__owner1 = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rel_idx = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__rp_rm_phys = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rel = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rel_idx = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__sc_rm_phys = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__rec_start = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__ev_vfail = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__ev_chk = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__ev_flt = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__ev_mig = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__ev_rnd = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__ev_lost = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__last_valid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__last_row = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_row = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_idx = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_alloc__take_valid = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_row = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_kind = VL_RAND_RESET_I(2);
    vlSelf->regenx_tb__DOT__dut__DOT____Vcellinp__u_remap__wr_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__cells[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h121f0798__0 = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h90f5bdf9__0 = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__pass = VL_RAND_RESET_I(2);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__elem = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__idx = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__rd_exp = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_idx = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_elem = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_pass = VL_RAND_RESET_I(2);
    vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__n_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hc596298d__0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_h5c1b265e__0 = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_hecd4f861__0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT____Vlvbound_h4c0ef68d__0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_alloc__DOT__avail = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->regenx_tb__DOT__dut__DOT__u_remap__DOT__l2p[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__row = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__mild = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_repair__DOT__last_row = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__row_q = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__k = VL_RAND_RESET_I(2);
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__fail = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_recovery__DOT__pat = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wr_q = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__addr_q = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__wdata_q = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__phys_q = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__read_ok = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__is_spare = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__mig_sp = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__rest_fail = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_row = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_q = VL_RAND_RESET_I(4);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tgt_sp = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__phys_q = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__step = VL_RAND_RESET_I(3);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__fail_mask = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__data_q = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__ptr = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr = VL_RAND_RESET_I(32);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__pat = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__failed = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr_hit = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_fix = VL_RAND_RESET_I(16);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_unc = VL_RAND_RESET_I(16);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_chk = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_flt = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_mig = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_rnd = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_vfail = VL_RAND_RESET_I(5);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__n_lost = VL_RAND_RESET_I(8);
    vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map = VL_RAND_RESET_I(16);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_lost = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_boot = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_remap = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_assist = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_unavail = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_both = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_mig = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_sfault = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_fix = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_err = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_scrub = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__n_deg = 0;
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__init_q = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_1_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_2_1 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_3_2 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_4_3 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_5_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_6_1 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_7_2 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_8_3 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_9_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_10_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_11_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_12_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_13_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_14_0 = VL_RAND_RESET_I(1);
    vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_15_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_regenx_tb__DOT__sweep__24__unnamedblk19__DOT__r = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__104__rounds = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__104__unnamedblk16__DOT__k = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__138__nb = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__138__nr = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__138__na = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__138__nu = 0;
    vlSelf->__Vtask_regenx_tb__DOT__chk__141__ok = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__182__nb = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__182__nr = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__182__na = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__182__nu = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vtask_regenx_tb__DOT__model__183__free_sp[__Vi0] = 0;
    }
    vlSelf->__Vtask_regenx_tb__DOT__late_fault__219__slot = 0;
    vlSelf->__Vtask_regenx_tb__DOT__late_fault__219__kind2 = 0;
    vlSelf->__Vtask_regenx_tb__DOT__late_fault__219__row2 = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__270__rounds = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__270__unnamedblk16__DOT__k = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__305__rounds = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__305__unnamedblk16__DOT__k = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__364__nb = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__364__nr = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__364__na = 0;
    vlSelf->__Vtask_regenx_tb__DOT__check_state__364__nu = 0;
    vlSelf->__Vtask_regenx_tb__DOT__model__365__unnamedblk3__DOT__unnamedblk4__DOT__r = 0;
    vlSelf->__Vtask_regenx_tb__DOT__model__365__unnamedblk3__DOT__unnamedblk4__DOT__b = 0;
    vlSelf->__Vtask_regenx_tb__DOT__model__365__v = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__375__unnamedblk19__DOT__r = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__417__rounds = 0;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__417__unnamedblk16__DOT__k = 0;
    vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0;
    vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 0;
    vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0;
    vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0;
    vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok = 0;
    vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok = 0;
    vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok = 0;
    vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k = 0;
    vlSelf->__Vtask_regenx_tb__DOT__t_all_bits__571__unnamedblk23__DOT__k = 0;
    vlSelf->__Vtask_regenx_tb__DOT__t_random__614__unnamedblk26__DOT__n = 0;
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__657__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__Vfuncout = 0;
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__v = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__658__n = 0;
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__659__Vfuncout = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__Vfuncout = 0;
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__v = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__660__n = 0;
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__v = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__662__n = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__v = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_regs__DOT__count16__663__n = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__regenx_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
}
