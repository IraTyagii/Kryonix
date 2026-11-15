// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__17(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__17\n"); );
    // Init
    CData/*0:0*/ regenx_tb__DOT__g_fix;
    regenx_tb__DOT__g_fix = 0;
    CData/*0:0*/ regenx_tb__DOT____Vlvbound_hc8db9d74__0;
    regenx_tb__DOT____Vlvbound_hc8db9d74__0 = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__744__slot;
    __Vtask_regenx_tb__DOT__set_fault__744__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__745__slot;
    __Vtask_regenx_tb__DOT__set_fault__745__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__745__kind;
    __Vtask_regenx_tb__DOT__set_fault__745__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__745__row;
    __Vtask_regenx_tb__DOT__set_fault__745__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__745__bitn;
    __Vtask_regenx_tb__DOT__set_fault__745__bitn = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__746__w;
    __Vtask_regenx_tb__DOT__host_op__746__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__746__a;
    __Vtask_regenx_tb__DOT__host_op__746__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__746__d;
    __Vtask_regenx_tb__DOT__host_op__746__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__746__guard;
    __Vtask_regenx_tb__DOT__host_op__746__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__747__ok;
    __Vtask_regenx_tb__DOT__chk__747__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__747__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__748__ok;
    __Vtask_regenx_tb__DOT__chk__748__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__748__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__750__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__750__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__750__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__750__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__751__n;
    __Vtask_regenx_tb__DOT__tick__751__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__752__n;
    __Vtask_regenx_tb__DOT__tick__752__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__753__ok;
    __Vtask_regenx_tb__DOT__chk__753__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__753__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__755__n;
    __Vtask_regenx_tb__DOT__tick__755__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__756__ok;
    __Vtask_regenx_tb__DOT__chk__756__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__756__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__757__ok;
    __Vtask_regenx_tb__DOT__chk__757__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__757__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__759__guard;
    __Vtask_regenx_tb__DOT__boot__759__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__760__cycles;
    __Vtask_regenx_tb__DOT__do_reset__760__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__761__n;
    __Vtask_regenx_tb__DOT__tick__761__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__762__n;
    __Vtask_regenx_tb__DOT__tick__762__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__763__ok;
    __Vtask_regenx_tb__DOT__chk__763__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__763__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__765__n;
    __Vtask_regenx_tb__DOT__tick__765__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__767__w;
    __Vtask_regenx_tb__DOT__host_op__767__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__767__a;
    __Vtask_regenx_tb__DOT__host_op__767__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__767__d;
    __Vtask_regenx_tb__DOT__host_op__767__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__767__guard;
    __Vtask_regenx_tb__DOT__host_op__767__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__768__ok;
    __Vtask_regenx_tb__DOT__chk__768__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__768__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__769__ok;
    __Vtask_regenx_tb__DOT__chk__769__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__769__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__770__slot;
    __Vtask_regenx_tb__DOT__set_fault__770__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__770__kind;
    __Vtask_regenx_tb__DOT__set_fault__770__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__770__row;
    __Vtask_regenx_tb__DOT__set_fault__770__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__770__bitn;
    __Vtask_regenx_tb__DOT__set_fault__770__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__772__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__772__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__772__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__772__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__773__n;
    __Vtask_regenx_tb__DOT__tick__773__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__774__n;
    __Vtask_regenx_tb__DOT__tick__774__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__775__ok;
    __Vtask_regenx_tb__DOT__chk__775__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__775__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__777__n;
    __Vtask_regenx_tb__DOT__tick__777__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__778__ok;
    __Vtask_regenx_tb__DOT__chk__778__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__778__what;
    std::string __Vtask_regenx_tb__DOT__verify_all__779__tag;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__780__w;
    __Vtask_regenx_tb__DOT__host_op__780__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__780__a;
    __Vtask_regenx_tb__DOT__host_op__780__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__780__d;
    __Vtask_regenx_tb__DOT__host_op__780__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__780__guard;
    __Vtask_regenx_tb__DOT__host_op__780__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__781__ok;
    __Vtask_regenx_tb__DOT__chk__781__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__781__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__782__ok;
    __Vtask_regenx_tb__DOT__chk__782__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__782__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__783__ok;
    __Vtask_regenx_tb__DOT__chk__783__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__783__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_storm__784__injected;
    __Vtask_regenx_tb__DOT__t_storm__784__injected = 0;
    IData/*17:0*/ __Vtask_regenx_tb__DOT__t_storm__784__used_rows;
    __Vtask_regenx_tb__DOT__t_storm__784__used_rows = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__786__guard;
    __Vtask_regenx_tb__DOT__boot__786__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__787__cycles;
    __Vtask_regenx_tb__DOT__do_reset__787__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__788__n;
    __Vtask_regenx_tb__DOT__tick__788__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__789__n;
    __Vtask_regenx_tb__DOT__tick__789__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__790__ok;
    __Vtask_regenx_tb__DOT__chk__790__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__790__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__792__n;
    __Vtask_regenx_tb__DOT__tick__792__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__794__w;
    __Vtask_regenx_tb__DOT__host_op__794__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__794__a;
    __Vtask_regenx_tb__DOT__host_op__794__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__794__d;
    __Vtask_regenx_tb__DOT__host_op__794__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__794__guard;
    __Vtask_regenx_tb__DOT__host_op__794__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__795__ok;
    __Vtask_regenx_tb__DOT__chk__795__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__795__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__796__ok;
    __Vtask_regenx_tb__DOT__chk__796__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__796__what;
    CData/*0:0*/ __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout;
    __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__e_row_gone__797__p;
    __Vfunc_regenx_tb__DOT__e_row_gone__797__p = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__798__slot;
    __Vtask_regenx_tb__DOT__set_fault__798__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__798__kind;
    __Vtask_regenx_tb__DOT__set_fault__798__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__798__row;
    __Vtask_regenx_tb__DOT__set_fault__798__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__798__bitn;
    __Vtask_regenx_tb__DOT__set_fault__798__bitn = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__799__w;
    __Vtask_regenx_tb__DOT__host_op__799__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__799__a;
    __Vtask_regenx_tb__DOT__host_op__799__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__799__d;
    __Vtask_regenx_tb__DOT__host_op__799__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__799__guard;
    __Vtask_regenx_tb__DOT__host_op__799__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__800__ok;
    __Vtask_regenx_tb__DOT__chk__800__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__800__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__801__ok;
    __Vtask_regenx_tb__DOT__chk__801__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__801__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__802__ok;
    __Vtask_regenx_tb__DOT__chk__802__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__802__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__803__w;
    __Vtask_regenx_tb__DOT__host_op__803__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__803__a;
    __Vtask_regenx_tb__DOT__host_op__803__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__803__d;
    __Vtask_regenx_tb__DOT__host_op__803__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__803__guard;
    __Vtask_regenx_tb__DOT__host_op__803__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__804__ok;
    __Vtask_regenx_tb__DOT__chk__804__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__804__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__805__ok;
    __Vtask_regenx_tb__DOT__chk__805__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__805__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__806__ok;
    __Vtask_regenx_tb__DOT__chk__806__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__806__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__807__n;
    __Vtask_regenx_tb__DOT__tick__807__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__809__n;
    __Vtask_regenx_tb__DOT__tick__809__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__810__n;
    __Vtask_regenx_tb__DOT__tick__810__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__811__ok;
    __Vtask_regenx_tb__DOT__chk__811__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__811__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__813__n;
    __Vtask_regenx_tb__DOT__tick__813__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__815__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__815__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__815__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__815__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__816__n;
    __Vtask_regenx_tb__DOT__tick__816__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__817__n;
    __Vtask_regenx_tb__DOT__tick__817__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__818__ok;
    __Vtask_regenx_tb__DOT__chk__818__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__818__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__820__n;
    __Vtask_regenx_tb__DOT__tick__820__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__822__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__822__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__822__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__822__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__823__n;
    __Vtask_regenx_tb__DOT__tick__823__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__824__n;
    __Vtask_regenx_tb__DOT__tick__824__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__825__ok;
    __Vtask_regenx_tb__DOT__chk__825__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__825__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__827__n;
    __Vtask_regenx_tb__DOT__tick__827__n = 0;
    // Body
    __Vtask_regenx_tb__DOT__set_fault__744__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__744__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__744__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__744__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__744__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__744__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__744__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__744__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__744__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__744__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__744__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__744__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__744__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__744__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__744__slot)))));
    }
    __Vtask_regenx_tb__DOT__set_fault__745__bitn = 6U;
    __Vtask_regenx_tb__DOT__set_fault__745__row = 6U;
    __Vtask_regenx_tb__DOT__set_fault__745__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__745__slot = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__745__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__745__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__745__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__745__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__745__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__745__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__745__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__745__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__745__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__745__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__745__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__745__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__745__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__745__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__745__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__745__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__745__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__745__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__745__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__745__slot)))));
    }
    vlSelf->regenx_tb__DOT__shadow[6U] = 0U;
    __Vtask_regenx_tb__DOT__host_op__746__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__746__a = 6U;
    __Vtask_regenx_tb__DOT__host_op__746__w = 1U;
    __Vtask_regenx_tb__DOT__host_op__746__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__746__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__746__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__746__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__746__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__746__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__746__guard);
    }
    __Vtask_regenx_tb__DOT__chk__747__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__747__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__746__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__747__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__747__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__746__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__746__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__746__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__746__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__748__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__748__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__746__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__748__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__748__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       284);
    vlSelf->regenx_tb__DOT__scrub_req = 1U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       285);
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__750__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__750__g = 0U;
    __Vtask_regenx_tb__DOT__tick__751__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__751__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__750__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__750__maxc))) {
        __Vtask_regenx_tb__DOT__tick__752__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__752__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__750__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__750__g);
    }
    __Vtask_regenx_tb__DOT__chk__753__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__753__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__750__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__750__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__753__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__753__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__755__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__755__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__756__what = std::string{"patrol-found double error retires the row"};
    __Vtask_regenx_tb__DOT__chk__756__ok = (((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                             >> 6U) 
                                            & (IData)(vlSelf->regenx_tb__DOT__data_lost));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__756__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__756__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__757__what = std::string{"patrol must not migrate unrecoverable data"};
    __Vtask_regenx_tb__DOT__chk__757__ok = (0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__757__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__757__what));
        }
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
    __Vtask_regenx_tb__DOT__boot__759__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__760__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__761__n = __Vtask_regenx_tb__DOT__do_reset__760__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__761__n;
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
    vlSelf->regenx_tb__DOT__boots = ((IData)(1U) + vlSelf->regenx_tb__DOT__boots);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__759__guard))) {
        __Vtask_regenx_tb__DOT__tick__762__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__762__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__boot__759__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__759__guard);
    }
    __Vtask_regenx_tb__DOT__chk__763__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__763__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__763__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__763__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__765__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__765__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    vlSelf->regenx_tb__DOT__scrub_en = 1U;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__767__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__767__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__767__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__767__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__767__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__767__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__767__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__767__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__767__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__767__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__767__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__767__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
        }
        __Vtask_regenx_tb__DOT__chk__768__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__768__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__768__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__768__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__767__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__767__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__767__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__769__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__769__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__767__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__769__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__769__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    __Vtask_regenx_tb__DOT__set_fault__770__bitn = 5U;
    __Vtask_regenx_tb__DOT__set_fault__770__row = 8U;
    __Vtask_regenx_tb__DOT__set_fault__770__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__770__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__770__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__770__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__770__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__770__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__770__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__770__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__770__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__770__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__770__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__770__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__770__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__770__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__770__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__770__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__770__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__770__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__770__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__770__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__770__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__770__slot)))));
    }
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       284);
    vlSelf->regenx_tb__DOT__scrub_req = 1U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       285);
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__772__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__772__g = 0U;
    __Vtask_regenx_tb__DOT__tick__773__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__773__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__772__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__772__maxc))) {
        __Vtask_regenx_tb__DOT__tick__774__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__774__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__772__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__772__g);
    }
    __Vtask_regenx_tb__DOT__chk__775__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__775__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__772__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__772__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__775__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__775__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__777__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__777__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__778__what = std::string{"single bit must migrate cleanly"};
    __Vtask_regenx_tb__DOT__chk__778__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__data_lost)) 
                                            & (0x1000U 
                                               == (0x1f00U 
                                                   & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U])));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__778__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__778__what));
        }
    }
    __Vtask_regenx_tb__DOT__verify_all__779__tag = 
        std::string{"lost (c)"};
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 0 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 1 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [1U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [1U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 2 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [2U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [2U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 3 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [3U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [3U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 4 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [4U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [4U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 5 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [5U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [5U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 6 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [6U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [6U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 7 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [7U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [7U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 8 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [8U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [8U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 9 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [9U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [9U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 10 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xaU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xaU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 11 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xbU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xbU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 12 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xcU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xcU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 13 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xdU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xdU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 14 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xeU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xeU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        __Vtask_regenx_tb__DOT__host_op__780__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__780__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__780__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__780__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__780__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
        }
        __Vtask_regenx_tb__DOT__chk__781__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__781__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__781__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__781__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__780__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__780__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__780__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__782__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__782__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__780__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__782__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__782__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__783__what = VL_SFORMATF_NX("%@: row 15 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__779__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xfU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__783__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xfU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__783__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__783__what));
            }
        }
    }
    __Vtask_regenx_tb__DOT__t_storm__784__injected = 0U;
    __Vtask_regenx_tb__DOT__t_storm__784__used_rows = 0U;
    vlSelf->regenx_tb__DOT__phase = std::string{"storm"};
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
    __Vtask_regenx_tb__DOT__boot__786__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__787__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__788__n = __Vtask_regenx_tb__DOT__do_reset__787__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__788__n;
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
    vlSelf->regenx_tb__DOT__boots = ((IData)(1U) + vlSelf->regenx_tb__DOT__boots);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__786__guard))) {
        __Vtask_regenx_tb__DOT__tick__789__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__789__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__boot__786__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__786__guard);
    }
    __Vtask_regenx_tb__DOT__chk__790__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__790__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__790__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__790__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__792__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__792__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    vlSelf->regenx_tb__DOT__scrub_en = 1U;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__794__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__794__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__794__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__794__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__794__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__794__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__794__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__794__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__794__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__794__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__794__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__794__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
        }
        __Vtask_regenx_tb__DOT__chk__795__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__795__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__795__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__795__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__794__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__794__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__794__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__796__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__796__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__794__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__796__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__796__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
        = VL_URANDOM_RANGE_I(0U, 0x11U);
    while ((((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)) 
             && (1U & (__Vtask_regenx_tb__DOT__t_storm__784__used_rows 
                       >> (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) 
            | ([&]() {
                    __Vfunc_regenx_tb__DOT__e_row_gone__797__p 
                        = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
                    {
                        if (((0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 5U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xaU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xfU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x14U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x19U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 3U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 8U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0xdU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x12U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x17U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                        << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 1U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 6U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 0xbU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel2;
                        }
                        __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 1U;
                        __Vlabel2: ;
                    }
                }(), (IData)(__Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
            = VL_URANDOM_RANGE_I(0U, 0x11U);
    }
    regenx_tb__DOT____Vlvbound_hc8db9d74__0 = 1U;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind 
        = VL_URANDOM_RANGE_I(1U, 4U);
    __Vtask_regenx_tb__DOT__set_fault__798__bitn = 
        VL_URANDOM_RANGE_I(0U, 0xcU);
    __Vtask_regenx_tb__DOT__set_fault__798__row = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
    if ((0U == VL_URANDOM_RANGE_I(0U, 4U))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind = 8U;
    }
    __Vtask_regenx_tb__DOT__set_fault__798__kind = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind;
    __Vtask_regenx_tb__DOT__set_fault__798__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    __Vtask_regenx_tb__DOT__t_storm__784__injected 
        = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__injected);
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i = 0U;
    if (VL_LIKELY((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__used_rows 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))) 
                & __Vtask_regenx_tb__DOT__t_storm__784__used_rows) 
               | (0x3ffffU & ((IData)(regenx_tb__DOT____Vlvbound_hc8db9d74__0) 
                              << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))));
    }
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__798__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__798__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__798__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    while (VL_GTS_III(32, 0xfaU, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i)) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r 
            = VL_URANDOM_RANGE_I(0U, 0xfU);
        if ((0U == VL_URANDOM_RANGE_I(0U, 2U))) {
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)] 
                = (0xffU & VL_RANDOM_I());
            __Vtask_regenx_tb__DOT__host_op__799__d 
                = vlSelf->regenx_tb__DOT__shadow[(0xfU 
                                                  & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)];
            __Vtask_regenx_tb__DOT__host_op__799__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__799__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__799__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__799__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__799__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
            }
            __Vtask_regenx_tb__DOT__chk__800__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__800__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__800__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__800__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__801__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__801__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__801__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__801__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__802__what = 
                std::string{"storm write error"};
            __Vtask_regenx_tb__DOT__chk__802__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__802__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__802__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__host_op__803__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__803__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__803__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__803__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__803__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
            }
            __Vtask_regenx_tb__DOT__chk__804__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__804__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__804__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__804__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__805__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__805__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__805__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__805__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__806__what 
                = VL_SFORMATF_NX("storm row %0d got %02x exp %02x",
                                 32,__Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r,
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]) ;
            __Vtask_regenx_tb__DOT__chk__806__ok = 
                ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                 & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                    == vlSelf->regenx_tb__DOT__shadow
                    [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__806__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__806__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__tick__807__n = VL_URANDOM_RANGE_I(0U, 0xcU);
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__807__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        if ((0x4fU == VL_MODDIVS_III(32, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i, (IData)(0x50U)))) {
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 1U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 0U;
        }
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i);
    }
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g = 0U;
    __Vtask_regenx_tb__DOT__tick__809__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__809__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc))) {
        __Vtask_regenx_tb__DOT__tick__810__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__810__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g);
    }
    __Vtask_regenx_tb__DOT__chk__811__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__811__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__811__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__811__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__813__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__813__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
        = VL_URANDOM_RANGE_I(0U, 0x11U);
    while ((((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)) 
             && (1U & (__Vtask_regenx_tb__DOT__t_storm__784__used_rows 
                       >> (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) 
            | ([&]() {
                    __Vfunc_regenx_tb__DOT__e_row_gone__797__p 
                        = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
                    {
                        if (((0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 5U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xaU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xfU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x14U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x19U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 3U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 8U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0xdU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x12U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x17U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                        << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 1U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 6U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 0xbU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel3;
                        }
                        __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 1U;
                        __Vlabel3: ;
                    }
                }(), (IData)(__Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
            = VL_URANDOM_RANGE_I(0U, 0x11U);
    }
    regenx_tb__DOT____Vlvbound_hc8db9d74__0 = 1U;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind 
        = VL_URANDOM_RANGE_I(1U, 4U);
    __Vtask_regenx_tb__DOT__set_fault__798__bitn = 
        VL_URANDOM_RANGE_I(0U, 0xcU);
    __Vtask_regenx_tb__DOT__set_fault__798__row = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
    if ((0U == VL_URANDOM_RANGE_I(0U, 4U))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind = 8U;
    }
    __Vtask_regenx_tb__DOT__set_fault__798__kind = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind;
    __Vtask_regenx_tb__DOT__set_fault__798__slot = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    __Vtask_regenx_tb__DOT__t_storm__784__injected 
        = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__injected);
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i = 0U;
    if (VL_LIKELY((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__used_rows 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))) 
                & __Vtask_regenx_tb__DOT__t_storm__784__used_rows) 
               | (0x3ffffU & ((IData)(regenx_tb__DOT____Vlvbound_hc8db9d74__0) 
                              << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))));
    }
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__798__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__798__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__798__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    while (VL_GTS_III(32, 0xfaU, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i)) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r 
            = VL_URANDOM_RANGE_I(0U, 0xfU);
        if ((0U == VL_URANDOM_RANGE_I(0U, 2U))) {
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)] 
                = (0xffU & VL_RANDOM_I());
            __Vtask_regenx_tb__DOT__host_op__799__d 
                = vlSelf->regenx_tb__DOT__shadow[(0xfU 
                                                  & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)];
            __Vtask_regenx_tb__DOT__host_op__799__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__799__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__799__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__799__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__799__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
            }
            __Vtask_regenx_tb__DOT__chk__800__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__800__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__800__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__800__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__801__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__801__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__801__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__801__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__802__what = 
                std::string{"storm write error"};
            __Vtask_regenx_tb__DOT__chk__802__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__802__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__802__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__host_op__803__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__803__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__803__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__803__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__803__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
            }
            __Vtask_regenx_tb__DOT__chk__804__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__804__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__804__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__804__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__805__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__805__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__805__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__805__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__806__what 
                = VL_SFORMATF_NX("storm row %0d got %02x exp %02x",
                                 32,__Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r,
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]) ;
            __Vtask_regenx_tb__DOT__chk__806__ok = 
                ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                 & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                    == vlSelf->regenx_tb__DOT__shadow
                    [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__806__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__806__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__tick__807__n = VL_URANDOM_RANGE_I(0U, 0xcU);
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__807__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        if ((0x4fU == VL_MODDIVS_III(32, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i, (IData)(0x50U)))) {
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 1U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 0U;
        }
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i);
    }
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g = 0U;
    __Vtask_regenx_tb__DOT__tick__809__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__809__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc))) {
        __Vtask_regenx_tb__DOT__tick__810__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__810__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g);
    }
    __Vtask_regenx_tb__DOT__chk__811__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__811__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__811__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__811__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__813__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__813__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
        = VL_URANDOM_RANGE_I(0U, 0x11U);
    while ((((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)) 
             && (1U & (__Vtask_regenx_tb__DOT__t_storm__784__used_rows 
                       >> (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) 
            | ([&]() {
                    __Vfunc_regenx_tb__DOT__e_row_gone__797__p 
                        = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
                    {
                        if (((0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 5U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xaU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xfU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x14U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x19U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 3U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 8U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0xdU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x12U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x17U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                        << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 1U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 6U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 0xbU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel4;
                        }
                        __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 1U;
                        __Vlabel4: ;
                    }
                }(), (IData)(__Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
            = VL_URANDOM_RANGE_I(0U, 0x11U);
    }
    regenx_tb__DOT____Vlvbound_hc8db9d74__0 = 1U;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind 
        = VL_URANDOM_RANGE_I(1U, 4U);
    __Vtask_regenx_tb__DOT__set_fault__798__bitn = 
        VL_URANDOM_RANGE_I(0U, 0xcU);
    __Vtask_regenx_tb__DOT__set_fault__798__row = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
    if ((0U == VL_URANDOM_RANGE_I(0U, 4U))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind = 8U;
    }
    __Vtask_regenx_tb__DOT__set_fault__798__kind = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind;
    __Vtask_regenx_tb__DOT__set_fault__798__slot = 2U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    __Vtask_regenx_tb__DOT__t_storm__784__injected 
        = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__injected);
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i = 0U;
    if (VL_LIKELY((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__used_rows 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))) 
                & __Vtask_regenx_tb__DOT__t_storm__784__used_rows) 
               | (0x3ffffU & ((IData)(regenx_tb__DOT____Vlvbound_hc8db9d74__0) 
                              << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))));
    }
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__798__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__798__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__798__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    while (VL_GTS_III(32, 0xfaU, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i)) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r 
            = VL_URANDOM_RANGE_I(0U, 0xfU);
        if ((0U == VL_URANDOM_RANGE_I(0U, 2U))) {
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)] 
                = (0xffU & VL_RANDOM_I());
            __Vtask_regenx_tb__DOT__host_op__799__d 
                = vlSelf->regenx_tb__DOT__shadow[(0xfU 
                                                  & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)];
            __Vtask_regenx_tb__DOT__host_op__799__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__799__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__799__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__799__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__799__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
            }
            __Vtask_regenx_tb__DOT__chk__800__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__800__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__800__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__800__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__801__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__801__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__801__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__801__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__802__what = 
                std::string{"storm write error"};
            __Vtask_regenx_tb__DOT__chk__802__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__802__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__802__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__host_op__803__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__803__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__803__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__803__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__803__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
            }
            __Vtask_regenx_tb__DOT__chk__804__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__804__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__804__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__804__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__805__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__805__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__805__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__805__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__806__what 
                = VL_SFORMATF_NX("storm row %0d got %02x exp %02x",
                                 32,__Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r,
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]) ;
            __Vtask_regenx_tb__DOT__chk__806__ok = 
                ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                 & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                    == vlSelf->regenx_tb__DOT__shadow
                    [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__806__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__806__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__tick__807__n = VL_URANDOM_RANGE_I(0U, 0xcU);
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__807__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        if ((0x4fU == VL_MODDIVS_III(32, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i, (IData)(0x50U)))) {
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 1U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 0U;
        }
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i);
    }
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g = 0U;
    __Vtask_regenx_tb__DOT__tick__809__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__809__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc))) {
        __Vtask_regenx_tb__DOT__tick__810__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__810__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g);
    }
    __Vtask_regenx_tb__DOT__chk__811__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__811__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__811__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__811__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__813__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__813__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
        = VL_URANDOM_RANGE_I(0U, 0x11U);
    while ((((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)) 
             && (1U & (__Vtask_regenx_tb__DOT__t_storm__784__used_rows 
                       >> (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) 
            | ([&]() {
                    __Vfunc_regenx_tb__DOT__e_row_gone__797__p 
                        = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
                    {
                        if (((0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 5U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xaU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xfU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x14U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x19U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 3U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 8U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0xdU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x12U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x17U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                        << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 1U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 6U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 0xbU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel5;
                        }
                        __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 1U;
                        __Vlabel5: ;
                    }
                }(), (IData)(__Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
            = VL_URANDOM_RANGE_I(0U, 0x11U);
    }
    regenx_tb__DOT____Vlvbound_hc8db9d74__0 = 1U;
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind 
        = VL_URANDOM_RANGE_I(1U, 4U);
    __Vtask_regenx_tb__DOT__set_fault__798__bitn = 
        VL_URANDOM_RANGE_I(0U, 0xcU);
    __Vtask_regenx_tb__DOT__set_fault__798__row = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
    if ((0U == VL_URANDOM_RANGE_I(0U, 4U))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind = 8U;
    }
    __Vtask_regenx_tb__DOT__set_fault__798__kind = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind;
    __Vtask_regenx_tb__DOT__set_fault__798__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    __Vtask_regenx_tb__DOT__t_storm__784__injected 
        = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__injected);
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i = 0U;
    if (VL_LIKELY((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__used_rows 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))) 
                & __Vtask_regenx_tb__DOT__t_storm__784__used_rows) 
               | (0x3ffffU & ((IData)(regenx_tb__DOT____Vlvbound_hc8db9d74__0) 
                              << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))));
    }
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__798__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__798__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__798__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    while (VL_GTS_III(32, 0xfaU, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i)) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r 
            = VL_URANDOM_RANGE_I(0U, 0xfU);
        if ((0U == VL_URANDOM_RANGE_I(0U, 2U))) {
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)] 
                = (0xffU & VL_RANDOM_I());
            __Vtask_regenx_tb__DOT__host_op__799__d 
                = vlSelf->regenx_tb__DOT__shadow[(0xfU 
                                                  & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)];
            __Vtask_regenx_tb__DOT__host_op__799__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__799__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__799__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__799__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__799__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
            }
            __Vtask_regenx_tb__DOT__chk__800__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__800__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__800__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__800__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__801__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__801__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__801__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__801__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__802__what = 
                std::string{"storm write error"};
            __Vtask_regenx_tb__DOT__chk__802__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__802__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__802__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__host_op__803__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__803__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__803__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__803__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__803__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
            }
            __Vtask_regenx_tb__DOT__chk__804__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__804__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__804__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__804__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__805__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__805__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__805__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__805__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__806__what 
                = VL_SFORMATF_NX("storm row %0d got %02x exp %02x",
                                 32,__Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r,
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]) ;
            __Vtask_regenx_tb__DOT__chk__806__ok = 
                ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                 & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                    == vlSelf->regenx_tb__DOT__shadow
                    [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__806__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__806__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__tick__807__n = VL_URANDOM_RANGE_I(0U, 0xcU);
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__807__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        if ((0x4fU == VL_MODDIVS_III(32, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i, (IData)(0x50U)))) {
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 1U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 0U;
        }
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i);
    }
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g = 0U;
    __Vtask_regenx_tb__DOT__tick__809__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__809__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc))) {
        __Vtask_regenx_tb__DOT__tick__810__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__810__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g);
    }
    __Vtask_regenx_tb__DOT__chk__811__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__811__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__811__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__811__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__813__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__813__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
        = VL_URANDOM_RANGE_I(0U, 0x11U);
    while ((((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)) 
             && (1U & (__Vtask_regenx_tb__DOT__t_storm__784__used_rows 
                       >> (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) 
            | ([&]() {
                    __Vfunc_regenx_tb__DOT__e_row_gone__797__p 
                        = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
                    {
                        if (((0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 5U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xaU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0xfU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x14U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                       >> 0x19U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                        << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                  >> 0x1eU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 3U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 8U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0xdU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x12U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                       >> 0x17U)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                        << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                  >> 0x1cU))) 
                             == (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 1U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 6U)) == (0x1fU 
                                                   & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        if (((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                       >> 0xbU)) == 
                             (0x1fU & __Vfunc_regenx_tb__DOT__e_row_gone__797__p))) {
                            __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 0U;
                            goto __Vlabel6;
                        }
                        __Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout = 1U;
                        __Vlabel6: ;
                    }
                }(), (IData)(__Vfunc_regenx_tb__DOT__e_row_gone__797__Vfuncout)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p 
            = VL_URANDOM_RANGE_I(0U, 0x11U);
    }
    regenx_tb__DOT____Vlvbound_hc8db9d74__0 = 1U;
    if (VL_LIKELY((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p)))) {
        __Vtask_regenx_tb__DOT__t_storm__784__used_rows 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))) 
                & __Vtask_regenx_tb__DOT__t_storm__784__used_rows) 
               | (0x3ffffU & ((IData)(regenx_tb__DOT____Vlvbound_hc8db9d74__0) 
                              << (0x1fU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p))));
    }
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind 
        = VL_URANDOM_RANGE_I(1U, 4U);
    if ((0U == VL_URANDOM_RANGE_I(0U, 4U))) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind = 8U;
    }
    __Vtask_regenx_tb__DOT__set_fault__798__bitn = 
        VL_URANDOM_RANGE_I(0U, 0xcU);
    __Vtask_regenx_tb__DOT__set_fault__798__row = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__p;
    __Vtask_regenx_tb__DOT__set_fault__798__kind = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__kind;
    __Vtask_regenx_tb__DOT__set_fault__798__slot = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__798__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__798__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__798__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__798__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__798__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__798__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__798__slot)))));
    }
    __Vtask_regenx_tb__DOT__t_storm__784__injected 
        = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__injected);
    __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i = 0U;
    while (VL_GTS_III(32, 0xfaU, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i)) {
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r 
            = VL_URANDOM_RANGE_I(0U, 0xfU);
        if ((0U == VL_URANDOM_RANGE_I(0U, 2U))) {
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)] 
                = (0xffU & VL_RANDOM_I());
            __Vtask_regenx_tb__DOT__host_op__799__d 
                = vlSelf->regenx_tb__DOT__shadow[(0xfU 
                                                  & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)];
            __Vtask_regenx_tb__DOT__host_op__799__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__799__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__799__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__799__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__799__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
            }
            __Vtask_regenx_tb__DOT__chk__800__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__800__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__800__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__800__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__799__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__799__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__799__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__801__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__801__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__799__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__801__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__801__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__802__what = 
                std::string{"storm write error"};
            __Vtask_regenx_tb__DOT__chk__802__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__802__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__802__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__host_op__803__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__a 
                = __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__803__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__803__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__803__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__803__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
            }
            __Vtask_regenx_tb__DOT__chk__804__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__804__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__804__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__804__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__803__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__803__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__803__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__805__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__805__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__803__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__805__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__805__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__806__what 
                = VL_SFORMATF_NX("storm row %0d got %02x exp %02x",
                                 32,__Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r,
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]) ;
            __Vtask_regenx_tb__DOT__chk__806__ok = 
                ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                 & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                    == vlSelf->regenx_tb__DOT__shadow
                    [(0xfU & __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__unnamedblk38__DOT__r)]));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__806__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__806__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__tick__807__n = VL_URANDOM_RANGE_I(0U, 0xcU);
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__807__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        if ((0x4fU == VL_MODDIVS_III(32, __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i, (IData)(0x50U)))) {
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 1U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               665);
            vlSelf->regenx_tb__DOT__scrub_req = 0U;
        }
        __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_storm__784__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__i);
    }
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g = 0U;
    __Vtask_regenx_tb__DOT__tick__809__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__809__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc))) {
        __Vtask_regenx_tb__DOT__tick__810__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__810__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g);
    }
    __Vtask_regenx_tb__DOT__chk__811__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__811__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__808__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__811__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__811__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__813__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__813__n;
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
                                                       284);
    vlSelf->regenx_tb__DOT__scrub_req = 1U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       285);
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__815__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__815__g = 0U;
    __Vtask_regenx_tb__DOT__tick__816__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__816__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__815__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__815__maxc))) {
        __Vtask_regenx_tb__DOT__tick__817__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__817__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__815__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__815__g);
    }
    __Vtask_regenx_tb__DOT__chk__818__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__818__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__815__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__815__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__818__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__818__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__820__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__820__n;
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
                                                       284);
    vlSelf->regenx_tb__DOT__scrub_req = 1U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       285);
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__822__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__822__g = 0U;
    __Vtask_regenx_tb__DOT__tick__823__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__823__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__822__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__822__maxc))) {
        __Vtask_regenx_tb__DOT__tick__824__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__824__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__822__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__822__g);
    }
    __Vtask_regenx_tb__DOT__chk__825__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__825__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__822__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__822__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__825__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__825__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__827__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__827__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    vlSelf->__Vtask_regenx_tb__DOT__verify_all__828__tag = 
        std::string{"storm end"};
}
