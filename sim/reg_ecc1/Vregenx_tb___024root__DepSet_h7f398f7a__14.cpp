// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

void Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__20(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__20\n"); );
    // Body
    vlSelf->regenx_tb__DOT__phase = std::string{"bits"};
    vlSelf->__Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__k = 1U;
}

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__21(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__21\n"); );
    // Init
    CData/*0:0*/ regenx_tb__DOT__g_fix;
    regenx_tb__DOT__g_fix = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b;
    __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j;
    __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__909__slot;
    __Vtask_regenx_tb__DOT__set_fault__909__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__909__kind;
    __Vtask_regenx_tb__DOT__set_fault__909__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__909__row;
    __Vtask_regenx_tb__DOT__set_fault__909__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__909__bitn;
    __Vtask_regenx_tb__DOT__set_fault__909__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__910__guard;
    __Vtask_regenx_tb__DOT__boot__910__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__911__cycles;
    __Vtask_regenx_tb__DOT__do_reset__911__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__912__n;
    __Vtask_regenx_tb__DOT__tick__912__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__913__n;
    __Vtask_regenx_tb__DOT__tick__913__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__914__ok;
    __Vtask_regenx_tb__DOT__chk__914__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__914__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__916__n;
    __Vtask_regenx_tb__DOT__tick__916__n = 0;
    std::string __Vtask_regenx_tb__DOT__check_state__917__tag;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0;
    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1;
    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__917__nb;
    __Vtask_regenx_tb__DOT__check_state__917__nb = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__917__nr;
    __Vtask_regenx_tb__DOT__check_state__917__nr = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__917__na;
    __Vtask_regenx_tb__DOT__check_state__917__na = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__917__nu;
    __Vtask_regenx_tb__DOT__check_state__917__nu = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r;
    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b;
    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b = 0;
    VlUnpacked<SData/*12:0*/, 18> __Vtask_regenx_tb__DOT__model__918__bm;
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        __Vtask_regenx_tb__DOT__model__918__bm[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 2> __Vtask_regenx_tb__DOT__model__918__free_sp;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vtask_regenx_tb__DOT__model__918__free_sp[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_regenx_tb__DOT__model__918__v;
    __Vtask_regenx_tb__DOT__model__918__v = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout;
    __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout = 0;
    SData/*12:0*/ __Vfunc_regenx_tb__DOT__ones13__919__v;
    __Vfunc_regenx_tb__DOT__ones13__919__v = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__ones13__919__n;
    __Vfunc_regenx_tb__DOT__ones13__919__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__921__ok;
    __Vtask_regenx_tb__DOT__chk__921__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__921__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__922__ok;
    __Vtask_regenx_tb__DOT__chk__922__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__922__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__923__ok;
    __Vtask_regenx_tb__DOT__chk__923__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__923__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__924__ok;
    __Vtask_regenx_tb__DOT__chk__924__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__924__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__925__ok;
    __Vtask_regenx_tb__DOT__chk__925__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__925__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__926__ok;
    __Vtask_regenx_tb__DOT__chk__926__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__926__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__927__ok;
    __Vtask_regenx_tb__DOT__chk__927__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__927__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__928__ok;
    __Vtask_regenx_tb__DOT__chk__928__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__928__what;
    std::string __Vtask_regenx_tb__DOT__sweep__929__tag;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__929__rounds;
    __Vtask_regenx_tb__DOT__sweep__929__rounds = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__929__unnamedblk16__DOT__k;
    __Vtask_regenx_tb__DOT__sweep__929__unnamedblk16__DOT__k = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
    __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__930__w;
    __Vtask_regenx_tb__DOT__host_op__930__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__930__a;
    __Vtask_regenx_tb__DOT__host_op__930__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__930__d;
    __Vtask_regenx_tb__DOT__host_op__930__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__930__guard;
    __Vtask_regenx_tb__DOT__host_op__930__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__931__ok;
    __Vtask_regenx_tb__DOT__chk__931__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__931__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__932__ok;
    __Vtask_regenx_tb__DOT__chk__932__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__932__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__933__ok;
    __Vtask_regenx_tb__DOT__chk__933__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__933__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__934__w;
    __Vtask_regenx_tb__DOT__host_op__934__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__934__a;
    __Vtask_regenx_tb__DOT__host_op__934__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__934__d;
    __Vtask_regenx_tb__DOT__host_op__934__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__934__guard;
    __Vtask_regenx_tb__DOT__host_op__934__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__935__ok;
    __Vtask_regenx_tb__DOT__chk__935__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__935__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__936__ok;
    __Vtask_regenx_tb__DOT__chk__936__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__936__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__937__ok;
    __Vtask_regenx_tb__DOT__chk__937__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__937__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__938__ok;
    __Vtask_regenx_tb__DOT__chk__938__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__938__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__939__ok;
    __Vtask_regenx_tb__DOT__chk__939__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__939__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__940__ok;
    __Vtask_regenx_tb__DOT__chk__940__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__940__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__941__w;
    __Vtask_regenx_tb__DOT__host_op__941__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__941__a;
    __Vtask_regenx_tb__DOT__host_op__941__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__941__d;
    __Vtask_regenx_tb__DOT__host_op__941__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__941__guard;
    __Vtask_regenx_tb__DOT__host_op__941__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__942__ok;
    __Vtask_regenx_tb__DOT__chk__942__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__942__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__943__ok;
    __Vtask_regenx_tb__DOT__chk__943__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__943__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__944__w;
    __Vtask_regenx_tb__DOT__host_op__944__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__944__a;
    __Vtask_regenx_tb__DOT__host_op__944__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__944__d;
    __Vtask_regenx_tb__DOT__host_op__944__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__944__guard;
    __Vtask_regenx_tb__DOT__host_op__944__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__945__ok;
    __Vtask_regenx_tb__DOT__chk__945__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__945__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__946__ok;
    __Vtask_regenx_tb__DOT__chk__946__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__946__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__947__ok;
    __Vtask_regenx_tb__DOT__chk__947__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__947__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__948__w;
    __Vtask_regenx_tb__DOT__host_op__948__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__948__a;
    __Vtask_regenx_tb__DOT__host_op__948__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__948__d;
    __Vtask_regenx_tb__DOT__host_op__948__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__948__guard;
    __Vtask_regenx_tb__DOT__host_op__948__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__949__ok;
    __Vtask_regenx_tb__DOT__chk__949__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__949__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__950__ok;
    __Vtask_regenx_tb__DOT__chk__950__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__950__what;
    // Body
    while (VL_GTES_III(32, 4U, vlSelf->__Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__k)) {
        __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b = 0U;
        while (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b)) {
            __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j = 0U;
            while (VL_GTES_III(32, 2U, __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j)) {
                vlSelf->regenx_tb__DOT__f_en = 0U;
                vlSelf->regenx_tb__DOT__flt_kind_flat = 0U;
                vlSelf->regenx_tb__DOT__flt_row_flat = 0U;
                vlSelf->regenx_tb__DOT__flt_bit_flat = 0U;
                vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
                vlSelf->regenx_tb__DOT__f_kind[0U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
                vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
                vlSelf->regenx_tb__DOT__f_row[0U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
                vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
                vlSelf->regenx_tb__DOT__f_bit[0U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
                vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
                vlSelf->regenx_tb__DOT__f_kind[1U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
                vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
                vlSelf->regenx_tb__DOT__f_row[1U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
                vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
                vlSelf->regenx_tb__DOT__f_bit[1U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
                vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0 = 0U;
                vlSelf->regenx_tb__DOT__f_kind[2U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_hd35f8f14__0;
                vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0 = 0U;
                vlSelf->regenx_tb__DOT__f_row[2U] = vlSelf->regenx_tb__DOT____Vlvbound_hc0945d40__0;
                vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0 = 0U;
                vlSelf->regenx_tb__DOT__f_bit[2U] = vlSelf->regenx_tb__DOT____Vlvbound_he986f4b1__0;
                __Vtask_regenx_tb__DOT__set_fault__909__bitn 
                    = __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b;
                __Vtask_regenx_tb__DOT__set_fault__909__row 
                    = ((2U >= (3U & __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j))
                        ? vlSelf->regenx_tb__DOT__rows_b
                       [(3U & __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j)]
                        : 0U);
                __Vtask_regenx_tb__DOT__set_fault__909__kind 
                    = vlSelf->__Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__k;
                __Vtask_regenx_tb__DOT__set_fault__909__slot = 0U;
                vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
                vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
                    = (0xfU & __Vtask_regenx_tb__DOT__set_fault__909__kind);
                vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
                    = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__909__row);
                vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
                    = (0xfU & __Vtask_regenx_tb__DOT__set_fault__909__bitn);
                if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__909__slot))) {
                    vlSelf->regenx_tb__DOT__f_en = 
                        (((~ ((IData)(1U) << (3U & __Vtask_regenx_tb__DOT__set_fault__909__slot))) 
                          & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                         | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                  << (3U & __Vtask_regenx_tb__DOT__set_fault__909__slot))));
                    vlSelf->regenx_tb__DOT__f_kind[(3U 
                                                    & __Vtask_regenx_tb__DOT__set_fault__909__slot)] 
                        = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
                    vlSelf->regenx_tb__DOT__f_row[(3U 
                                                   & __Vtask_regenx_tb__DOT__set_fault__909__slot)] 
                        = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
                    vlSelf->regenx_tb__DOT__f_bit[(3U 
                                                   & __Vtask_regenx_tb__DOT__set_fault__909__slot)] 
                        = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
                }
                vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
                    = (0xfU & __Vtask_regenx_tb__DOT__set_fault__909__kind);
                vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
                    = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__909__row);
                if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__909__slot))))) {
                    vlSelf->regenx_tb__DOT__flt_row_flat 
                        = (((~ ((IData)(0x1fU) << (0xfU 
                                                   & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__909__slot)))) 
                            & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                           | (0x7fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                         << (0xfU & 
                                             VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__909__slot)))));
                }
                vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
                    = (0xfU & __Vtask_regenx_tb__DOT__set_fault__909__bitn);
                if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__909__slot)))) {
                    vlSelf->regenx_tb__DOT__flt_kind_flat 
                        = (((~ ((IData)(0xfU) << (0xfU 
                                                  & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__909__slot)))) 
                            & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                           | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                        << (0xfU & 
                                            VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__909__slot)))));
                    vlSelf->regenx_tb__DOT__flt_bit_flat 
                        = (((~ ((IData)(0xfU) << (0xfU 
                                                  & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__909__slot)))) 
                            & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                           | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                        << (0xfU & 
                                            VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__909__slot)))));
                }
                __Vtask_regenx_tb__DOT__boot__910__guard = 0U;
                __Vtask_regenx_tb__DOT__do_reset__911__cycles = 4U;
                vlSelf->regenx_tb__DOT__rst_n = 0U;
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                vlSelf->regenx_tb__DOT__scrub_en = 0U;
                vlSelf->regenx_tb__DOT__scrub_req = 0U;
                __Vtask_regenx_tb__DOT__tick__912__n 
                    = __Vtask_regenx_tb__DOT__do_reset__911__cycles;
                vlSelf->regenx_tb__DOT____Vrepeat0 
                    = __Vtask_regenx_tb__DOT__tick__912__n;
                while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       138);
                    vlSelf->regenx_tb__DOT____Vrepeat0 
                        = (vlSelf->regenx_tb__DOT____Vrepeat0 
                           - (IData)(1U));
                }
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   161);
                vlSelf->regenx_tb__DOT__rst_n = 1U;
                vlSelf->regenx_tb__DOT__boots = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__boots);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
                        & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__910__guard))) {
                    __Vtask_regenx_tb__DOT__tick__913__n = 1U;
                    vlSelf->regenx_tb__DOT____Vrepeat0 
                        = __Vtask_regenx_tb__DOT__tick__913__n;
                    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           138);
                        vlSelf->regenx_tb__DOT____Vrepeat0 
                            = (vlSelf->regenx_tb__DOT____Vrepeat0 
                               - (IData)(1U));
                    }
                    __Vtask_regenx_tb__DOT__boot__910__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__910__guard);
                }
                __Vtask_regenx_tb__DOT__chk__914__what = 
                    std::string{"init_done never came"};
                __Vtask_regenx_tb__DOT__chk__914__ok 
                    = vlSelf->regenx_tb__DOT__init_done;
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__914__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__914__what));
                    }
                }
                __Vtask_regenx_tb__DOT__tick__916__n = 0x14U;
                vlSelf->regenx_tb__DOT____Vrepeat0 
                    = __Vtask_regenx_tb__DOT__tick__916__n;
                while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       138);
                    vlSelf->regenx_tb__DOT____Vrepeat0 
                        = (vlSelf->regenx_tb__DOT____Vrepeat0 
                           - (IData)(1U));
                }
                __Vtask_regenx_tb__DOT__check_state__917__tag 
                    = VL_SFORMATF_NX("kind%0d row%0d bit%0d",
                                     32,vlSelf->__Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__k,
                                     32,((2U >= (3U 
                                                 & __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j))
                                          ? vlSelf->regenx_tb__DOT__rows_b
                                         [(3U & __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j)]
                                          : 0U),32,
                                     __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b) ;
                __Vtask_regenx_tb__DOT__check_state__917__nb = 0U;
                __Vtask_regenx_tb__DOT__check_state__917__nr = 0U;
                __Vtask_regenx_tb__DOT__check_state__917__na = 0U;
                __Vtask_regenx_tb__DOT__check_state__917__nu = 0U;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[1U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[1U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[2U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[2U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[3U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[3U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[4U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[4U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[5U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[5U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[6U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[6U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[7U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[7U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[8U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[8U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[9U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[9U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0xaU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0xaU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0xbU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0xbU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0xcU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0xcU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0xdU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0xdU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0xeU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0xeU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0xfU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0xfU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0x10U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0x10U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
                vlSelf->regenx_tb__DOT__e_bad[0x11U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
                __Vtask_regenx_tb__DOT__model__918__bm[0x11U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r 
                        = vlSelf->regenx_tb__DOT__f_row
                        [0U];
                    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b 
                        = vlSelf->regenx_tb__DOT__f_bit
                        [0U];
                    if ((8U & vlSelf->regenx_tb__DOT__f_kind
                         [0U])) {
                        if ((1U & (~ (vlSelf->regenx_tb__DOT__f_kind
                                      [0U] >> 2U)))) {
                            if ((1U & (~ (vlSelf->regenx_tb__DOT__f_kind
                                          [0U] >> 1U)))) {
                                if ((1U & (~ vlSelf->regenx_tb__DOT__f_kind
                                           [0U]))) {
                                    if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                                        if (VL_LIKELY(
                                                      (0x11U 
                                                       >= 
                                                       (0x1fU 
                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                           & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                                        }
                                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                                        if (VL_LIKELY(
                                                      ((0xcU 
                                                        >= 
                                                        (0xfU 
                                                         & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                                       && (0x11U 
                                                           >= 
                                                           (0x1fU 
                                                            & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                            __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                                = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                                    & __Vtask_regenx_tb__DOT__model__918__bm
                                                    [
                                                    (0x1fU 
                                                     & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                                   | (0x1fffU 
                                                      & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                         << 
                                                         (0xfU 
                                                          & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & vlSelf->regenx_tb__DOT__f_kind
                                [0U])) {
                        if ((2U & vlSelf->regenx_tb__DOT__f_kind
                             [0U])) {
                            if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                 [0U])) {
                                __Vtask_regenx_tb__DOT__model__918__v 
                                    = ((0x11U == __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)
                                        ? 0U : ((IData)(1U) 
                                                + __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r));
                                vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0 = 1U;
                                vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0 = 0x1fffU;
                                if ((0x11U >= (0x1fU 
                                               & __Vtask_regenx_tb__DOT__model__918__v))) {
                                    vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                   & __Vtask_regenx_tb__DOT__model__918__v)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0;
                                    __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                            & __Vtask_regenx_tb__DOT__model__918__v)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0;
                                }
                            } else {
                                vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                                vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                                if ((0x11U >= (0x1fU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                    vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                    __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                            & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                                }
                            }
                        } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                    [0U])) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                            }
                        } else if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    } else if ((2U & vlSelf->regenx_tb__DOT__f_kind
                                [0U])) {
                        if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                [0U])) {
                        if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    }
                }
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r 
                        = vlSelf->regenx_tb__DOT__f_row
                        [1U];
                    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b 
                        = vlSelf->regenx_tb__DOT__f_bit
                        [1U];
                    if ((8U & vlSelf->regenx_tb__DOT__f_kind
                         [1U])) {
                        if ((1U & (~ (vlSelf->regenx_tb__DOT__f_kind
                                      [1U] >> 2U)))) {
                            if ((1U & (~ (vlSelf->regenx_tb__DOT__f_kind
                                          [1U] >> 1U)))) {
                                if ((1U & (~ vlSelf->regenx_tb__DOT__f_kind
                                           [1U]))) {
                                    if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                                        if (VL_LIKELY(
                                                      (0x11U 
                                                       >= 
                                                       (0x1fU 
                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                           & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                                        }
                                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                                        if (VL_LIKELY(
                                                      ((0xcU 
                                                        >= 
                                                        (0xfU 
                                                         & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                                       && (0x11U 
                                                           >= 
                                                           (0x1fU 
                                                            & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                            __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                                = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                                    & __Vtask_regenx_tb__DOT__model__918__bm
                                                    [
                                                    (0x1fU 
                                                     & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                                   | (0x1fffU 
                                                      & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                         << 
                                                         (0xfU 
                                                          & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & vlSelf->regenx_tb__DOT__f_kind
                                [1U])) {
                        if ((2U & vlSelf->regenx_tb__DOT__f_kind
                             [1U])) {
                            if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                 [1U])) {
                                __Vtask_regenx_tb__DOT__model__918__v 
                                    = ((0x11U == __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)
                                        ? 0U : ((IData)(1U) 
                                                + __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r));
                                vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0 = 1U;
                                vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0 = 0x1fffU;
                                if ((0x11U >= (0x1fU 
                                               & __Vtask_regenx_tb__DOT__model__918__v))) {
                                    vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                   & __Vtask_regenx_tb__DOT__model__918__v)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0;
                                    __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                            & __Vtask_regenx_tb__DOT__model__918__v)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0;
                                }
                            } else {
                                vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                                vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                                if ((0x11U >= (0x1fU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                    vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                    __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                            & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                                }
                            }
                        } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                    [1U])) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                            }
                        } else if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    } else if ((2U & vlSelf->regenx_tb__DOT__f_kind
                                [1U])) {
                        if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                [1U])) {
                        if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r 
                        = vlSelf->regenx_tb__DOT__f_row
                        [2U];
                    __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b 
                        = vlSelf->regenx_tb__DOT__f_bit
                        [2U];
                    if ((8U & vlSelf->regenx_tb__DOT__f_kind
                         [2U])) {
                        if ((1U & (~ (vlSelf->regenx_tb__DOT__f_kind
                                      [2U] >> 2U)))) {
                            if ((1U & (~ (vlSelf->regenx_tb__DOT__f_kind
                                          [2U] >> 1U)))) {
                                if ((1U & (~ vlSelf->regenx_tb__DOT__f_kind
                                           [2U]))) {
                                    if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                                        if (VL_LIKELY(
                                                      (0x11U 
                                                       >= 
                                                       (0x1fU 
                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                           & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                                        }
                                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                                        if (VL_LIKELY(
                                                      ((0xcU 
                                                        >= 
                                                        (0xfU 
                                                         & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                                       && (0x11U 
                                                           >= 
                                                           (0x1fU 
                                                            & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                            __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                                = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                                    & __Vtask_regenx_tb__DOT__model__918__bm
                                                    [
                                                    (0x1fU 
                                                     & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                                   | (0x1fffU 
                                                      & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                         << 
                                                         (0xfU 
                                                          & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & vlSelf->regenx_tb__DOT__f_kind
                                [2U])) {
                        if ((2U & vlSelf->regenx_tb__DOT__f_kind
                             [2U])) {
                            if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                 [2U])) {
                                __Vtask_regenx_tb__DOT__model__918__v 
                                    = ((0x11U == __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)
                                        ? 0U : ((IData)(1U) 
                                                + __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r));
                                vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0 = 1U;
                                vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0 = 0x1fffU;
                                if ((0x11U >= (0x1fU 
                                               & __Vtask_regenx_tb__DOT__model__918__v))) {
                                    vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                   & __Vtask_regenx_tb__DOT__model__918__v)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0;
                                    __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                            & __Vtask_regenx_tb__DOT__model__918__v)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0;
                                }
                            } else {
                                vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                                vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                                if ((0x11U >= (0x1fU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                    vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                    __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                            & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                        = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                                }
                            }
                        } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                    [2U])) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                            }
                        } else if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    } else if ((2U & vlSelf->regenx_tb__DOT__f_kind
                                [2U])) {
                        if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                [2U])) {
                        if (VL_GTS_III(32, 0xdU, __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                            if (VL_LIKELY((0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                            }
                            vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                            if (VL_LIKELY(((0xcU >= 
                                            (0xfU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                           && (0x11U 
                                               >= (0x1fU 
                                                   & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                __Vtask_regenx_tb__DOT__model__918__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = (((~ ((IData)(1U) 
                                            << (0xfU 
                                                & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                        & __Vtask_regenx_tb__DOT__model__918__bm
                                        [(0x1fU & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                       | (0x1fffU & 
                                          ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                           << (0xfU 
                                               & __Vtask_regenx_tb__DOT__model__918__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                            }
                        }
                    }
                }
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [1U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [1U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[1U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [2U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [2U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[2U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [3U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [3U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[3U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [4U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [4U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[4U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [5U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [5U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[5U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [6U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [6U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[6U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [7U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [7U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[7U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [8U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [8U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[8U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [9U] & VL_LTS_III(32, 1U, ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [9U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[9U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0xaU] & VL_LTS_III(32, 1U, 
                                           ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0xaU];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0xaU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0xbU] & VL_LTS_III(32, 1U, 
                                           ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0xbU];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0xbU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0xcU] & VL_LTS_III(32, 1U, 
                                           ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0xcU];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0xcU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0xdU] & VL_LTS_III(32, 1U, 
                                           ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0xdU];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0xdU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0xeU] & VL_LTS_III(32, 1U, 
                                           ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0xeU];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0xeU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0xfU] & VL_LTS_III(32, 1U, 
                                           ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0xfU];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0xfU] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0x10U] & VL_LTS_III(32, 1U, 
                                            ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0x10U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                vlSelf->regenx_tb__DOT__e_sev[0x10U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                    = (vlSelf->regenx_tb__DOT__e_bad
                       [0x11U] & VL_LTS_III(32, 1U, 
                                            ([&]() {
                                __Vfunc_regenx_tb__DOT__ones13__919__v 
                                    = __Vtask_regenx_tb__DOT__model__918__bm
                                    [0x11U];
                                __Vfunc_regenx_tb__DOT__ones13__919__n = 0U;
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & (IData)(__Vfunc_regenx_tb__DOT__ones13__919__v)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 1U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 2U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 3U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 4U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 5U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 6U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 7U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 8U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 9U)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xaU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xbU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__n 
                                    = (__Vfunc_regenx_tb__DOT__ones13__919__n 
                                       + (1U & ((IData)(__Vfunc_regenx_tb__DOT__ones13__919__v) 
                                                >> 0xcU)));
                                __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout 
                                    = __Vfunc_regenx_tb__DOT__ones13__919__n;
                            }(), __Vfunc_regenx_tb__DOT__ones13__919__Vfuncout)));
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                    vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0 
                        = ((IData)(1U) + ((8U >= vlSelf->regenx_tb__DOT__f_kind
                                           [0U]) ? 
                                          vlSelf->regenx_tb__DOT__cov_kind
                                          [vlSelf->regenx_tb__DOT__f_kind
                                          [0U]] : 0U));
                    if (VL_LIKELY((8U >= vlSelf->regenx_tb__DOT__f_kind
                                   [0U]))) {
                        vlSelf->regenx_tb__DOT__cov_kind[vlSelf->regenx_tb__DOT__f_kind[0U]] 
                            = vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0;
                    }
                }
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                    vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0 
                        = ((IData)(1U) + ((8U >= vlSelf->regenx_tb__DOT__f_kind
                                           [1U]) ? 
                                          vlSelf->regenx_tb__DOT__cov_kind
                                          [vlSelf->regenx_tb__DOT__f_kind
                                          [1U]] : 0U));
                    if (VL_LIKELY((8U >= vlSelf->regenx_tb__DOT__f_kind
                                   [1U]))) {
                        vlSelf->regenx_tb__DOT__cov_kind[vlSelf->regenx_tb__DOT__f_kind[1U]] 
                            = vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0;
                    }
                }
                if ((4U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                    vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0 
                        = ((IData)(1U) + ((8U >= vlSelf->regenx_tb__DOT__f_kind
                                           [2U]) ? 
                                          vlSelf->regenx_tb__DOT__cov_kind
                                          [vlSelf->regenx_tb__DOT__f_kind
                                          [2U]] : 0U));
                    if (VL_LIKELY((8U >= vlSelf->regenx_tb__DOT__f_kind
                                   [2U]))) {
                        vlSelf->regenx_tb__DOT__cov_kind[vlSelf->regenx_tb__DOT__f_kind[2U]] 
                            = vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0;
                    }
                }
                vlSelf->regenx_tb__DOT__e_sev[0x11U] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
                vlSelf->regenx_tb__DOT__e_map[0U] = 0U;
                vlSelf->regenx_tb__DOT__e_rem[0U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[0U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[0U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[1U] = 1U;
                vlSelf->regenx_tb__DOT__e_rem[1U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[1U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[1U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[2U] = 2U;
                vlSelf->regenx_tb__DOT__e_rem[2U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[2U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[2U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[3U] = 3U;
                vlSelf->regenx_tb__DOT__e_rem[3U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[3U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[3U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[4U] = 4U;
                vlSelf->regenx_tb__DOT__e_rem[4U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[4U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[4U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[5U] = 5U;
                vlSelf->regenx_tb__DOT__e_rem[5U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[5U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[5U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[6U] = 6U;
                vlSelf->regenx_tb__DOT__e_rem[6U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[6U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[6U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[7U] = 7U;
                vlSelf->regenx_tb__DOT__e_rem[7U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[7U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[7U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[8U] = 8U;
                vlSelf->regenx_tb__DOT__e_rem[8U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[8U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[8U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[9U] = 9U;
                vlSelf->regenx_tb__DOT__e_rem[9U] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[9U] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[9U] = 0U;
                vlSelf->regenx_tb__DOT__e_map[0xaU] = 0xaU;
                vlSelf->regenx_tb__DOT__e_rem[0xaU] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[0xaU] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[0xaU] = 0U;
                vlSelf->regenx_tb__DOT__e_map[0xbU] = 0xbU;
                vlSelf->regenx_tb__DOT__e_rem[0xbU] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[0xbU] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[0xbU] = 0U;
                vlSelf->regenx_tb__DOT__e_map[0xcU] = 0xcU;
                vlSelf->regenx_tb__DOT__e_rem[0xcU] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[0xcU] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[0xcU] = 0U;
                vlSelf->regenx_tb__DOT__e_map[0xdU] = 0xdU;
                vlSelf->regenx_tb__DOT__e_rem[0xdU] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[0xdU] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[0xdU] = 0U;
                vlSelf->regenx_tb__DOT__e_map[0xeU] = 0xeU;
                vlSelf->regenx_tb__DOT__e_rem[0xeU] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[0xeU] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[0xeU] = 0U;
                vlSelf->regenx_tb__DOT__e_map[0xfU] = 0xfU;
                vlSelf->regenx_tb__DOT__e_rem[0xfU] = 0U;
                vlSelf->regenx_tb__DOT__e_asst[0xfU] = 0U;
                vlSelf->regenx_tb__DOT__e_unav[0xfU] = 0U;
                __Vtask_regenx_tb__DOT__model__918__free_sp[0U] 
                    = (1U & (~ vlSelf->regenx_tb__DOT__e_bad
                             [0x10U]));
                __Vtask_regenx_tb__DOT__model__918__free_sp[1U] 
                    = (1U & (~ vlSelf->regenx_tb__DOT__e_bad
                             [0x11U]));
                if ((vlSelf->regenx_tb__DOT__e_bad[0U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [0U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[0U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[1U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [1U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[1U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[1U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[1U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[2U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [2U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[2U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[2U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[2U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[3U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [3U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[3U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[3U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[3U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[4U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [4U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[4U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[4U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[4U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[5U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [5U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[5U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[5U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[5U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[6U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [6U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[6U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[6U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[6U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[7U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [7U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[7U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[7U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[7U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[8U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [8U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[8U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[8U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[8U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[9U] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [9U])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[9U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[9U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[9U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xaU] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [0xaU])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[0xaU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xbU] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [0xbU])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[0xbU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xcU] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [0xcU])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[0xcU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xdU] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [0xdU])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[0xdU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xeU] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [0xeU])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[0xeU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xfU] 
                     & vlSelf->regenx_tb__DOT__e_sev
                     [0xfU])) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_unav[0xfU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [0U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[0U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[1U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [1U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[1U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[1U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[1U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[2U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [2U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[2U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[2U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[2U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[3U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [3U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[3U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[3U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[3U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[4U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [4U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[4U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[4U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[4U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[5U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [5U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[5U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[5U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[5U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[6U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [6U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[6U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[6U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[6U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[7U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [7U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[7U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[7U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[7U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[8U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [8U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[8U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[8U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[8U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[9U] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [9U]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[9U] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[9U] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[9U] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xaU] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [0xaU]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[0xaU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xbU] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [0xbU]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[0xbU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xcU] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [0xcU]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[0xcU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xdU] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [0xdU]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[0xdU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xeU] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [0xeU]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[0xeU] = 1U;
                    }
                }
                if ((vlSelf->regenx_tb__DOT__e_bad[0xfU] 
                     & (~ vlSelf->regenx_tb__DOT__e_sev
                        [0xfU]))) {
                    if (__Vtask_regenx_tb__DOT__model__918__free_sp
                        [0U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[0U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x10U;
                        vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
                    } else if (__Vtask_regenx_tb__DOT__model__918__free_sp
                               [1U]) {
                        __Vtask_regenx_tb__DOT__model__918__free_sp[1U] = 0U;
                        vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x11U;
                        vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
                    } else {
                        vlSelf->regenx_tb__DOT__e_asst[0xfU] = 1U;
                    }
                }
                if ((0U == (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                    vlSelf->regenx_tb__DOT__cov_out[0U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [0U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[0U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[0U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[0U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[1U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[1U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[1U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[2U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[2U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[2U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[3U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[3U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[3U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[4U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[4U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[4U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[5U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[5U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[5U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[6U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[6U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[6U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[7U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[7U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[7U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[8U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[8U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[8U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[9U]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[9U]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[9U]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[0xaU]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[0xaU]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[0xaU]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[0xbU]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[0xbU]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[0xbU]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[0xcU]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[0xcU]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[0xcU]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[0xdU]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[0xdU]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[0xdU]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[0xeU]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[0xeU]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[0xeU]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                if (vlSelf->regenx_tb__DOT__e_rem[0xfU]) {
                    vlSelf->regenx_tb__DOT__cov_out[1U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [1U]);
                }
                if (vlSelf->regenx_tb__DOT__e_asst[0xfU]) {
                    vlSelf->regenx_tb__DOT__cov_out[2U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [2U]);
                }
                if (vlSelf->regenx_tb__DOT__e_unav[0xfU]) {
                    vlSelf->regenx_tb__DOT__cov_out[3U] 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__cov_out
                           [3U]);
                }
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[0] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys) 
                       == vlSelf->regenx_tb__DOT__e_bad
                       [0U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[1] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 1U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [1U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 1U)) == vlSelf->regenx_tb__DOT__e_bad
                       [1U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [1U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[2] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 2U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [2U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 2U)) == vlSelf->regenx_tb__DOT__e_bad
                       [2U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [2U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[3] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 3U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [3U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 3U)) == vlSelf->regenx_tb__DOT__e_bad
                       [3U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [3U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[4] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 4U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [4U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 4U)) == vlSelf->regenx_tb__DOT__e_bad
                       [4U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [4U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[5] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 5U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [5U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 5U)) == vlSelf->regenx_tb__DOT__e_bad
                       [5U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [5U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[6] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 6U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [6U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 6U)) == vlSelf->regenx_tb__DOT__e_bad
                       [6U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [6U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[7] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 7U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [7U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 7U)) == vlSelf->regenx_tb__DOT__e_bad
                       [7U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [7U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[8] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 8U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [8U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 8U)) == vlSelf->regenx_tb__DOT__e_bad
                       [8U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [8U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[9] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 9U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [9U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 9U)) == vlSelf->regenx_tb__DOT__e_bad
                       [9U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [9U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[10] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0xaU)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0xaU]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0xaU)) == vlSelf->regenx_tb__DOT__e_bad
                       [0xaU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0xaU]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[11] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0xbU)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0xbU]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0xbU)) == vlSelf->regenx_tb__DOT__e_bad
                       [0xbU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0xbU]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[12] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0xcU)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0xcU]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0xcU)) == vlSelf->regenx_tb__DOT__e_bad
                       [0xcU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0xcU]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[13] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0xdU)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0xdU]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0xdU)) == vlSelf->regenx_tb__DOT__e_bad
                       [0xdU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0xdU]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[14] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0xeU)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0xeU]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0xeU)) == vlSelf->regenx_tb__DOT__e_bad
                       [0xeU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0xeU]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[15] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0xfU)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0xfU]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0xfU)) == vlSelf->regenx_tb__DOT__e_bad
                       [0xfU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0xfU]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[16] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0x10U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0x10U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0x10U)) == vlSelf->regenx_tb__DOT__e_bad
                       [0x10U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0x10U]);
                __Vtask_regenx_tb__DOT__chk__921__what 
                    = VL_SFORMATF_NX("%@: bad_phys[17] dut=%b exp=%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                              >> 0x11U)),
                                     1,vlSelf->regenx_tb__DOT__e_bad
                                     [0x11U]) ;
                __Vtask_regenx_tb__DOT__chk__921__ok 
                    = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                              >> 0x11U)) == vlSelf->regenx_tb__DOT__e_bad
                       [0x11U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__921__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__921__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nb 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nb 
                       + vlSelf->regenx_tb__DOT__e_bad
                       [0x11U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[0] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [0U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                       == vlSelf->regenx_tb__DOT__e_map
                       [0U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[0]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                       == vlSelf->regenx_tb__DOT__e_unav
                       [0U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[0]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist)) 
                       == vlSelf->regenx_tb__DOT__e_asst
                       [0U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [0U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [0U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [0U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[1] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                 >> 5U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [1U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                 >> 5U)) == vlSelf->regenx_tb__DOT__e_map
                       [1U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[1]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 1U)) == vlSelf->regenx_tb__DOT__e_unav
                       [1U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[1]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 1U)) == vlSelf->regenx_tb__DOT__e_asst
                       [1U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [1U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [1U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [1U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[2] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                 >> 0xaU)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [2U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                 >> 0xaU)) == vlSelf->regenx_tb__DOT__e_map
                       [2U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[2]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 2U)) == vlSelf->regenx_tb__DOT__e_unav
                       [2U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[2]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 2U)) == vlSelf->regenx_tb__DOT__e_asst
                       [2U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [2U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [2U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [2U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[3] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                 >> 0xfU)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [3U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                 >> 0xfU)) == vlSelf->regenx_tb__DOT__e_map
                       [3U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[3]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 3U)) == vlSelf->regenx_tb__DOT__e_unav
                       [3U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[3]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 3U)) == vlSelf->regenx_tb__DOT__e_asst
                       [3U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [3U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [3U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [3U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[4] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                 >> 0x14U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [4U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                 >> 0x14U)) == vlSelf->regenx_tb__DOT__e_map
                       [4U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[4]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 4U)) == vlSelf->regenx_tb__DOT__e_unav
                       [4U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[4]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 4U)) == vlSelf->regenx_tb__DOT__e_asst
                       [4U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [4U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [4U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [4U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[5] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                 >> 0x19U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [5U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                 >> 0x19U)) == vlSelf->regenx_tb__DOT__e_map
                       [5U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[5]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 5U)) == vlSelf->regenx_tb__DOT__e_unav
                       [5U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[5]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 5U)) == vlSelf->regenx_tb__DOT__e_asst
                       [5U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [5U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [5U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [5U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[6] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                  << 2U) 
                                                 | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                    >> 0x1eU))),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [6U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                  << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                            >> 0x1eU))) 
                       == vlSelf->regenx_tb__DOT__e_map
                       [6U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[6]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 6U)) == vlSelf->regenx_tb__DOT__e_unav
                       [6U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[6]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 6U)) == vlSelf->regenx_tb__DOT__e_asst
                       [6U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [6U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [6U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [6U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[7] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 >> 3U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [7U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                 >> 3U)) == vlSelf->regenx_tb__DOT__e_map
                       [7U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[7]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 7U)) == vlSelf->regenx_tb__DOT__e_unav
                       [7U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[7]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 7U)) == vlSelf->regenx_tb__DOT__e_asst
                       [7U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [7U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [7U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [7U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[8] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 >> 8U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [8U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                 >> 8U)) == vlSelf->regenx_tb__DOT__e_map
                       [8U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[8]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 8U)) == vlSelf->regenx_tb__DOT__e_unav
                       [8U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[8]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 8U)) == vlSelf->regenx_tb__DOT__e_asst
                       [8U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [8U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [8U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [8U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[9] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 >> 0xdU)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [9U]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                 >> 0xdU)) == vlSelf->regenx_tb__DOT__e_map
                       [9U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[9]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 9U)) == vlSelf->regenx_tb__DOT__e_unav
                       [9U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[9]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 9U)) == vlSelf->regenx_tb__DOT__e_asst
                       [9U]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [9U]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [9U]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [9U]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[10] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 >> 0x12U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [0xaU]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                 >> 0x12U)) == vlSelf->regenx_tb__DOT__e_map
                       [0xaU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[10]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 0xaU)) == vlSelf->regenx_tb__DOT__e_unav
                       [0xaU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[10]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 0xaU)) == vlSelf->regenx_tb__DOT__e_asst
                       [0xaU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [0xaU]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [0xaU]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [0xaU]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[11] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 >> 0x17U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [0xbU]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                 >> 0x17U)) == vlSelf->regenx_tb__DOT__e_map
                       [0xbU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[11]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 0xbU)) == vlSelf->regenx_tb__DOT__e_unav
                       [0xbU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[11]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 0xbU)) == vlSelf->regenx_tb__DOT__e_asst
                       [0xbU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [0xbU]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [0xbU]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [0xbU]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[12] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                  << 4U) 
                                                 | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                    >> 0x1cU))),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [0xcU]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                  << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                            >> 0x1cU))) 
                       == vlSelf->regenx_tb__DOT__e_map
                       [0xcU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[12]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 0xcU)) == vlSelf->regenx_tb__DOT__e_unav
                       [0xcU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[12]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 0xcU)) == vlSelf->regenx_tb__DOT__e_asst
                       [0xcU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [0xcU]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [0xcU]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [0xcU]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[13] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                 >> 1U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [0xdU]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                 >> 1U)) == vlSelf->regenx_tb__DOT__e_map
                       [0xdU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[13]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 0xdU)) == vlSelf->regenx_tb__DOT__e_unav
                       [0xdU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[13]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 0xdU)) == vlSelf->regenx_tb__DOT__e_asst
                       [0xdU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [0xdU]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [0xdU]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [0xdU]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[14] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                 >> 6U)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [0xeU]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                 >> 6U)) == vlSelf->regenx_tb__DOT__e_map
                       [0xeU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[14]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 0xeU)) == vlSelf->regenx_tb__DOT__e_unav
                       [0xeU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[14]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 0xeU)) == vlSelf->regenx_tb__DOT__e_asst
                       [0xeU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [0xeU]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [0xeU]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [0xeU]);
                __Vtask_regenx_tb__DOT__chk__922__what 
                    = VL_SFORMATF_NX("%@: map[15] dut=%0# exp=%0#",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                 >> 0xbU)),
                                     5,vlSelf->regenx_tb__DOT__e_map
                                     [0xfU]) ;
                __Vtask_regenx_tb__DOT__chk__922__ok 
                    = ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                 >> 0xbU)) == vlSelf->regenx_tb__DOT__e_map
                       [0xfU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__922__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__922__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__923__what 
                    = VL_SFORMATF_NX("%@: unavail[15]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__923__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> 0xfU)) == vlSelf->regenx_tb__DOT__e_unav
                       [0xfU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__923__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__923__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__924__what 
                    = VL_SFORMATF_NX("%@: assist[15]",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__924__ok 
                    = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                              >> 0xfU)) == vlSelf->regenx_tb__DOT__e_asst
                       [0xfU]);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__924__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__924__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__nr 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nr 
                       + vlSelf->regenx_tb__DOT__e_rem
                       [0xfU]);
                __Vtask_regenx_tb__DOT__check_state__917__na 
                    = (__Vtask_regenx_tb__DOT__check_state__917__na 
                       + vlSelf->regenx_tb__DOT__e_asst
                       [0xfU]);
                __Vtask_regenx_tb__DOT__check_state__917__nu 
                    = (__Vtask_regenx_tb__DOT__check_state__917__nu 
                       + vlSelf->regenx_tb__DOT__e_unav
                       [0xfU]);
                __Vtask_regenx_tb__DOT__chk__925__what 
                    = VL_SFORMATF_NX("%@: fault_count %0# exp %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     6,(IData)(vlSelf->regenx_tb__DOT__fault_count),
                                     32,__Vtask_regenx_tb__DOT__check_state__917__nb) ;
                __Vtask_regenx_tb__DOT__chk__925__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__fault_count) 
                       == __Vtask_regenx_tb__DOT__check_state__917__nb);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__925__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__925__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__926__what 
                    = VL_SFORMATF_NX("%@: remapped_count %0# exp %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     5,(IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt),
                                     32,__Vtask_regenx_tb__DOT__check_state__917__nr) ;
                __Vtask_regenx_tb__DOT__chk__926__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                       == __Vtask_regenx_tb__DOT__check_state__917__nr);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__926__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__926__what));
                    }
                }
                __Vtask_regenx_tb__DOT__chk__927__what 
                    = VL_SFORMATF_NX("%@: degraded flag",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag)) ;
                __Vtask_regenx_tb__DOT__chk__927__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__degraded) 
                       == (0U != (__Vtask_regenx_tb__DOT__check_state__917__na 
                                  + __Vtask_regenx_tb__DOT__check_state__917__nu)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__927__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__927__what));
                    }
                }
                __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 0U;
                __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 0U;
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [0U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [0U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [1U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [1U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [2U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [2U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [3U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [3U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [4U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [4U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [5U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [5U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [6U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [6U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [7U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [7U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [8U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [8U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [9U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [9U])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [0xaU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [0xaU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [0xbU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [0xbU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [0xcU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [0xcU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [0xdU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [0xdU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [0xeU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [0xeU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                     [0xfU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0 = 1U;
                }
                if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                     [0xfU])) {
                    __Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1 = 1U;
                }
                __Vtask_regenx_tb__DOT__chk__928__what 
                    = VL_SFORMATF_NX("%@: spare_used %b exp %b%b",
                                     -1,&(__Vtask_regenx_tb__DOT__check_state__917__tag),
                                     2,(IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used),
                                     1,__Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1,
                                     1,(IData)(__Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0)) ;
                __Vtask_regenx_tb__DOT__chk__928__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used) 
                       == (((IData)(__Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u1) 
                            << 1U) | (IData)(__Vtask_regenx_tb__DOT__check_state__917__unnamedblk14__DOT__u0)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__928__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__928__what));
                    }
                }
                __Vtask_regenx_tb__DOT__sweep__929__rounds = 1U;
                __Vtask_regenx_tb__DOT__sweep__929__tag = 
                    std::string{"bits"};
                __Vtask_regenx_tb__DOT__sweep__929__unnamedblk16__DOT__k = 0U;
                while (VL_LTS_III(32, __Vtask_regenx_tb__DOT__sweep__929__unnamedblk16__DOT__k, __Vtask_regenx_tb__DOT__sweep__929__rounds)) {
                    vlSelf->regenx_tb__DOT__shadow[0U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [0U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 0",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[1U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [1U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 1",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 1U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[2U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [2U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 2U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 2",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 2U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[3U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [3U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 3U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 3",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 3U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[4U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [4U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 4U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 4",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 4U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[5U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [5U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 5U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 5",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 5U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[6U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [6U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 6U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 6",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 6U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[7U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [7U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 7U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 7",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 7U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[8U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [8U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 8U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 8",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 8U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[9U] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [9U];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 9U;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 9",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 9U)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[0xaU] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [0xaU];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 0xaU;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 10",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 0xaU)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[0xbU] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [0xbU];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 0xbU;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 11",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 0xbU)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[0xcU] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [0xcU];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 0xcU;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 12",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 0xcU)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[0xdU] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [0xdU];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 0xdU;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 13",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 0xdU)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[0xeU] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [0xeU];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 0xeU;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 14",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 0xeU)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[0xfU] 
                        = (0xffU & VL_RANDOM_I());
                    __Vtask_regenx_tb__DOT__host_op__930__d 
                        = vlSelf->regenx_tb__DOT__shadow
                        [0xfU];
                    __Vtask_regenx_tb__DOT__host_op__930__a = 0xfU;
                    __Vtask_regenx_tb__DOT__host_op__930__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__930__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__930__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__930__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__931__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__931__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__931__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__931__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__930__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__930__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__930__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__932__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__932__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__930__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__932__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__932__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    __Vtask_regenx_tb__DOT__chk__933__what 
                        = VL_SFORMATF_NX("%@: write err flag row 15",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__933__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                           == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                     >> 0xfU)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__933__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__933__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 0xfU;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x8000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 15 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 15",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 15 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [0xfU]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [0xfU]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 0xeU;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x4000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 14 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 14",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 14 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [0xeU]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [0xeU]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 0xdU;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x2000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 13 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 13",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 13 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [0xdU]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [0xdU]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 0xcU;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x1000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 12 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 12",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 12 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [0xcU]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [0xcU]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 0xbU;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x800U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 11 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 11",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 11 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [0xbU]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [0xbU]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 0xaU;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x400U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 10 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 10",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 10 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [0xaU]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [0xaU]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 9U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x200U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 9 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 9",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 9 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [9U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [9U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 8U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x100U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 8 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 8",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 8 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [8U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [8U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 7U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x80U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 7 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 7",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 7 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [7U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [7U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 6U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x40U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 6 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 6",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 6 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [6U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [6U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 5U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x20U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 5 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 5",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 5 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [5U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [5U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 4U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((0x10U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 4 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 4",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 4 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [4U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [4U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 3U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 3 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 3",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 3 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [3U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [3U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 2U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 2 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 2",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 2 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [2U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [2U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 1U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 1 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 1",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 1 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [1U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [1U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__934__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__a = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__934__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__934__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__934__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__935__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__935__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__935__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__935__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__934__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__934__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__934__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__936__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__936__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__934__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__936__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__936__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                        __Vtask_regenx_tb__DOT__chk__937__what 
                            = VL_SFORMATF_NX("%@: read of unavailable row 0 did not error",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__937__ok 
                            = vlSelf->regenx_tb__DOT__g_err;
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__937__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__937__what));
                            }
                        }
                    } else {
                        __Vtask_regenx_tb__DOT__chk__938__what 
                            = VL_SFORMATF_NX("%@: unexpected error row 0",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag)) ;
                        __Vtask_regenx_tb__DOT__chk__938__ok 
                            = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__938__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__938__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__chk__939__what 
                            = VL_SFORMATF_NX("%@: row 0 read %02x expected %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                             8,vlSelf->regenx_tb__DOT__shadow
                                             [0U]) ;
                        __Vtask_regenx_tb__DOT__chk__939__ok 
                            = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                               == vlSelf->regenx_tb__DOT__shadow
                               [0U]);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__939__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__939__what));
                            }
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__940__what 
                        = VL_SFORMATF_NX("%@: read latency %0d",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                         32,vlSelf->regenx_tb__DOT__g_lat) ;
                    __Vtask_regenx_tb__DOT__chk__940__ok 
                        = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__940__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__940__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__sweep__929__unnamedblk16__DOT__k 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__929__unnamedblk16__DOT__k);
                }
                __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r = 0U;
                while (VL_GTS_III(32, 0x10U, __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r)) {
                    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                  >> (0xfU & __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r))))) {
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [0U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [0U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [0U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [1U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [1U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [1U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [2U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [2U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [2U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [3U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [3U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [3U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [4U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [4U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [4U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [5U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [5U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [5U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [6U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [6U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [6U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        __Vtask_regenx_tb__DOT__host_op__941__d 
                            = vlSelf->regenx_tb__DOT__pats
                            [7U];
                        __Vtask_regenx_tb__DOT__host_op__941__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__941__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__941__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__941__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__941__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__942__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__942__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__942__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__942__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__941__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__941__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__941__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__943__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__943__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__941__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__943__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__943__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__host_op__944__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__944__w = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__944__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__944__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__944__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__945__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__945__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__945__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__945__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__944__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__944__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__944__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__946__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__946__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__944__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__946__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__946__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                        __Vtask_regenx_tb__DOT__chk__947__what 
                            = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                             -1,&(__Vtask_regenx_tb__DOT__sweep__929__tag),
                                             32,__Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r,
                                             8,vlSelf->regenx_tb__DOT__pats
                                             [7U],8,
                                             vlSelf->regenx_tb__DOT__g_data) ;
                        __Vtask_regenx_tb__DOT__chk__947__ok 
                            = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                == vlSelf->regenx_tb__DOT__pats
                                [7U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__947__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__947__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__shadow[(0xfU 
                                                        & __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r)] = 0U;
                        __Vtask_regenx_tb__DOT__host_op__948__d = 0U;
                        __Vtask_regenx_tb__DOT__host_op__948__a 
                            = __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r;
                        __Vtask_regenx_tb__DOT__host_op__948__w = 1U;
                        __Vtask_regenx_tb__DOT__host_op__948__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           182);
                        vlSelf->regenx_tb__DOT__req_valid = 1U;
                        vlSelf->regenx_tb__DOT__req_write 
                            = __Vtask_regenx_tb__DOT__host_op__948__w;
                        vlSelf->regenx_tb__DOT__req_addr 
                            = (0xfU & __Vtask_regenx_tb__DOT__host_op__948__a);
                        vlSelf->regenx_tb__DOT__req_wdata 
                            = (0xffU & __Vtask_regenx_tb__DOT__host_op__948__d);
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           184);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__948__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               185);
                            __Vtask_regenx_tb__DOT__host_op__948__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__948__guard);
                        }
                        __Vtask_regenx_tb__DOT__chk__949__what = 
                            std::string{"req_ready stuck low"};
                        __Vtask_regenx_tb__DOT__chk__949__ok 
                            = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__948__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__949__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__949__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_lat = 0U;
                        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(negedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           188);
                        vlSelf->regenx_tb__DOT__req_valid = 0U;
                        __Vtask_regenx_tb__DOT__host_op__948__guard = 0U;
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           191);
                        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__948__guard))) {
                            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                               nullptr, 
                                                                               "@(posedge regenx_tb.clk)", 
                                                                               "tb/regenx_tb.sv", 
                                                                               192);
                            __Vtask_regenx_tb__DOT__host_op__948__guard 
                                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__948__guard);
                            vlSelf->regenx_tb__DOT__g_lat 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                        }
                        __Vtask_regenx_tb__DOT__chk__950__what = 
                            std::string{"no response"};
                        __Vtask_regenx_tb__DOT__chk__950__ok 
                            = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__948__guard);
                        vlSelf->regenx_tb__DOT__checks 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__950__ok)))) {
                            vlSelf->regenx_tb__DOT__errors 
                                = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                                VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                          64,VL_TIME_UNITED_Q(1000),
                                          -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                          -1,&(__Vtask_regenx_tb__DOT__chk__950__what));
                            }
                        }
                        vlSelf->regenx_tb__DOT__g_data 
                            = vlSelf->regenx_tb__DOT__rsp_rdata;
                        vlSelf->regenx_tb__DOT__g_err 
                            = vlSelf->regenx_tb__DOT__rsp_error;
                        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
                    }
                    __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__929__unnamedblk19__DOT__r);
                }
                __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__unnamedblk2_2__DOT__j);
            }
            __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__unnamedblk24__DOT__b);
        }
        vlSelf->__Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__k 
            = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__t_all_bits__907__unnamedblk23__DOT__k);
    }
}
