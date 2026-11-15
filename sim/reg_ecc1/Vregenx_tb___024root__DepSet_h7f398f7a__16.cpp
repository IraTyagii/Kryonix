// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

void Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__24(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__24\n"); );
    // Body
    VL_WRITEF("COVERAGE fault kinds (slots): SA0=%0d SA1=%0d TF_UP=%0d TF_DN=%0d ROW0=%0d ROW1=%0d ALIAS=%0d COUPLE=%0d\nCOVERAGE outcomes: clean_boots=%0d rows_in_spare=%0d rows_ecc_assist=%0d rows_unavailable=%0d\n------------------------------------------------------------\nECC_EN=1 seed=%0d boots=%0d checks=%0d errors=%0d\n",
              32,vlSelf->regenx_tb__DOT__cov_kind[1U],
              32,vlSelf->regenx_tb__DOT__cov_kind[2U],
              32,vlSelf->regenx_tb__DOT__cov_kind[3U],
              32,vlSelf->regenx_tb__DOT__cov_kind[4U],
              32,vlSelf->regenx_tb__DOT__cov_kind[5U],
              32,vlSelf->regenx_tb__DOT__cov_kind[6U],
              32,vlSelf->regenx_tb__DOT__cov_kind[7U],
              32,vlSelf->regenx_tb__DOT__cov_kind[8U],
              32,vlSelf->regenx_tb__DOT__cov_out[0U],
              32,vlSelf->regenx_tb__DOT__cov_out[1U],
              32,vlSelf->regenx_tb__DOT__cov_out[2U],
              32,vlSelf->regenx_tb__DOT__cov_out[3U],
              32,vlSelf->regenx_tb__DOT__seed,32,vlSelf->regenx_tb__DOT__boots,
              32,vlSelf->regenx_tb__DOT__checks,32,
              vlSelf->regenx_tb__DOT__errors);
    if ((0U == vlSelf->regenx_tb__DOT__errors)) {
        VL_WRITEF("TB_RESULT: PASS\n");
    } else {
        VL_WRITEF("TB_RESULT: FAIL\n");
    }
    VL_FINISH_MT("tb/regenx_tb.sv", 733, "");
}

VL_INLINE_OPT VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__1(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x1d1a94a2000ULL, 
                                       nullptr, "tb/regenx_tb.sv", 
                                       737);
    VL_WRITEF("TB_RESULT: FAIL (watchdog)\n");
    VL_FINISH_MT("tb/regenx_tb.sv", 739, "");
}

VL_INLINE_OPT VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__2(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/regenx_tb.sv", 
                                           66);
        vlSelf->regenx_tb__DOT__clk = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vregenx_tb___024root___act_comb__TOP__0(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___act_comb__TOP__0\n"); );
    // Init
    SData/*12:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__old_val;
    regenx_tb__DOT__dut__DOT__u_array__DOT__old_val = 0;
    CData/*3:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r = 0;
    IData/*31:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0;
    CData/*0:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad = 0;
    SData/*12:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c = 0;
    // Body
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr_hit 
        = ((IData)(vlSelf->regenx_tb__DOT__scrub_en) 
           & ((IData)(vlSelf->regenx_tb__DOT__init_done) 
              & (0xbb7U == vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr)));
    if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dbg_class_row))) {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c
            [vlSelf->regenx_tb__DOT__dbg_class_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s
            [vlSelf->regenx_tb__DOT__dbg_class_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask
            [vlSelf->regenx_tb__DOT__dbg_class_row];
    } else {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m = 0U;
    }
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad 
        = ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dbg_class_row)) 
           && (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> (IData)(vlSelf->regenx_tb__DOT__dbg_class_row))));
    {
        if (__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad) {
            if (VL_LTS_III(32, 1U, ([&]() {
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v 
                                = __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n = 0U;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 1U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 2U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 3U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 4U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 5U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 6U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 7U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 8U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 9U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 0xaU)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 0xbU)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 0xcU)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__Vfuncout 
                                = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n;
                        }(), vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__Vfuncout))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 5U;
                goto __Vlabel7;
            } else if (((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s)) 
                        & (0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c)))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 6U;
                goto __Vlabel7;
            } else if ((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 4U;
                goto __Vlabel7;
            } else if ((1U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 1U;
                goto __Vlabel7;
            } else if ((2U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 2U;
                goto __Vlabel7;
            } else {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 3U;
                goto __Vlabel7;
            }
        } else {
            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 0U;
            goto __Vlabel7;
        }
        __Vlabel7: ;
    }
    vlSelf->regenx_tb__DOT__dbg_class = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout;
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
        if (VL_GTS_III(32, 0xdU, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2 
                                = ((0xcU >= (0xfU & 
                                             ((0xcU 
                                               == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                               ? (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & ((0xcU 
                                                     == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                     ? 
                                                    (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                              && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                        >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                             & (~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1 
                                = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if (((~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                             && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                       >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                         & ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                            && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                      >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0 
                            = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                               && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                         >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0) 
                                                 << 
                                                 (0xfU 
                                                  & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1 = 1U;
                    if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                            = (((~ ((IData)(1U) << 
                                    (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                               | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1) 
                                             << (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0 = 0U;
                if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                            & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                           | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0) 
                                         << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0x1fffU;
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
        if (VL_GTS_III(32, 0xdU, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2 
                                = ((0xcU >= (0xfU & 
                                             ((0xcU 
                                               == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                               ? (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & ((0xcU 
                                                     == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                     ? 
                                                    (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                              && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                        >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                             & (~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1 
                                = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if (((~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                             && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                       >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                         & ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                            && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                      >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0 
                            = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                               && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                         >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0) 
                                                 << 
                                                 (0xfU 
                                                  & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1 = 1U;
                    if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                            = (((~ ((IData)(1U) << 
                                    (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                               | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1) 
                                             << (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0 = 0U;
                if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                            & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                           | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0) 
                                         << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0x1fffU;
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
        if (VL_GTS_III(32, 0xdU, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2 
                                = ((0xcU >= (0xfU & 
                                             ((0xcU 
                                               == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                               ? (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & ((0xcU 
                                                     == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                     ? 
                                                    (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                              && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                        >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                             & (~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1 
                                = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if (((~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                             && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                       >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                         & ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                            && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                      >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0 
                            = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                               && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                         >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0) 
                                                 << 
                                                 (0xfU 
                                                  & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1 = 1U;
                    if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                            = (((~ ((IData)(1U) << 
                                    (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                               | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1) 
                                             << (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0 = 0U;
                if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                            & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                           | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0) 
                                         << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0x1fffU;
        } else if ((7U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit = 1U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row 
                = ((0x11U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))));
        }
    }
}

void Vregenx_tb___024root___eval_act(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vregenx_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregenx_tb___024root___nba_comb__TOP__0(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*12:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__old_val;
    regenx_tb__DOT__dut__DOT__u_array__DOT__old_val = 0;
    CData/*3:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k = 0;
    CData/*4:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r = 0;
    IData/*31:0*/ regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b;
    regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b = 0;
    CData/*0:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad = 0;
    SData/*12:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s = 0;
    CData/*4:0*/ __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c;
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c = 0;
    // Body
    if ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dbg_class_row))) {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_c
            [vlSelf->regenx_tb__DOT__dbg_class_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__sig_s
            [vlSelf->regenx_tb__DOT__dbg_class_row];
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m 
            = vlSelf->regenx_tb__DOT__dut__DOT__u_fault__DOT__mask
            [vlSelf->regenx_tb__DOT__dbg_class_row];
    } else {
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s = 0U;
        __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m = 0U;
    }
    __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad 
        = ((0x11U >= (IData)(vlSelf->regenx_tb__DOT__dbg_class_row)) 
           && (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                     >> (IData)(vlSelf->regenx_tb__DOT__dbg_class_row))));
    {
        if (__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__bad) {
            if (VL_LTS_III(32, 1U, ([&]() {
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v 
                                = __Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__m;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n = 0U;
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & (IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 1U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 2U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 3U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 4U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 5U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 6U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 7U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 8U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 9U)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 0xaU)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 0xbU)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                = (vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n 
                                   + (1U & ((IData)(vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__v) 
                                            >> 0xcU)));
                            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__Vfuncout 
                                = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__n;
                        }(), vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__ones__997__Vfuncout))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 5U;
                goto __Vlabel8;
            } else if (((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s)) 
                        & (0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__c)))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 6U;
                goto __Vlabel8;
            } else if ((0U == (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 4U;
                goto __Vlabel8;
            } else if ((1U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 1U;
                goto __Vlabel8;
            } else if ((2U & (IData)(__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__s))) {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 2U;
                goto __Vlabel8;
            } else {
                vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 3U;
                goto __Vlabel8;
            }
        } else {
            vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout = 0U;
            goto __Vlabel8;
        }
        __Vlabel8: ;
    }
    vlSelf->regenx_tb__DOT__dbg_class = vlSelf->__Vfunc_regenx_tb__DOT__dut__DOT__u_fault__DOT__classify__996__Vfuncout;
    vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr_hit 
        = ((IData)(vlSelf->regenx_tb__DOT__scrub_en) 
           & ((IData)(vlSelf->regenx_tb__DOT__init_done) 
              & (0xbb7U == vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__tmr)));
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
        if (VL_GTS_III(32, 0xdU, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2 
                                = ((0xcU >= (0xfU & 
                                             ((0xcU 
                                               == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                               ? (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & ((0xcU 
                                                     == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                     ? 
                                                    (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                              && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                        >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                             & (~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1 
                                = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if (((~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                             && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                       >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                         & ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                            && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                      >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0 
                            = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                               && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                         >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0) 
                                                 << 
                                                 (0xfU 
                                                  & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1 = 1U;
                    if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                            = (((~ ((IData)(1U) << 
                                    (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                               | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1) 
                                             << (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0 = 0U;
                if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                            & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                           | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0) 
                                         << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0x1fffU;
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
        if (VL_GTS_III(32, 0xdU, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2 
                                = ((0xcU >= (0xfU & 
                                             ((0xcU 
                                               == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                               ? (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & ((0xcU 
                                                     == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                     ? 
                                                    (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                              && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                        >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                             & (~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1 
                                = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if (((~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                             && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                       >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                         & ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                            && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                      >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0 
                            = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                               && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                         >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0) 
                                                 << 
                                                 (0xfU 
                                                  & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1 = 1U;
                    if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                            = (((~ ((IData)(1U) << 
                                    (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                               | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1) 
                                             << (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0 = 0U;
                if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                            & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                           | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0) 
                                         << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0x1fffU;
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
        if (VL_GTS_III(32, 0xdU, regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) {
            if ((8U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2 
                                = ((0xcU >= (0xfU & 
                                             ((0xcU 
                                               == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                               ? (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                  - (IData)(1U))
                                               : ((IData)(1U) 
                                                  + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & ((0xcU 
                                                     == regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)
                                                     ? 
                                                    (regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b 
                                                     - (IData)(1U))
                                                     : 
                                                    ((IData)(1U) 
                                                     + regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__2) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (~ ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k)))) {
                        if ((((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                              && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                        >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))) 
                             & (~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1 
                                = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                                   && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                             >> (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                        & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__1) 
                                           << (0xfU 
                                               & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                    if (((~ ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                             && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                       >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))))) 
                         & ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                            && (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__mem_wdata) 
                                      >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)))))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0 
                            = ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b)) 
                               && (1U & ((IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__old_val) 
                                         >> (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                    & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__wr_val)) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h39ebe8ec__0) 
                                                 << 
                                                 (0xfU 
                                                  & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                        }
                    }
                } else {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1 = 1U;
                    if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                        vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                            = (((~ ((IData)(1U) << 
                                    (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                                & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                               | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__1) 
                                             << (0xfU 
                                                 & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                    }
                }
            } else if ((1U & (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
                vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0 = 0U;
                if ((0xcU >= (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) {
                    vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val 
                        = (((~ ((IData)(1U) << (0xfU 
                                                & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))) 
                            & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val)) 
                           | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT____Vlvbound_h0975f6f8__0) 
                                         << (0xfU & regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b))));
                }
            }
        }
        if ((5U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0U;
        } else if ((6U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__rd_val = 0x1fffU;
        } else if ((7U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__k))) {
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_hit = 1U;
            vlSelf->regenx_tb__DOT__dut__DOT__u_array__DOT__alias_row 
                = ((0x11U == (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(regenx_tb__DOT__dut__DOT__u_array__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r))));
        }
    }
}

void Vregenx_tb___024root___nba_sequent__TOP__0(Vregenx_tb___024root* vlSelf);

void Vregenx_tb___024root___eval_nba(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregenx_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregenx_tb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vregenx_tb___024root___timing_resume(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h1832eb76__0.resume("@(posedge regenx_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h1832ed33__0.resume("@(negedge regenx_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vregenx_tb___024root___timing_commit(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h1832eb76__0.commit("@(posedge regenx_tb.clk)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h1832ed33__0.commit("@(negedge regenx_tb.clk)");
    }
}

void Vregenx_tb___024root___eval_triggers__act(Vregenx_tb___024root* vlSelf);

bool Vregenx_tb___024root___eval_phase__act(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregenx_tb___024root___eval_triggers__act(vlSelf);
    Vregenx_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vregenx_tb___024root___timing_resume(vlSelf);
        Vregenx_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregenx_tb___024root___eval_phase__nba(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregenx_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregenx_tb___024root___dump_triggers__nba(Vregenx_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregenx_tb___024root___dump_triggers__act(Vregenx_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregenx_tb___024root___eval(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval\n"); );
    // Init
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__rst_n 
        = vlSelf->regenx_tb__DOT__rst_n;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT__map_ok;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__clash 
        = vlSelf->regenx_tb__DOT__dut__DOT__clash;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__grant 
        = vlSelf->regenx_tb__DOT__dut__DOT__grant;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__ev_lost 
        = vlSelf->regenx_tb__DOT__dut__DOT__ev_lost;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__ev_mig 
        = vlSelf->regenx_tb__DOT__dut__DOT__ev_mig;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_en 
        = vlSelf->regenx_tb__DOT__dut__DOT__mem_en;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_addr 
        = vlSelf->regenx_tb__DOT__dut__DOT__mem_addr;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_10_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_10_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_ready 
        = vlSelf->regenx_tb__DOT__req_ready;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_15_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_15_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__data_lost 
        = vlSelf->regenx_tb__DOT__data_lost;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__init_done 
        = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_11_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_11_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_rvalid 
        = vlSelf->regenx_tb__DOT__dut__DOT__mem_rvalid;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_regs__DOT__lost_map;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__unavail 
        = vlSelf->regenx_tb__DOT__dut__DOT__unavail;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__h_en 
        = vlSelf->regenx_tb__DOT__dut__DOT__h_en;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_13_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_13_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_14_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_14_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_bist__DOT__state 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__degraded 
        = vlSelf->regenx_tb__DOT__degraded;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__assist 
        = vlSelf->regenx_tb__DOT__dut__DOT__assist;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_0_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_0_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_4_3 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_4_3;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_valid 
        = vlSelf->regenx_tb__DOT__rsp_valid;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_8_3 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_8_3;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_12_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_12_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_corrected 
        = vlSelf->regenx_tb__DOT__rsp_corrected;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__rsp_error 
        = vlSelf->regenx_tb__DOT__rsp_error;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_9_0 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_sva__DOT___Vpast_9_0;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__scrub_busy 
        = vlSelf->regenx_tb__DOT__scrub_busy;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state 
        = vlSelf->regenx_tb__DOT__dut__DOT__u_ctrl__DOT__state;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__req_valid 
        = vlSelf->regenx_tb__DOT__req_valid;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__status_clear 
        = vlSelf->regenx_tb__DOT__status_clear;
    vlSelf->__Vsampled__TOP__regenx_tb__DOT__dut__DOT__mem_we 
        = vlSelf->regenx_tb__DOT__dut__DOT__mem_we;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregenx_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/regenx_tb.sv", 10, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vregenx_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/regenx_tb.sv", 10, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vregenx_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vregenx_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregenx_tb___024root___eval_debug_assertions(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
