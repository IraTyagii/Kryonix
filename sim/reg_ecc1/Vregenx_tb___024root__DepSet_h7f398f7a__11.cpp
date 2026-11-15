// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__16(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__16\n"); );
    // Init
    CData/*0:0*/ regenx_tb__DOT__g_fix;
    regenx_tb__DOT__g_fix = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__622__n;
    __Vtask_regenx_tb__DOT__tick__622__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__623__ok;
    __Vtask_regenx_tb__DOT__chk__623__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__623__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__625__n;
    __Vtask_regenx_tb__DOT__tick__625__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__626__ok;
    __Vtask_regenx_tb__DOT__chk__626__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__626__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__627__ok;
    __Vtask_regenx_tb__DOT__chk__627__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__627__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__628__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__628__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__628__a;
    __Vfunc_regenx_tb__DOT__stat__628__a = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__629__w;
    __Vtask_regenx_tb__DOT__host_op__629__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__629__a;
    __Vtask_regenx_tb__DOT__host_op__629__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__629__d;
    __Vtask_regenx_tb__DOT__host_op__629__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__629__guard;
    __Vtask_regenx_tb__DOT__host_op__629__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__630__ok;
    __Vtask_regenx_tb__DOT__chk__630__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__630__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__631__ok;
    __Vtask_regenx_tb__DOT__chk__631__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__631__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__632__ok;
    __Vtask_regenx_tb__DOT__chk__632__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__632__what;
    std::string __Vtask_regenx_tb__DOT__verify_all__633__tag;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__634__w;
    __Vtask_regenx_tb__DOT__host_op__634__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__634__a;
    __Vtask_regenx_tb__DOT__host_op__634__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__634__d;
    __Vtask_regenx_tb__DOT__host_op__634__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__634__guard;
    __Vtask_regenx_tb__DOT__host_op__634__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__635__ok;
    __Vtask_regenx_tb__DOT__chk__635__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__635__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__636__ok;
    __Vtask_regenx_tb__DOT__chk__636__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__636__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__637__ok;
    __Vtask_regenx_tb__DOT__chk__637__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__637__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__639__guard;
    __Vtask_regenx_tb__DOT__boot__639__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__640__cycles;
    __Vtask_regenx_tb__DOT__do_reset__640__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__641__n;
    __Vtask_regenx_tb__DOT__tick__641__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__642__n;
    __Vtask_regenx_tb__DOT__tick__642__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__643__ok;
    __Vtask_regenx_tb__DOT__chk__643__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__643__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__645__n;
    __Vtask_regenx_tb__DOT__tick__645__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__646__w;
    __Vtask_regenx_tb__DOT__host_op__646__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__646__a;
    __Vtask_regenx_tb__DOT__host_op__646__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__646__d;
    __Vtask_regenx_tb__DOT__host_op__646__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__646__guard;
    __Vtask_regenx_tb__DOT__host_op__646__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__647__ok;
    __Vtask_regenx_tb__DOT__chk__647__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__647__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__648__ok;
    __Vtask_regenx_tb__DOT__chk__648__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__648__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__649__slot;
    __Vtask_regenx_tb__DOT__set_fault__649__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__649__kind;
    __Vtask_regenx_tb__DOT__set_fault__649__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__649__row;
    __Vtask_regenx_tb__DOT__set_fault__649__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__649__bitn;
    __Vtask_regenx_tb__DOT__set_fault__649__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__650__slot;
    __Vtask_regenx_tb__DOT__set_fault__650__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__650__kind;
    __Vtask_regenx_tb__DOT__set_fault__650__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__650__row;
    __Vtask_regenx_tb__DOT__set_fault__650__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__650__bitn;
    __Vtask_regenx_tb__DOT__set_fault__650__bitn = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__651__w;
    __Vtask_regenx_tb__DOT__host_op__651__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__651__a;
    __Vtask_regenx_tb__DOT__host_op__651__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__651__d;
    __Vtask_regenx_tb__DOT__host_op__651__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__651__guard;
    __Vtask_regenx_tb__DOT__host_op__651__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__652__ok;
    __Vtask_regenx_tb__DOT__chk__652__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__652__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__653__ok;
    __Vtask_regenx_tb__DOT__chk__653__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__653__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__654__ok;
    __Vtask_regenx_tb__DOT__chk__654__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__654__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__656__n;
    __Vtask_regenx_tb__DOT__tick__656__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__657__ok;
    __Vtask_regenx_tb__DOT__chk__657__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__657__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__658__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__658__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__658__a;
    __Vfunc_regenx_tb__DOT__stat__658__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__661__guard;
    __Vtask_regenx_tb__DOT__boot__661__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__662__cycles;
    __Vtask_regenx_tb__DOT__do_reset__662__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__663__n;
    __Vtask_regenx_tb__DOT__tick__663__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__664__n;
    __Vtask_regenx_tb__DOT__tick__664__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__665__ok;
    __Vtask_regenx_tb__DOT__chk__665__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__665__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__667__n;
    __Vtask_regenx_tb__DOT__tick__667__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__669__w;
    __Vtask_regenx_tb__DOT__host_op__669__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__669__a;
    __Vtask_regenx_tb__DOT__host_op__669__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__669__d;
    __Vtask_regenx_tb__DOT__host_op__669__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__669__guard;
    __Vtask_regenx_tb__DOT__host_op__669__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__670__ok;
    __Vtask_regenx_tb__DOT__chk__670__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__670__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__671__ok;
    __Vtask_regenx_tb__DOT__chk__671__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__671__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__672__w;
    __Vtask_regenx_tb__DOT__host_op__672__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__672__a;
    __Vtask_regenx_tb__DOT__host_op__672__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__672__d;
    __Vtask_regenx_tb__DOT__host_op__672__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__672__guard;
    __Vtask_regenx_tb__DOT__host_op__672__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__673__ok;
    __Vtask_regenx_tb__DOT__chk__673__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__673__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__674__ok;
    __Vtask_regenx_tb__DOT__chk__674__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__674__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__675__slot;
    __Vtask_regenx_tb__DOT__set_fault__675__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__675__kind;
    __Vtask_regenx_tb__DOT__set_fault__675__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__675__row;
    __Vtask_regenx_tb__DOT__set_fault__675__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__675__bitn;
    __Vtask_regenx_tb__DOT__set_fault__675__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__676__slot;
    __Vtask_regenx_tb__DOT__set_fault__676__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__676__kind;
    __Vtask_regenx_tb__DOT__set_fault__676__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__676__row;
    __Vtask_regenx_tb__DOT__set_fault__676__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__676__bitn;
    __Vtask_regenx_tb__DOT__set_fault__676__bitn = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__677__w;
    __Vtask_regenx_tb__DOT__host_op__677__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__677__a;
    __Vtask_regenx_tb__DOT__host_op__677__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__677__d;
    __Vtask_regenx_tb__DOT__host_op__677__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__677__guard;
    __Vtask_regenx_tb__DOT__host_op__677__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__678__ok;
    __Vtask_regenx_tb__DOT__chk__678__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__678__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__679__ok;
    __Vtask_regenx_tb__DOT__chk__679__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__679__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__680__ok;
    __Vtask_regenx_tb__DOT__chk__680__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__680__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__681__n;
    __Vtask_regenx_tb__DOT__tick__681__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__682__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__682__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__682__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__682__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__683__n;
    __Vtask_regenx_tb__DOT__tick__683__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__684__n;
    __Vtask_regenx_tb__DOT__tick__684__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__685__ok;
    __Vtask_regenx_tb__DOT__chk__685__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__685__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__687__n;
    __Vtask_regenx_tb__DOT__tick__687__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__688__ok;
    __Vtask_regenx_tb__DOT__chk__688__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__688__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__689__ok;
    __Vtask_regenx_tb__DOT__chk__689__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__689__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__690__ok;
    __Vtask_regenx_tb__DOT__chk__690__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__690__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__691__ok;
    __Vtask_regenx_tb__DOT__chk__691__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__691__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__692__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__692__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__692__a;
    __Vfunc_regenx_tb__DOT__stat__692__a = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__693__ok;
    __Vtask_regenx_tb__DOT__chk__693__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__693__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__694__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__694__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__694__a;
    __Vfunc_regenx_tb__DOT__stat__694__a = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__695__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__695__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__695__a;
    __Vfunc_regenx_tb__DOT__stat__695__a = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__696__ok;
    __Vtask_regenx_tb__DOT__chk__696__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__696__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__697__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__697__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__697__a;
    __Vfunc_regenx_tb__DOT__stat__697__a = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__698__w;
    __Vtask_regenx_tb__DOT__host_op__698__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__698__a;
    __Vtask_regenx_tb__DOT__host_op__698__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__698__d;
    __Vtask_regenx_tb__DOT__host_op__698__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__698__guard;
    __Vtask_regenx_tb__DOT__host_op__698__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__699__ok;
    __Vtask_regenx_tb__DOT__chk__699__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__699__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__700__ok;
    __Vtask_regenx_tb__DOT__chk__700__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__700__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__701__ok;
    __Vtask_regenx_tb__DOT__chk__701__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__701__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__702__w;
    __Vtask_regenx_tb__DOT__host_op__702__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__702__a;
    __Vtask_regenx_tb__DOT__host_op__702__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__702__d;
    __Vtask_regenx_tb__DOT__host_op__702__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__702__guard;
    __Vtask_regenx_tb__DOT__host_op__702__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__703__ok;
    __Vtask_regenx_tb__DOT__chk__703__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__703__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__704__ok;
    __Vtask_regenx_tb__DOT__chk__704__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__704__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__705__ok;
    __Vtask_regenx_tb__DOT__chk__705__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__705__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__706__w;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__706__a;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__706__d;
    __Vtask_regenx_tb__DOT__host_op__706__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__706__guard;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__707__ok;
    __Vtask_regenx_tb__DOT__chk__707__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__707__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__708__ok;
    __Vtask_regenx_tb__DOT__chk__708__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__708__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__709__ok;
    __Vtask_regenx_tb__DOT__chk__709__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__709__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__711__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__711__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__711__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__711__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__712__n;
    __Vtask_regenx_tb__DOT__tick__712__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__713__n;
    __Vtask_regenx_tb__DOT__tick__713__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__714__ok;
    __Vtask_regenx_tb__DOT__chk__714__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__714__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__716__n;
    __Vtask_regenx_tb__DOT__tick__716__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__717__ok;
    __Vtask_regenx_tb__DOT__chk__717__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__717__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__719__n;
    __Vtask_regenx_tb__DOT__tick__719__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__720__ok;
    __Vtask_regenx_tb__DOT__chk__720__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__720__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__721__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__721__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__721__a;
    __Vfunc_regenx_tb__DOT__stat__721__a = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__722__ok;
    __Vtask_regenx_tb__DOT__chk__722__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__722__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__724__guard;
    __Vtask_regenx_tb__DOT__boot__724__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__725__cycles;
    __Vtask_regenx_tb__DOT__do_reset__725__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__726__n;
    __Vtask_regenx_tb__DOT__tick__726__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__727__n;
    __Vtask_regenx_tb__DOT__tick__727__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__728__ok;
    __Vtask_regenx_tb__DOT__chk__728__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__728__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__730__n;
    __Vtask_regenx_tb__DOT__tick__730__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__731__ok;
    __Vtask_regenx_tb__DOT__chk__731__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__731__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__733__guard;
    __Vtask_regenx_tb__DOT__boot__733__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__734__cycles;
    __Vtask_regenx_tb__DOT__do_reset__734__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__735__n;
    __Vtask_regenx_tb__DOT__tick__735__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__736__n;
    __Vtask_regenx_tb__DOT__tick__736__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__737__ok;
    __Vtask_regenx_tb__DOT__chk__737__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__737__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__739__n;
    __Vtask_regenx_tb__DOT__tick__739__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__741__w;
    __Vtask_regenx_tb__DOT__host_op__741__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__741__a;
    __Vtask_regenx_tb__DOT__host_op__741__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__741__d;
    __Vtask_regenx_tb__DOT__host_op__741__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__741__guard;
    __Vtask_regenx_tb__DOT__host_op__741__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__742__ok;
    __Vtask_regenx_tb__DOT__chk__742__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__742__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__743__ok;
    __Vtask_regenx_tb__DOT__chk__743__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__743__what;
    // Body
    while (((((IData)(vlSelf->regenx_tb__DOT__scrub_busy) 
              | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__round_on)) 
             | (IData)(vlSelf->regenx_tb__DOT__dut__DOT__u_scrub__DOT__hint_pend)) 
            & VL_LTS_III(32, vlSelf->__Vtask_regenx_tb__DOT__wait_scrub_idle__620__g, vlSelf->__Vtask_regenx_tb__DOT__wait_scrub_idle__620__maxc))) {
        __Vtask_regenx_tb__DOT__tick__622__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__622__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        vlSelf->__Vtask_regenx_tb__DOT__wait_scrub_idle__620__g 
            = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__wait_scrub_idle__620__g);
    }
    __Vtask_regenx_tb__DOT__chk__623__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__623__ok = VL_LTS_III(32, vlSelf->__Vtask_regenx_tb__DOT__wait_scrub_idle__620__g, vlSelf->__Vtask_regenx_tb__DOT__wait_scrub_idle__620__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__623__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__623__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__625__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__625__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__626__what = std::string{"hint healed row 9 without patrol"};
    __Vtask_regenx_tb__DOT__chk__626__ok = (0x10U == 
                                            (0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                >> 0xdU)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__626__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__626__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__627__what = std::string{"ecc counter"};
    __Vtask_regenx_tb__DOT__chk__627__ok = (1U <= (0xffffU 
                                                   & ([&]() {
                    __Vfunc_regenx_tb__DOT__stat__628__a = 6U;
                    __Vfunc_regenx_tb__DOT__stat__628__Vfuncout 
                        = vlSelf->regenx_tb__DOT__regmirror
                        [(0xfU & __Vfunc_regenx_tb__DOT__stat__628__a)];
                }(), __Vfunc_regenx_tb__DOT__stat__628__Vfuncout)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__627__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__627__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__629__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__629__a = 9U;
    __Vtask_regenx_tb__DOT__host_op__629__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__629__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__629__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__629__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__629__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__629__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__629__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__629__guard);
    }
    __Vtask_regenx_tb__DOT__chk__630__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__630__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__629__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__630__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__630__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__629__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__629__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__629__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__629__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__631__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__631__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__629__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__631__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__631__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__632__what = std::string{"row 9 clean after heal"};
    __Vtask_regenx_tb__DOT__chk__632__ok = (((0U == (IData)(vlSelf->regenx_tb__DOT__g_data)) 
                                             & (~ (IData)(regenx_tb__DOT__g_fix))) 
                                            & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__632__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__632__what));
        }
    }
    __Vtask_regenx_tb__DOT__verify_all__633__tag = 
        std::string{"hint"};
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 0 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 1 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [1U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [1U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 2 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [2U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [2U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 3 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [3U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [3U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 4 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [4U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [4U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 5 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [5U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [5U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 6 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [6U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [6U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 7 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [7U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [7U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 8 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [8U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [8U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 9 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [9U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [9U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 10 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xaU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xaU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 11 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xbU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xbU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 12 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xcU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xcU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 13 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xdU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xdU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 14 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xeU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xeU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        __Vtask_regenx_tb__DOT__host_op__634__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__634__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__634__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__634__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__634__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
        }
        __Vtask_regenx_tb__DOT__chk__635__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__635__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__635__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__635__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__634__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__634__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__634__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__636__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__636__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__634__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__636__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__636__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__637__what = VL_SFORMATF_NX("%@: row 15 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__633__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xfU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__637__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xfU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__637__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__637__what));
            }
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
    __Vtask_regenx_tb__DOT__boot__639__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__640__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__641__n = __Vtask_regenx_tb__DOT__do_reset__640__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__641__n;
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
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__639__guard))) {
        __Vtask_regenx_tb__DOT__tick__642__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__642__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__boot__639__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__639__guard);
    }
    __Vtask_regenx_tb__DOT__chk__643__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__643__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__643__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__643__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__645__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__645__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__shadow[4U] = 0U;
    __Vtask_regenx_tb__DOT__host_op__646__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__646__a = 4U;
    __Vtask_regenx_tb__DOT__host_op__646__w = 1U;
    __Vtask_regenx_tb__DOT__host_op__646__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__646__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__646__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__646__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__646__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__646__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__646__guard);
    }
    __Vtask_regenx_tb__DOT__chk__647__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__647__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__646__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__647__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__647__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__646__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__646__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__646__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__646__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__648__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__648__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__646__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__648__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__648__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__set_fault__649__bitn = 1U;
    __Vtask_regenx_tb__DOT__set_fault__649__row = 4U;
    __Vtask_regenx_tb__DOT__set_fault__649__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__649__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__649__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__649__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__649__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__649__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__649__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__649__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__649__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__649__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__649__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__649__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__649__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__649__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__649__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__649__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__649__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__649__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__649__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__649__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__649__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__649__slot)))));
    }
    __Vtask_regenx_tb__DOT__set_fault__650__bitn = 6U;
    __Vtask_regenx_tb__DOT__set_fault__650__row = 4U;
    __Vtask_regenx_tb__DOT__set_fault__650__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__650__slot = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__650__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__650__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__650__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__650__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__650__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__650__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__650__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__650__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__650__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__650__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__650__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__650__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__650__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__650__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__650__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__650__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__650__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__650__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__650__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__650__slot)))));
    }
    __Vtask_regenx_tb__DOT__host_op__651__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__651__a = 4U;
    __Vtask_regenx_tb__DOT__host_op__651__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__651__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__651__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__651__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__651__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__651__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__651__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__651__guard);
    }
    __Vtask_regenx_tb__DOT__chk__652__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__652__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__651__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__652__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__652__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__651__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__651__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__651__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__651__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__653__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__653__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__651__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__653__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__653__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__654__what = std::string{"double error must raise rsp_error"};
    __Vtask_regenx_tb__DOT__chk__654__ok = vlSelf->regenx_tb__DOT__g_err;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__654__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__654__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__656__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__656__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__657__what = std::string{"uncorrectable counter"};
    __Vtask_regenx_tb__DOT__chk__657__ok = (1U <= (0xffffU 
                                                   & VL_SHIFTR_III(32,32,32, 
                                                                   ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__658__a = 6U;
                        __Vfunc_regenx_tb__DOT__stat__658__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__658__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__658__Vfuncout), 0x10U)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__657__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__657__what));
        }
    }
    vlSelf->regenx_tb__DOT__phase = std::string{"lost"};
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
    __Vtask_regenx_tb__DOT__boot__661__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__662__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__663__n = __Vtask_regenx_tb__DOT__do_reset__662__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__663__n;
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
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__661__guard))) {
        __Vtask_regenx_tb__DOT__tick__664__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__664__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__boot__661__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__661__guard);
    }
    __Vtask_regenx_tb__DOT__chk__665__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__665__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__665__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__665__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__667__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__667__n;
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__669__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__669__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__669__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__669__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__669__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__669__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
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
        __Vtask_regenx_tb__DOT__host_op__669__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__669__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__669__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__669__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__669__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__669__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
        }
        __Vtask_regenx_tb__DOT__chk__670__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__670__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__670__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__670__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__669__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__669__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__669__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__671__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__671__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__669__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__671__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__671__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    vlSelf->regenx_tb__DOT__shadow[4U] = 0U;
    __Vtask_regenx_tb__DOT__host_op__672__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__672__a = 4U;
    __Vtask_regenx_tb__DOT__host_op__672__w = 1U;
    __Vtask_regenx_tb__DOT__host_op__672__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__672__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__672__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__672__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__672__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__672__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__672__guard);
    }
    __Vtask_regenx_tb__DOT__chk__673__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__673__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__672__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__673__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__673__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__672__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__672__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__672__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__672__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__674__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__674__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__672__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__674__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__674__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__set_fault__675__bitn = 1U;
    __Vtask_regenx_tb__DOT__set_fault__675__row = 4U;
    __Vtask_regenx_tb__DOT__set_fault__675__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__675__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__675__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__675__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__675__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__675__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__675__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__675__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__675__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__675__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__675__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__675__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__675__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__675__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__675__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__675__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__675__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__675__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__675__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__675__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__675__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__675__slot)))));
    }
    __Vtask_regenx_tb__DOT__set_fault__676__bitn = 6U;
    __Vtask_regenx_tb__DOT__set_fault__676__row = 4U;
    __Vtask_regenx_tb__DOT__set_fault__676__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__676__slot = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__676__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__676__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__676__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__676__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__676__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__676__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__676__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__676__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__676__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__676__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__676__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__676__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__676__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__676__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__676__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__676__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__676__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__676__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__676__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__676__slot)))));
    }
    __Vtask_regenx_tb__DOT__host_op__677__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__677__a = 4U;
    __Vtask_regenx_tb__DOT__host_op__677__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__677__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__677__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__677__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__677__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__677__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__677__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__677__guard);
    }
    __Vtask_regenx_tb__DOT__chk__678__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__678__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__677__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__678__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__678__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__677__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__677__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__677__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__677__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__679__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__679__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__677__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__679__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__679__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__680__what = std::string{"double error read must error"};
    __Vtask_regenx_tb__DOT__chk__680__ok = vlSelf->regenx_tb__DOT__g_err;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__680__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__680__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__681__n = 0x12cU;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__681__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__wait_scrub_idle__682__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__682__g = 0U;
    __Vtask_regenx_tb__DOT__tick__683__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__683__n;
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
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__682__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__682__maxc))) {
        __Vtask_regenx_tb__DOT__tick__684__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__684__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__682__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__682__g);
    }
    __Vtask_regenx_tb__DOT__chk__685__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__685__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__682__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__682__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__685__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__685__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__687__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__687__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__688__what = std::string{"lost row must become unavailable"};
    __Vtask_regenx_tb__DOT__chk__688__ok = (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                  >> 4U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__688__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__688__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__689__what = std::string{"data_lost must be sticky-set"};
    __Vtask_regenx_tb__DOT__chk__689__ok = vlSelf->regenx_tb__DOT__data_lost;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__689__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__689__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__690__what = std::string{"lost data must not be migrated into a spare"};
    __Vtask_regenx_tb__DOT__chk__690__ok = ((IData)(
                                                    ((0x400000U 
                                                      == 
                                                      (0x1f00000U 
                                                       & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U])) 
                                                     & (0U 
                                                        == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt)))) 
                                            & (0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__690__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__690__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__691__what = std::string{"STATUS.data_lost"};
    __Vtask_regenx_tb__DOT__chk__691__ok = (1U == (1U 
                                                   & VL_SHIFTR_III(32,32,32, 
                                                                   ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__692__a = 0U;
                        __Vfunc_regenx_tb__DOT__stat__692__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__692__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__692__Vfuncout), 6U)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__691__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__691__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__693__what = VL_SFORMATF_NX("lost map %x",
                                                            32,
                                                            (0xffffU 
                                                             & ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__694__a = 8U;
                        __Vfunc_regenx_tb__DOT__stat__694__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__694__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__694__Vfuncout))) ;
    __Vtask_regenx_tb__DOT__chk__693__ok = (0x10U == 
                                            (0xffffU 
                                             & ([&]() {
                    __Vfunc_regenx_tb__DOT__stat__695__a = 8U;
                    __Vfunc_regenx_tb__DOT__stat__695__Vfuncout 
                        = vlSelf->regenx_tb__DOT__regmirror
                        [(0xfU & __Vfunc_regenx_tb__DOT__stat__695__a)];
                }(), __Vfunc_regenx_tb__DOT__stat__695__Vfuncout)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__693__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__693__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__696__what = std::string{"loss counter"};
    __Vtask_regenx_tb__DOT__chk__696__ok = (1U == (0xffU 
                                                   & VL_SHIFTR_III(32,32,32, 
                                                                   ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__697__a = 8U;
                        __Vfunc_regenx_tb__DOT__stat__697__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__697__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__697__Vfuncout), 0x10U)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__696__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__696__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__698__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__698__a = 4U;
    __Vtask_regenx_tb__DOT__host_op__698__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__698__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__698__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__698__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__698__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__698__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__698__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__698__guard);
    }
    __Vtask_regenx_tb__DOT__chk__699__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__699__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__698__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__699__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__699__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__698__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__698__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__698__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__698__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__700__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__700__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__698__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__700__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__700__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__701__what = std::string{"later read of lost row errors"};
    __Vtask_regenx_tb__DOT__chk__701__ok = vlSelf->regenx_tb__DOT__g_err;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__701__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__701__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__702__d = 0x77U;
    __Vtask_regenx_tb__DOT__host_op__702__a = 4U;
    __Vtask_regenx_tb__DOT__host_op__702__w = 1U;
    __Vtask_regenx_tb__DOT__host_op__702__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__702__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__702__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__702__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__702__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__702__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__702__guard);
    }
    __Vtask_regenx_tb__DOT__chk__703__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__703__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__702__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__703__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__703__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__702__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__702__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__702__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__702__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__704__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__704__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__702__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__704__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__704__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__705__what = std::string{"later write of lost row errors"};
    __Vtask_regenx_tb__DOT__chk__705__ok = vlSelf->regenx_tb__DOT__g_err;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__705__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__705__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 0 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [0U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 1U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 1 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [1U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 2U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 2 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [2U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 3U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 3 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [3U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 5U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 5 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [5U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 6U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 6 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [6U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 7U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 7 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [7U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 8U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 8 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [8U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 9U;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 9 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [9U]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0xaU;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 10 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [0xaU]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0xbU;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 11 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [0xbU]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0xcU;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 12 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [0xcU]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0xdU;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 13 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [0xdU]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0xeU;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 14 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [0xeU]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
    }
    __Vtask_regenx_tb__DOT__host_op__706__d = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__a = 0xfU;
    __Vtask_regenx_tb__DOT__host_op__706__w = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       182);
    vlSelf->regenx_tb__DOT__req_valid = 1U;
    vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__706__w;
    vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__706__a);
    vlSelf->regenx_tb__DOT__req_wdata = (0xffU & __Vtask_regenx_tb__DOT__host_op__706__d);
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       184);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           185);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
    }
    __Vtask_regenx_tb__DOT__chk__707__what = std::string{"req_ready stuck low"};
    __Vtask_regenx_tb__DOT__chk__707__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__707__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__707__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_lat = 0U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       188);
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    __Vtask_regenx_tb__DOT__host_op__706__guard = 0U;
    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       191);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard))) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           192);
        __Vtask_regenx_tb__DOT__host_op__706__guard 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__706__guard);
        vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                         + vlSelf->regenx_tb__DOT__g_lat);
    }
    __Vtask_regenx_tb__DOT__chk__708__what = std::string{"no response"};
    __Vtask_regenx_tb__DOT__chk__708__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__706__guard);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__708__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__708__what));
        }
    }
    vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    __Vtask_regenx_tb__DOT__chk__709__what = std::string{"lost: neighbour row 15 disturbed"};
    __Vtask_regenx_tb__DOT__chk__709__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                               == vlSelf->regenx_tb__DOT__shadow
                                               [0xfU]));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__709__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__709__what));
        }
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
    __Vtask_regenx_tb__DOT__wait_scrub_idle__711__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__711__g = 0U;
    __Vtask_regenx_tb__DOT__tick__712__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__712__n;
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
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__711__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__711__maxc))) {
        __Vtask_regenx_tb__DOT__tick__713__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__713__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__711__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__711__g);
    }
    __Vtask_regenx_tb__DOT__chk__714__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__714__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__711__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__711__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__714__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__714__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__716__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__716__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__717__what = std::string{"patrol changed lost state"};
    __Vtask_regenx_tb__DOT__chk__717__ok = ((IData)(vlSelf->regenx_tb__DOT__data_lost) 
                                            & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                               >> 4U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__717__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__717__what));
        }
    }
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       608);
    vlSelf->regenx_tb__DOT__status_clear = 1U;
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       608);
    vlSelf->regenx_tb__DOT__status_clear = 0U;
    __Vtask_regenx_tb__DOT__tick__719__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__719__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__720__what = std::string{"status_clear did not clear"};
    __Vtask_regenx_tb__DOT__chk__720__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__data_lost)) 
                                            & (0U == 
                                               (0xffffU 
                                                & ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__721__a = 8U;
                        __Vfunc_regenx_tb__DOT__stat__721__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__721__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__721__Vfuncout))));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__720__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__720__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__722__what = std::string{"status_clear must not resurrect the row"};
    __Vtask_regenx_tb__DOT__chk__722__ok = (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                  >> 4U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__722__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__722__what));
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
    __Vtask_regenx_tb__DOT__boot__724__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__725__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__726__n = __Vtask_regenx_tb__DOT__do_reset__725__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__726__n;
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
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__724__guard))) {
        __Vtask_regenx_tb__DOT__tick__727__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__727__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__boot__724__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__724__guard);
    }
    __Vtask_regenx_tb__DOT__chk__728__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__728__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__728__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__728__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__730__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__730__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__731__what = std::string{"reset must clear data_lost"};
    __Vtask_regenx_tb__DOT__chk__731__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__data_lost)) 
                                            & (0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__731__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__731__what));
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
    __Vtask_regenx_tb__DOT__boot__733__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__734__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__735__n = __Vtask_regenx_tb__DOT__do_reset__734__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__735__n;
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
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__733__guard))) {
        __Vtask_regenx_tb__DOT__tick__736__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__736__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__boot__733__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__733__guard);
    }
    __Vtask_regenx_tb__DOT__chk__737__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__737__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__737__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__737__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__739__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__739__n;
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__741__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__741__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__741__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__741__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__741__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__741__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
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
        __Vtask_regenx_tb__DOT__host_op__741__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__741__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__741__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__741__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__741__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__741__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
        }
        __Vtask_regenx_tb__DOT__chk__742__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__742__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__742__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__742__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__741__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__741__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__741__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__743__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__743__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__741__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__743__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__743__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__bitn = 1U;
    vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__row = 6U;
    vlSelf->__Vtask_regenx_tb__DOT__set_fault__744__kind = 2U;
}
