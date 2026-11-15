// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__5(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__5\n"); );
    // Init
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__219__g;
    __Vtask_regenx_tb__DOT__late_fault__219__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__224__slot;
    __Vtask_regenx_tb__DOT__set_fault__224__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__224__kind;
    __Vtask_regenx_tb__DOT__set_fault__224__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__224__row;
    __Vtask_regenx_tb__DOT__set_fault__224__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__224__bitn;
    __Vtask_regenx_tb__DOT__set_fault__224__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__225__n;
    __Vtask_regenx_tb__DOT__tick__225__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__226__ok;
    __Vtask_regenx_tb__DOT__chk__226__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__226__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__228__n;
    __Vtask_regenx_tb__DOT__tick__228__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__229__ok;
    __Vtask_regenx_tb__DOT__chk__229__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__229__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__230__ok;
    __Vtask_regenx_tb__DOT__chk__230__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__230__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__231__ok;
    __Vtask_regenx_tb__DOT__chk__231__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__231__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__232__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__232__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__232__a;
    __Vfunc_regenx_tb__DOT__stat__232__a = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__233__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__233__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__233__a;
    __Vfunc_regenx_tb__DOT__stat__233__a = 0;
    std::string __Vtask_regenx_tb__DOT__sweep__234__tag;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__234__rounds;
    __Vtask_regenx_tb__DOT__sweep__234__rounds = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__234__unnamedblk16__DOT__k;
    __Vtask_regenx_tb__DOT__sweep__234__unnamedblk16__DOT__k = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
    __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__235__w;
    __Vtask_regenx_tb__DOT__host_op__235__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__235__a;
    __Vtask_regenx_tb__DOT__host_op__235__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__235__d;
    __Vtask_regenx_tb__DOT__host_op__235__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__235__guard;
    __Vtask_regenx_tb__DOT__host_op__235__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__236__ok;
    __Vtask_regenx_tb__DOT__chk__236__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__236__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__237__ok;
    __Vtask_regenx_tb__DOT__chk__237__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__237__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__238__ok;
    __Vtask_regenx_tb__DOT__chk__238__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__238__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__239__w;
    __Vtask_regenx_tb__DOT__host_op__239__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__239__a;
    __Vtask_regenx_tb__DOT__host_op__239__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__239__d;
    __Vtask_regenx_tb__DOT__host_op__239__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__239__guard;
    __Vtask_regenx_tb__DOT__host_op__239__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__240__ok;
    __Vtask_regenx_tb__DOT__chk__240__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__240__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__241__ok;
    __Vtask_regenx_tb__DOT__chk__241__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__241__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__242__ok;
    __Vtask_regenx_tb__DOT__chk__242__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__242__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__243__ok;
    __Vtask_regenx_tb__DOT__chk__243__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__243__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__244__ok;
    __Vtask_regenx_tb__DOT__chk__244__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__244__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__245__ok;
    __Vtask_regenx_tb__DOT__chk__245__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__245__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__246__w;
    __Vtask_regenx_tb__DOT__host_op__246__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__246__a;
    __Vtask_regenx_tb__DOT__host_op__246__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__246__d;
    __Vtask_regenx_tb__DOT__host_op__246__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__246__guard;
    __Vtask_regenx_tb__DOT__host_op__246__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__247__ok;
    __Vtask_regenx_tb__DOT__chk__247__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__247__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__248__ok;
    __Vtask_regenx_tb__DOT__chk__248__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__248__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__249__w;
    __Vtask_regenx_tb__DOT__host_op__249__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__249__a;
    __Vtask_regenx_tb__DOT__host_op__249__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__249__d;
    __Vtask_regenx_tb__DOT__host_op__249__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__249__guard;
    __Vtask_regenx_tb__DOT__host_op__249__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__250__ok;
    __Vtask_regenx_tb__DOT__chk__250__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__250__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__251__ok;
    __Vtask_regenx_tb__DOT__chk__251__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__251__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__252__ok;
    __Vtask_regenx_tb__DOT__chk__252__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__252__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__253__w;
    __Vtask_regenx_tb__DOT__host_op__253__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__253__a;
    __Vtask_regenx_tb__DOT__host_op__253__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__253__d;
    __Vtask_regenx_tb__DOT__host_op__253__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__253__guard;
    __Vtask_regenx_tb__DOT__host_op__253__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__254__ok;
    __Vtask_regenx_tb__DOT__chk__254__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__254__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__255__ok;
    __Vtask_regenx_tb__DOT__chk__255__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__255__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__257__slot;
    __Vtask_regenx_tb__DOT__set_fault__257__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__257__kind;
    __Vtask_regenx_tb__DOT__set_fault__257__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__257__row;
    __Vtask_regenx_tb__DOT__set_fault__257__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__257__bitn;
    __Vtask_regenx_tb__DOT__set_fault__257__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__258__slot;
    __Vtask_regenx_tb__DOT__late_fault__258__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__258__kind;
    __Vtask_regenx_tb__DOT__late_fault__258__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__258__row;
    __Vtask_regenx_tb__DOT__late_fault__258__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__258__bitn;
    __Vtask_regenx_tb__DOT__late_fault__258__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__258__kind2;
    __Vtask_regenx_tb__DOT__late_fault__258__kind2 = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__258__row2;
    __Vtask_regenx_tb__DOT__late_fault__258__row2 = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__258__g;
    __Vtask_regenx_tb__DOT__late_fault__258__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__259__cycles;
    __Vtask_regenx_tb__DOT__do_reset__259__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__260__n;
    __Vtask_regenx_tb__DOT__tick__260__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__261__n;
    __Vtask_regenx_tb__DOT__tick__261__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__262__slot;
    __Vtask_regenx_tb__DOT__set_fault__262__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__262__kind;
    __Vtask_regenx_tb__DOT__set_fault__262__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__262__row;
    __Vtask_regenx_tb__DOT__set_fault__262__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__262__bitn;
    __Vtask_regenx_tb__DOT__set_fault__262__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__263__slot;
    __Vtask_regenx_tb__DOT__set_fault__263__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__263__kind;
    __Vtask_regenx_tb__DOT__set_fault__263__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__263__row;
    __Vtask_regenx_tb__DOT__set_fault__263__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__263__bitn;
    __Vtask_regenx_tb__DOT__set_fault__263__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__264__n;
    __Vtask_regenx_tb__DOT__tick__264__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__265__ok;
    __Vtask_regenx_tb__DOT__chk__265__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__265__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__267__n;
    __Vtask_regenx_tb__DOT__tick__267__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__268__ok;
    __Vtask_regenx_tb__DOT__chk__268__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__268__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__269__ok;
    __Vtask_regenx_tb__DOT__chk__269__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__269__what;
    // Body
    if ((0U != vlSelf->__Vtask_regenx_tb__DOT__late_fault__219__kind2)) {
        __Vtask_regenx_tb__DOT__set_fault__224__bitn = 0U;
        __Vtask_regenx_tb__DOT__set_fault__224__row 
            = vlSelf->__Vtask_regenx_tb__DOT__late_fault__219__row2;
        __Vtask_regenx_tb__DOT__set_fault__224__kind 
            = vlSelf->__Vtask_regenx_tb__DOT__late_fault__219__kind2;
        __Vtask_regenx_tb__DOT__set_fault__224__slot 
            = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__late_fault__219__slot);
        vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
        vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__224__kind);
        vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
            = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__224__row);
        vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__224__bitn);
        if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__224__slot))) {
            vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__224__slot))) 
                                             & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                            | (7U & 
                                               ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                << 
                                                (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__224__slot))));
            vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__224__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
            vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__224__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
            vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__224__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
        }
        vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__224__kind);
        vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
            = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__224__row);
        if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__224__slot))))) {
            vlSelf->regenx_tb__DOT__flt_row_flat = 
                (((~ ((IData)(0x1fU) << (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__224__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                 | (0x7fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                               << (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__224__slot)))));
        }
        vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__224__bitn);
        if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__224__slot)))) {
            vlSelf->regenx_tb__DOT__flt_kind_flat = 
                (((~ ((IData)(0xfU) << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__224__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                 | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                              << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__224__slot)))));
            vlSelf->regenx_tb__DOT__flt_bit_flat = 
                (((~ ((IData)(0xfU) << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__224__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                 | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                              << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__224__slot)))));
        }
    }
    __Vtask_regenx_tb__DOT__late_fault__219__g = 0U;
    while (((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_regenx_tb__DOT__late_fault__219__g))) {
        __Vtask_regenx_tb__DOT__tick__225__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__225__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__late_fault__219__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__219__g);
    }
    __Vtask_regenx_tb__DOT__chk__226__what = std::string{"late fault boot"};
    __Vtask_regenx_tb__DOT__chk__226__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__226__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__226__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__228__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__228__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__229__what = VL_SFORMATF_NX("row5 should have moved to 17, is %0#",
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                >> 0x19U))) ;
    __Vtask_regenx_tb__DOT__chk__229__ok = (0x11U == 
                                            (0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 0x19U)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__229__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__229__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__230__what = std::string{"spare 16 should be marked bad"};
    __Vtask_regenx_tb__DOT__chk__230__ok = (1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                  >> 0x10U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__230__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__230__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__231__what = VL_SFORMATF_NX("verify fail counter %0d",
                                                            32,
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__232__a = 4U;
                        __Vfunc_regenx_tb__DOT__stat__232__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__232__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__232__Vfuncout), 0xfU)) ;
    __Vtask_regenx_tb__DOT__chk__231__ok = (1U == VL_SHIFTR_III(32,32,32, 
                                                                ([&]() {
                    __Vfunc_regenx_tb__DOT__stat__233__a = 4U;
                    __Vfunc_regenx_tb__DOT__stat__233__Vfuncout 
                        = vlSelf->regenx_tb__DOT__regmirror
                        [(0xfU & __Vfunc_regenx_tb__DOT__stat__233__a)];
                }(), __Vfunc_regenx_tb__DOT__stat__233__Vfuncout), 0xfU));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__231__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__231__what));
        }
    }
    __Vtask_regenx_tb__DOT__sweep__234__rounds = 1U;
    __Vtask_regenx_tb__DOT__sweep__234__tag = std::string{"rec1"};
    __Vtask_regenx_tb__DOT__sweep__234__unnamedblk16__DOT__k = 0U;
    while (VL_LTS_III(32, __Vtask_regenx_tb__DOT__sweep__234__unnamedblk16__DOT__k, __Vtask_regenx_tb__DOT__sweep__234__rounds)) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 0",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 1",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 1U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 2",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 2U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 3",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 3U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 4",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 4U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 5",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 5U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 6",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 6U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 7",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 7U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 8",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 8U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__235__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 9",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 9U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__235__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 10",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xaU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__235__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 11",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xbU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__235__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 12",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xcU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__235__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 13",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xdU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__235__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 14",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xeU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__235__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__235__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__235__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__235__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__235__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__235__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
        }
        __Vtask_regenx_tb__DOT__chk__236__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__236__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__236__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__236__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__235__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__235__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__235__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__237__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__237__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__235__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__237__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__237__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__238__what = VL_SFORMATF_NX("%@: write err flag row 15",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
        __Vtask_regenx_tb__DOT__chk__238__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xfU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__238__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__238__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x8000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 15 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 15",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 15 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xfU]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x4000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 14 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 14",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 14 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xeU]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x2000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 13 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 13",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 13 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xdU]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x1000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 12 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 12",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 12 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xcU]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x800U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 11 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 11",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 11 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xbU]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x400U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 10 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 10",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 10 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xaU]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x200U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 9 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 9",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 9 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [9U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x100U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 8 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 8",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 8 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [8U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x80U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 7 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 7",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 7 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [7U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x40U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 6 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 6",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 6 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [6U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x20U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 5 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 5",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 5 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [5U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x10U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 4 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 4",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 4 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [4U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 3 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 3",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 3 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [3U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 2 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 2",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 2 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [2U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 1 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 1",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 1 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [1U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__239__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__239__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__239__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__239__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
        }
        __Vtask_regenx_tb__DOT__chk__240__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__240__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__240__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__240__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__239__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__239__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__239__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__241__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__241__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__239__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__241__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__241__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__242__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 0 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__242__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__242__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__242__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__243__what 
                = VL_SFORMATF_NX("%@: unexpected error row 0",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag)) ;
            __Vtask_regenx_tb__DOT__chk__243__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__243__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__243__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__244__what 
                = VL_SFORMATF_NX("%@: row 0 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0U]) ;
            __Vtask_regenx_tb__DOT__chk__244__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__244__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__244__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__245__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__245__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__245__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__245__what));
            }
        }
        __Vtask_regenx_tb__DOT__sweep__234__unnamedblk16__DOT__k 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__234__unnamedblk16__DOT__k);
    }
    __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r = 0U;
    while (VL_GTS_III(32, 0x10U, __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r)) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                      >> (0xfU & __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r))))) {
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[0U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [0U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[0U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[1U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [1U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[1U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[2U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [2U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[2U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[3U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [3U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[3U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[4U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [4U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[4U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[5U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [5U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[5U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[6U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [6U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[6U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__246__d 
                = vlSelf->regenx_tb__DOT__pats[7U];
            __Vtask_regenx_tb__DOT__host_op__246__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__246__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__246__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__246__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__246__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
            }
            __Vtask_regenx_tb__DOT__chk__247__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__247__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__247__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__247__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__246__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__246__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__246__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__248__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__248__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__246__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__248__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__248__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__249__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__249__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__249__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__249__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__249__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
            }
            __Vtask_regenx_tb__DOT__chk__250__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__250__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__250__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__250__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__249__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__249__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__249__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__251__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__251__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__249__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__251__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__251__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__252__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__234__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [7U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__252__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[7U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__252__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__252__what));
                }
            }
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r)] = 0U;
            __Vtask_regenx_tb__DOT__host_op__253__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__253__a 
                = __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__253__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__253__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__253__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__253__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__253__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__253__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__253__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__253__guard);
            }
            __Vtask_regenx_tb__DOT__chk__254__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__254__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__253__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__254__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__254__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__253__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__253__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__253__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__253__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__255__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__255__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__253__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__255__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__255__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        }
        __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__234__unnamedblk19__DOT__r);
    }
    vlSelf->regenx_tb__DOT__f_en = 0U;
    vlSelf->regenx_tb__DOT__flt_kind_flat = 0U;
    vlSelf->regenx_tb__DOT__flt_row_flat = 0U;
    vlSelf->regenx_tb__DOT__flt_bit_flat = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
    vlSelf->regenx_tb__DOT__f_kind[0U] = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
    vlSelf->regenx_tb__DOT__f_row[0U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
    vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
    vlSelf->regenx_tb__DOT__f_bit[0U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
    vlSelf->regenx_tb__DOT__f_kind[1U] = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
    vlSelf->regenx_tb__DOT__f_row[1U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
    vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
    vlSelf->regenx_tb__DOT__f_bit[1U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
    vlSelf->regenx_tb__DOT__f_kind[2U] = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
    vlSelf->regenx_tb__DOT__f_row[2U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
    vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
    vlSelf->regenx_tb__DOT__f_bit[2U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
    __Vtask_regenx_tb__DOT__set_fault__257__bitn = 0U;
    __Vtask_regenx_tb__DOT__set_fault__257__row = 7U;
    __Vtask_regenx_tb__DOT__set_fault__257__kind = 5U;
    __Vtask_regenx_tb__DOT__set_fault__257__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__257__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__257__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__257__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__257__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__257__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__257__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__257__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__257__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__257__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__257__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__257__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__257__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__257__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__257__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__257__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__257__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__257__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__257__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__257__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__257__slot)))));
    }
    __Vtask_regenx_tb__DOT__late_fault__258__row2 = 0x11U;
    __Vtask_regenx_tb__DOT__late_fault__258__kind2 = 6U;
    __Vtask_regenx_tb__DOT__late_fault__258__bitn = 0U;
    __Vtask_regenx_tb__DOT__late_fault__258__row = 0x10U;
    __Vtask_regenx_tb__DOT__late_fault__258__kind = 6U;
    __Vtask_regenx_tb__DOT__late_fault__258__slot = 1U;
    __Vtask_regenx_tb__DOT__late_fault__258__g = 0U;
    __Vtask_regenx_tb__DOT__do_reset__259__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__260__n = __Vtask_regenx_tb__DOT__do_reset__259__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__260__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       161);
    vlSelf->regenx_tb__DOT__rst_n = 1U;
    while (((3U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state)) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_regenx_tb__DOT__late_fault__258__g))) {
        __Vtask_regenx_tb__DOT__tick__261__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__261__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__late_fault__258__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__258__g);
    }
    __Vtask_regenx_tb__DOT__set_fault__262__bitn = __Vtask_regenx_tb__DOT__late_fault__258__bitn;
    __Vtask_regenx_tb__DOT__set_fault__262__row = __Vtask_regenx_tb__DOT__late_fault__258__row;
    __Vtask_regenx_tb__DOT__set_fault__262__kind = __Vtask_regenx_tb__DOT__late_fault__258__kind;
    __Vtask_regenx_tb__DOT__set_fault__262__slot = __Vtask_regenx_tb__DOT__late_fault__258__slot;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__262__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__262__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__262__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__262__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__262__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__262__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__262__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__262__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__262__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__262__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__262__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__262__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__262__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__262__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__262__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__262__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__262__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__262__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__262__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__262__slot)))));
    }
    if ((0U != __Vtask_regenx_tb__DOT__late_fault__258__kind2)) {
        __Vtask_regenx_tb__DOT__set_fault__263__bitn = 0U;
        __Vtask_regenx_tb__DOT__set_fault__263__row 
            = __Vtask_regenx_tb__DOT__late_fault__258__row2;
        __Vtask_regenx_tb__DOT__set_fault__263__kind 
            = __Vtask_regenx_tb__DOT__late_fault__258__kind2;
        __Vtask_regenx_tb__DOT__set_fault__263__slot 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__258__slot);
        vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
        vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__263__kind);
        vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
            = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__263__row);
        vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__263__bitn);
        if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__263__slot))) {
            vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__263__slot))) 
                                             & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                            | (7U & 
                                               ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                << 
                                                (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__263__slot))));
            vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__263__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
            vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__263__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
            vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__263__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
        }
        vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__263__kind);
        vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
            = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__263__row);
        if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__263__slot))))) {
            vlSelf->regenx_tb__DOT__flt_row_flat = 
                (((~ ((IData)(0x1fU) << (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__263__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                 | (0x7fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                               << (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__263__slot)))));
        }
        vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__263__bitn);
        if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__263__slot)))) {
            vlSelf->regenx_tb__DOT__flt_kind_flat = 
                (((~ ((IData)(0xfU) << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__263__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                 | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                              << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__263__slot)))));
            vlSelf->regenx_tb__DOT__flt_bit_flat = 
                (((~ ((IData)(0xfU) << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__263__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                 | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                              << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__263__slot)))));
        }
    }
    __Vtask_regenx_tb__DOT__late_fault__258__g = 0U;
    while (((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_regenx_tb__DOT__late_fault__258__g))) {
        __Vtask_regenx_tb__DOT__tick__264__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__264__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__late_fault__258__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__258__g);
    }
    __Vtask_regenx_tb__DOT__chk__265__what = std::string{"late fault boot"};
    __Vtask_regenx_tb__DOT__chk__265__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__265__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__265__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__267__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__267__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__268__what = std::string{"row7 should be unavailable"};
    __Vtask_regenx_tb__DOT__chk__268__ok = (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                  >> 7U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__268__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__268__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__269__what = std::string{"degraded"};
    __Vtask_regenx_tb__DOT__chk__269__ok = vlSelf->regenx_tb__DOT__degraded;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__269__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__269__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__sweep__270__rounds = 1U;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag = 
        std::string{"rec2"};
    vlSelf->__Vtask_regenx_tb__DOT__sweep__270__unnamedblk16__DOT__k = 0U;
}

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__6(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__6\n"); );
    // Init
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
    __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__271__w;
    __Vtask_regenx_tb__DOT__host_op__271__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__271__a;
    __Vtask_regenx_tb__DOT__host_op__271__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__271__d;
    __Vtask_regenx_tb__DOT__host_op__271__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__271__guard;
    __Vtask_regenx_tb__DOT__host_op__271__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__272__ok;
    __Vtask_regenx_tb__DOT__chk__272__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__272__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__273__ok;
    __Vtask_regenx_tb__DOT__chk__273__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__273__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__274__ok;
    __Vtask_regenx_tb__DOT__chk__274__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__274__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__275__w;
    __Vtask_regenx_tb__DOT__host_op__275__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__275__a;
    __Vtask_regenx_tb__DOT__host_op__275__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__275__d;
    __Vtask_regenx_tb__DOT__host_op__275__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__275__guard;
    __Vtask_regenx_tb__DOT__host_op__275__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__276__ok;
    __Vtask_regenx_tb__DOT__chk__276__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__276__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__277__ok;
    __Vtask_regenx_tb__DOT__chk__277__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__277__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__278__ok;
    __Vtask_regenx_tb__DOT__chk__278__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__278__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__279__ok;
    __Vtask_regenx_tb__DOT__chk__279__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__279__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__280__ok;
    __Vtask_regenx_tb__DOT__chk__280__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__280__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__281__ok;
    __Vtask_regenx_tb__DOT__chk__281__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__281__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__282__w;
    __Vtask_regenx_tb__DOT__host_op__282__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__282__a;
    __Vtask_regenx_tb__DOT__host_op__282__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__282__d;
    __Vtask_regenx_tb__DOT__host_op__282__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__282__guard;
    __Vtask_regenx_tb__DOT__host_op__282__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__283__ok;
    __Vtask_regenx_tb__DOT__chk__283__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__283__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__284__ok;
    __Vtask_regenx_tb__DOT__chk__284__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__284__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__285__w;
    __Vtask_regenx_tb__DOT__host_op__285__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__285__a;
    __Vtask_regenx_tb__DOT__host_op__285__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__285__d;
    __Vtask_regenx_tb__DOT__host_op__285__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__285__guard;
    __Vtask_regenx_tb__DOT__host_op__285__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__286__ok;
    __Vtask_regenx_tb__DOT__chk__286__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__286__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__287__ok;
    __Vtask_regenx_tb__DOT__chk__287__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__287__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__288__ok;
    __Vtask_regenx_tb__DOT__chk__288__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__288__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__289__w;
    __Vtask_regenx_tb__DOT__host_op__289__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__289__a;
    __Vtask_regenx_tb__DOT__host_op__289__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__289__d;
    __Vtask_regenx_tb__DOT__host_op__289__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__289__guard;
    __Vtask_regenx_tb__DOT__host_op__289__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__290__ok;
    __Vtask_regenx_tb__DOT__chk__290__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__290__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__291__ok;
    __Vtask_regenx_tb__DOT__chk__291__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__291__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__293__slot;
    __Vtask_regenx_tb__DOT__set_fault__293__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__293__kind;
    __Vtask_regenx_tb__DOT__set_fault__293__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__293__row;
    __Vtask_regenx_tb__DOT__set_fault__293__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__293__bitn;
    __Vtask_regenx_tb__DOT__set_fault__293__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__294__slot;
    __Vtask_regenx_tb__DOT__late_fault__294__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__294__kind;
    __Vtask_regenx_tb__DOT__late_fault__294__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__294__row;
    __Vtask_regenx_tb__DOT__late_fault__294__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__294__bitn;
    __Vtask_regenx_tb__DOT__late_fault__294__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__294__kind2;
    __Vtask_regenx_tb__DOT__late_fault__294__kind2 = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__294__row2;
    __Vtask_regenx_tb__DOT__late_fault__294__row2 = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__294__g;
    __Vtask_regenx_tb__DOT__late_fault__294__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__295__cycles;
    __Vtask_regenx_tb__DOT__do_reset__295__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__296__n;
    __Vtask_regenx_tb__DOT__tick__296__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__297__n;
    __Vtask_regenx_tb__DOT__tick__297__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__298__slot;
    __Vtask_regenx_tb__DOT__set_fault__298__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__298__kind;
    __Vtask_regenx_tb__DOT__set_fault__298__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__298__row;
    __Vtask_regenx_tb__DOT__set_fault__298__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__298__bitn;
    __Vtask_regenx_tb__DOT__set_fault__298__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__299__slot;
    __Vtask_regenx_tb__DOT__set_fault__299__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__299__kind;
    __Vtask_regenx_tb__DOT__set_fault__299__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__299__row;
    __Vtask_regenx_tb__DOT__set_fault__299__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__299__bitn;
    __Vtask_regenx_tb__DOT__set_fault__299__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__300__n;
    __Vtask_regenx_tb__DOT__tick__300__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__301__ok;
    __Vtask_regenx_tb__DOT__chk__301__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__301__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__303__n;
    __Vtask_regenx_tb__DOT__tick__303__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__304__ok;
    __Vtask_regenx_tb__DOT__chk__304__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__304__what;
    // Body
    while (VL_LTS_III(32, vlSelf->__Vtask_regenx_tb__DOT__sweep__270__unnamedblk16__DOT__k, vlSelf->__Vtask_regenx_tb__DOT__sweep__270__rounds)) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 0",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 1",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 1U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 2",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 2U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 3",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 3U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 4",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 4U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 5",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 5U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 6",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 6U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 7",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 7U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 8",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 8U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__271__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 9",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 9U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__271__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 10",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xaU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__271__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 11",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xbU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__271__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 12",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xcU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__271__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 13",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xdU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__271__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 14",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xeU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__271__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__271__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__271__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__271__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__271__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__271__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
        }
        __Vtask_regenx_tb__DOT__chk__272__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__272__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__272__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__272__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__271__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__271__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__271__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__273__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__273__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__271__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__273__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__273__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        __Vtask_regenx_tb__DOT__chk__274__what = VL_SFORMATF_NX("%@: write err flag row 15",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
        __Vtask_regenx_tb__DOT__chk__274__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xfU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__274__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__274__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x8000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 15 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 15",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 15 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xfU]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x4000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 14 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 14",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 14 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xeU]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x2000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 13 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 13",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 13 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xdU]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x1000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 12 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 12",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 12 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xcU]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x800U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 11 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 11",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 11 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xbU]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x400U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 10 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 10",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 10 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xaU]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x200U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 9 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 9",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 9 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [9U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x100U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 8 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 8",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 8 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [8U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x80U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 7 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 7",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 7 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [7U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x40U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 6 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 6",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 6 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [6U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x20U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 5 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 5",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 5 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [5U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((0x10U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 4 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 4",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 4 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [4U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 3 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 3",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 3 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [3U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 2 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 2",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 2 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [2U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 1 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 1",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 1 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [1U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__275__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__275__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__275__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__275__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
        }
        __Vtask_regenx_tb__DOT__chk__276__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__276__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__276__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__276__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__275__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__275__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__275__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__277__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__277__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__275__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__277__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__277__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__278__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 0 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__278__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__278__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__278__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__279__what 
                = VL_SFORMATF_NX("%@: unexpected error row 0",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag)) ;
            __Vtask_regenx_tb__DOT__chk__279__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__279__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__279__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__280__what 
                = VL_SFORMATF_NX("%@: row 0 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0U]) ;
            __Vtask_regenx_tb__DOT__chk__280__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__280__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__280__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__281__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__281__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__281__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__281__what));
            }
        }
        vlSelf->__Vtask_regenx_tb__DOT__sweep__270__unnamedblk16__DOT__k 
            = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__sweep__270__unnamedblk16__DOT__k);
    }
    __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r = 0U;
    while (VL_GTS_III(32, 0x10U, __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r)) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                      >> (0xfU & __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r))))) {
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[0U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [0U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[0U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[1U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [1U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[1U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[2U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [2U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[2U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[3U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [3U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[3U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[4U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [4U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[4U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[5U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [5U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[5U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[6U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [6U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[6U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__282__d 
                = vlSelf->regenx_tb__DOT__pats[7U];
            __Vtask_regenx_tb__DOT__host_op__282__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__282__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__282__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__282__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__282__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
            }
            __Vtask_regenx_tb__DOT__chk__283__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__283__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__283__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__283__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__282__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__282__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__282__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__284__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__284__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__282__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__284__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__284__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__host_op__285__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__285__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__285__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__285__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__285__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
            }
            __Vtask_regenx_tb__DOT__chk__286__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__286__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__286__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__286__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__285__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__285__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__285__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__287__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__287__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__285__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__287__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__287__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            __Vtask_regenx_tb__DOT__chk__288__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__270__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [7U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__288__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[7U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__288__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__288__what));
                }
            }
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r)] = 0U;
            __Vtask_regenx_tb__DOT__host_op__289__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__289__a 
                = __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__289__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__289__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__289__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__289__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__289__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__289__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__289__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__289__guard);
            }
            __Vtask_regenx_tb__DOT__chk__290__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__290__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__289__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__290__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__290__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__289__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__289__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__289__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__289__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__291__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__291__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__289__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__291__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__291__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        }
        __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__270__unnamedblk19__DOT__r);
    }
    vlSelf->regenx_tb__DOT__f_en = 0U;
    vlSelf->regenx_tb__DOT__flt_kind_flat = 0U;
    vlSelf->regenx_tb__DOT__flt_row_flat = 0U;
    vlSelf->regenx_tb__DOT__flt_bit_flat = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
    vlSelf->regenx_tb__DOT__f_kind[0U] = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
    vlSelf->regenx_tb__DOT__f_row[0U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
    vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
    vlSelf->regenx_tb__DOT__f_bit[0U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
    vlSelf->regenx_tb__DOT__f_kind[1U] = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
    vlSelf->regenx_tb__DOT__f_row[1U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
    vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
    vlSelf->regenx_tb__DOT__f_bit[1U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
    vlSelf->regenx_tb__DOT__f_kind[2U] = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
    vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
    vlSelf->regenx_tb__DOT__f_row[2U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
    vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
    vlSelf->regenx_tb__DOT__f_bit[2U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
    __Vtask_regenx_tb__DOT__set_fault__293__bitn = 4U;
    __Vtask_regenx_tb__DOT__set_fault__293__row = 2U;
    __Vtask_regenx_tb__DOT__set_fault__293__kind = 1U;
    __Vtask_regenx_tb__DOT__set_fault__293__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__293__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__293__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__293__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__293__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__293__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__293__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__293__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__293__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__293__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__293__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__293__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__293__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__293__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__293__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__293__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__293__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__293__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__293__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__293__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__293__slot)))));
    }
    __Vtask_regenx_tb__DOT__late_fault__294__row2 = 0x11U;
    __Vtask_regenx_tb__DOT__late_fault__294__kind2 = 5U;
    __Vtask_regenx_tb__DOT__late_fault__294__bitn = 0U;
    __Vtask_regenx_tb__DOT__late_fault__294__row = 0x10U;
    __Vtask_regenx_tb__DOT__late_fault__294__kind = 6U;
    __Vtask_regenx_tb__DOT__late_fault__294__slot = 1U;
    __Vtask_regenx_tb__DOT__late_fault__294__g = 0U;
    __Vtask_regenx_tb__DOT__do_reset__295__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__296__n = __Vtask_regenx_tb__DOT__do_reset__295__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__296__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       161);
    vlSelf->regenx_tb__DOT__rst_n = 1U;
    while (((3U != (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_bist__DOT__state)) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_regenx_tb__DOT__late_fault__294__g))) {
        __Vtask_regenx_tb__DOT__tick__297__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__297__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__late_fault__294__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__294__g);
    }
    __Vtask_regenx_tb__DOT__set_fault__298__bitn = __Vtask_regenx_tb__DOT__late_fault__294__bitn;
    __Vtask_regenx_tb__DOT__set_fault__298__row = __Vtask_regenx_tb__DOT__late_fault__294__row;
    __Vtask_regenx_tb__DOT__set_fault__298__kind = __Vtask_regenx_tb__DOT__late_fault__294__kind;
    __Vtask_regenx_tb__DOT__set_fault__298__slot = __Vtask_regenx_tb__DOT__late_fault__294__slot;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__298__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__298__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__298__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__298__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__298__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__298__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__298__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__298__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__298__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__298__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__298__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__298__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__298__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__298__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__298__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__298__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__298__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__298__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__298__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__298__slot)))));
    }
    if ((0U != __Vtask_regenx_tb__DOT__late_fault__294__kind2)) {
        __Vtask_regenx_tb__DOT__set_fault__299__bitn = 0U;
        __Vtask_regenx_tb__DOT__set_fault__299__row 
            = __Vtask_regenx_tb__DOT__late_fault__294__row2;
        __Vtask_regenx_tb__DOT__set_fault__299__kind 
            = __Vtask_regenx_tb__DOT__late_fault__294__kind2;
        __Vtask_regenx_tb__DOT__set_fault__299__slot 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__294__slot);
        vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
        vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__299__kind);
        vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
            = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__299__row);
        vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__299__bitn);
        if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__299__slot))) {
            vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__299__slot))) 
                                             & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                            | (7U & 
                                               ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                << 
                                                (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__299__slot))));
            vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__299__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
            vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__299__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
            vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__299__slot)] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
        }
        vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__299__kind);
        vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
            = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__299__row);
        if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__299__slot))))) {
            vlSelf->regenx_tb__DOT__flt_row_flat = 
                (((~ ((IData)(0x1fU) << (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__299__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                 | (0x7fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                               << (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__299__slot)))));
        }
        vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
            = (0xfU & __Vtask_regenx_tb__DOT__set_fault__299__bitn);
        if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__299__slot)))) {
            vlSelf->regenx_tb__DOT__flt_kind_flat = 
                (((~ ((IData)(0xfU) << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__299__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                 | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                              << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__299__slot)))));
            vlSelf->regenx_tb__DOT__flt_bit_flat = 
                (((~ ((IData)(0xfU) << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__299__slot)))) 
                  & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                 | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                              << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__299__slot)))));
        }
    }
    __Vtask_regenx_tb__DOT__late_fault__294__g = 0U;
    while (((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_regenx_tb__DOT__late_fault__294__g))) {
        __Vtask_regenx_tb__DOT__tick__300__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__300__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__late_fault__294__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__294__g);
    }
    __Vtask_regenx_tb__DOT__chk__301__what = std::string{"late fault boot"};
    __Vtask_regenx_tb__DOT__chk__301__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__301__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__301__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__303__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__303__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__304__what = std::string{"row2 unavailable without ecc"};
    __Vtask_regenx_tb__DOT__chk__304__ok = (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                  >> 2U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__304__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__304__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__sweep__305__rounds = 1U;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__305__tag = 
        std::string{"rec3"};
    vlSelf->__Vtask_regenx_tb__DOT__sweep__305__unnamedblk16__DOT__k = 0U;
}
