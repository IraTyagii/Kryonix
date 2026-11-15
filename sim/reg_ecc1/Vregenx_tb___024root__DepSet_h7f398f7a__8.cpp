// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__12(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__12\n"); );
    // Init
    CData/*0:0*/ regenx_tb__DOT__g_fix;
    regenx_tb__DOT__g_fix = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__460__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__460__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__460__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__460__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__461__n;
    __Vtask_regenx_tb__DOT__tick__461__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__462__n;
    __Vtask_regenx_tb__DOT__tick__462__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__463__ok;
    __Vtask_regenx_tb__DOT__chk__463__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__463__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__465__n;
    __Vtask_regenx_tb__DOT__tick__465__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__466__ok;
    __Vtask_regenx_tb__DOT__chk__466__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__466__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__467__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__467__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__467__a;
    __Vfunc_regenx_tb__DOT__stat__467__a = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__468__ok;
    __Vtask_regenx_tb__DOT__chk__468__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__468__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__469__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__469__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__469__a;
    __Vfunc_regenx_tb__DOT__stat__469__a = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__470__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__470__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__470__a;
    __Vfunc_regenx_tb__DOT__stat__470__a = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__471__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__471__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__471__a;
    __Vfunc_regenx_tb__DOT__stat__471__a = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__472__ok;
    __Vtask_regenx_tb__DOT__chk__472__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__472__what;
    std::string __Vtask_regenx_tb__DOT__verify_all__473__tag;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__474__w;
    __Vtask_regenx_tb__DOT__host_op__474__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__474__a;
    __Vtask_regenx_tb__DOT__host_op__474__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__474__d;
    __Vtask_regenx_tb__DOT__host_op__474__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__474__guard;
    __Vtask_regenx_tb__DOT__host_op__474__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__475__ok;
    __Vtask_regenx_tb__DOT__chk__475__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__475__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__476__ok;
    __Vtask_regenx_tb__DOT__chk__476__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__476__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__477__ok;
    __Vtask_regenx_tb__DOT__chk__477__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__477__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__479__w;
    __Vtask_regenx_tb__DOT__host_op__479__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__479__a;
    __Vtask_regenx_tb__DOT__host_op__479__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__479__d;
    __Vtask_regenx_tb__DOT__host_op__479__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__479__guard;
    __Vtask_regenx_tb__DOT__host_op__479__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__480__ok;
    __Vtask_regenx_tb__DOT__chk__480__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__480__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__481__ok;
    __Vtask_regenx_tb__DOT__chk__481__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__481__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__482__slot;
    __Vtask_regenx_tb__DOT__set_fault__482__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__482__kind;
    __Vtask_regenx_tb__DOT__set_fault__482__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__482__row;
    __Vtask_regenx_tb__DOT__set_fault__482__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__482__bitn;
    __Vtask_regenx_tb__DOT__set_fault__482__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__484__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__484__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__484__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__484__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__485__n;
    __Vtask_regenx_tb__DOT__tick__485__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__486__n;
    __Vtask_regenx_tb__DOT__tick__486__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__487__ok;
    __Vtask_regenx_tb__DOT__chk__487__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__487__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__489__n;
    __Vtask_regenx_tb__DOT__tick__489__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__490__ok;
    __Vtask_regenx_tb__DOT__chk__490__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__490__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__491__ok;
    __Vtask_regenx_tb__DOT__chk__491__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__491__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__492__ok;
    __Vtask_regenx_tb__DOT__chk__492__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__492__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__493__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__493__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__493__a;
    __Vfunc_regenx_tb__DOT__stat__493__a = 0;
    std::string __Vtask_regenx_tb__DOT__verify_all__494__tag;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__495__w;
    __Vtask_regenx_tb__DOT__host_op__495__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__495__a;
    __Vtask_regenx_tb__DOT__host_op__495__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__495__d;
    __Vtask_regenx_tb__DOT__host_op__495__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__495__guard;
    __Vtask_regenx_tb__DOT__host_op__495__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__496__ok;
    __Vtask_regenx_tb__DOT__chk__496__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__496__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__497__ok;
    __Vtask_regenx_tb__DOT__chk__497__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__497__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__498__ok;
    __Vtask_regenx_tb__DOT__chk__498__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__498__what;
    // Body
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[3U];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 3U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[4U];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 4U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[5U];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 5U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[6U];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 6U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[7U];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 7U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[8U];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 8U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[9U];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 9U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[0xaU];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 0xaU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[0xbU];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 0xbU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[0xcU];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 0xcU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[0xdU];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 0xdU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[0xeU];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 0xeU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
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
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d 
            = vlSelf->regenx_tb__DOT__shadow[0xfU];
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a = 0xfU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w = 1U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__456__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__456__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__457__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__457__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__456__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__458__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__458__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    vlSelf->regenx_tb__DOT__scrub_en = 1U;
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
    __Vtask_regenx_tb__DOT__wait_scrub_idle__460__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__460__g = 0U;
    __Vtask_regenx_tb__DOT__tick__461__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__461__n;
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
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__460__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__460__maxc))) {
        __Vtask_regenx_tb__DOT__tick__462__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__462__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__460__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__460__g);
    }
    __Vtask_regenx_tb__DOT__chk__463__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__463__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__460__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__460__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__463__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__463__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__465__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__465__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__466__what = std::string{"one round counted"};
    __Vtask_regenx_tb__DOT__chk__466__ok = (1U == VL_SHIFTRS_III(32,32,32, 
                                                                 ([&]() {
                    __Vfunc_regenx_tb__DOT__stat__467__a = 7U;
                    __Vfunc_regenx_tb__DOT__stat__467__Vfuncout 
                        = vlSelf->regenx_tb__DOT__regmirror
                        [(0xfU & __Vfunc_regenx_tb__DOT__stat__467__a)];
                }(), __Vfunc_regenx_tb__DOT__stat__467__Vfuncout), 0x18U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__466__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__466__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__468__what = VL_SFORMATF_NX("rows checked %0#",
                                                            32,
                                                            (0xffU 
                                                             & ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__469__a = 7U;
                        __Vfunc_regenx_tb__DOT__stat__469__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__469__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__469__Vfuncout))) ;
    __Vtask_regenx_tb__DOT__chk__468__ok = ((0x12U 
                                             == (0xffU 
                                                 & ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__470__a = 7U;
                        __Vfunc_regenx_tb__DOT__stat__470__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__470__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__470__Vfuncout))) 
                                            | (0x12U 
                                               == (0xffU 
                                                   & ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__471__a = 7U;
                        __Vfunc_regenx_tb__DOT__stat__471__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__471__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__471__Vfuncout))));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__468__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__468__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__472__what = std::string{"clean patrol changed state"};
    __Vtask_regenx_tb__DOT__chk__472__ok = ((0U == vlSelf->regenx_tb__DOT__dut__DOT__bad_phys) 
                                            & (0U == (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__472__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__472__what));
        }
    }
    __Vtask_regenx_tb__DOT__verify_all__473__tag = 
        std::string{"clean patrol"};
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 0 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 1 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [1U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [1U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 2 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [2U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [2U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 3 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [3U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [3U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 4 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [4U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [4U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 5 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [5U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [5U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 6 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [6U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [6U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 7 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [7U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [7U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 8 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [8U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [8U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 9 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [9U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [9U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 10 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xaU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xaU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 11 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xbU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xbU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 12 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xcU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xcU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 13 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xdU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xdU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 14 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xeU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xeU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        __Vtask_regenx_tb__DOT__host_op__474__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__474__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__474__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__474__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__474__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
        }
        __Vtask_regenx_tb__DOT__chk__475__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__475__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__475__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__475__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__474__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__474__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__474__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__476__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__476__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__474__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__477__what = VL_SFORMATF_NX("%@: row 15 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__473__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xfU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__477__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xfU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__477__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__477__what));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__479__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__479__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__479__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__479__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__479__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__479__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
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
        __Vtask_regenx_tb__DOT__host_op__479__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__479__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__479__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__479__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__479__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__479__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
        }
        __Vtask_regenx_tb__DOT__chk__480__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__480__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__480__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__480__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__479__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__479__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__479__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__481__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__481__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__479__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__481__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__481__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    __Vtask_regenx_tb__DOT__set_fault__482__bitn = 3U;
    __Vtask_regenx_tb__DOT__set_fault__482__row = 5U;
    __Vtask_regenx_tb__DOT__set_fault__482__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__482__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__482__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__482__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__482__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__482__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__482__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__482__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__482__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__482__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__482__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__482__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__482__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__482__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__482__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__482__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__482__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__482__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__482__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__482__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__482__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__482__slot)))));
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
    __Vtask_regenx_tb__DOT__wait_scrub_idle__484__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__484__g = 0U;
    __Vtask_regenx_tb__DOT__tick__485__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__485__n;
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
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__484__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__484__maxc))) {
        __Vtask_regenx_tb__DOT__tick__486__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__486__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__484__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__484__g);
    }
    __Vtask_regenx_tb__DOT__chk__487__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__487__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__484__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__484__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__487__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__487__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__489__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__489__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__490__what = VL_SFORMATF_NX("row5 migrated to %0#",
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                >> 0x19U))) ;
    __Vtask_regenx_tb__DOT__chk__490__ok = (0x10U == 
                                            (0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 0x19U)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__490__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__490__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__491__what = std::string{"row5 logged"};
    __Vtask_regenx_tb__DOT__chk__491__ok = ((vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                             >> 5U) 
                                            & (1U == (IData)(vlSelf->regenx_tb__DOT__fault_count)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__491__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__491__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__492__what = std::string{"one migration"};
    __Vtask_regenx_tb__DOT__chk__492__ok = (1U == (0xffU 
                                                   & VL_SHIFTR_III(32,32,32, 
                                                                   ([&]() {
                        __Vfunc_regenx_tb__DOT__stat__493__a = 7U;
                        __Vfunc_regenx_tb__DOT__stat__493__Vfuncout 
                            = vlSelf->regenx_tb__DOT__regmirror
                            [(0xfU & __Vfunc_regenx_tb__DOT__stat__493__a)];
                    }(), __Vfunc_regenx_tb__DOT__stat__493__Vfuncout), 0x10U)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
        }
    }
    __Vtask_regenx_tb__DOT__verify_all__494__tag = 
        std::string{"migrate 1"};
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 0 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 1 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [1U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [1U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 2 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [2U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [2U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 3 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [3U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [3U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 4 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [4U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [4U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 5 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [5U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [5U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 6 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [6U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [6U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 7 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [7U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [7U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 8 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [8U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [8U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 9 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [9U],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [9U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 10 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xaU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xaU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 11 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xbU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xbU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 12 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xcU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xcU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 13 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xdU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xdU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 14 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xeU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xeU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        __Vtask_regenx_tb__DOT__host_op__495__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__495__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__495__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__495__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__495__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
        }
        __Vtask_regenx_tb__DOT__chk__496__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__496__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__496__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__496__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__495__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__495__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__495__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__497__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__497__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__495__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__497__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__497__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__498__what = VL_SFORMATF_NX("%@: row 15 got %02x exp %02x err=%b",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__verify_all__494__tag),
                                                                8,
                                                                (IData)(vlSelf->regenx_tb__DOT__g_data),
                                                                8,
                                                                vlSelf->regenx_tb__DOT__shadow
                                                                [0xfU],
                                                                1,
                                                                vlSelf->regenx_tb__DOT__g_err) ;
        __Vtask_regenx_tb__DOT__chk__498__ok = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
                                                & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                                                   == 
                                                   vlSelf->regenx_tb__DOT__shadow
                                                   [0xfU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__498__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__498__what));
            }
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__sweep__499__rounds = 1U;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag = 
        std::string{"after migrate 1"};
    vlSelf->__Vtask_regenx_tb__DOT__sweep__499__unnamedblk16__DOT__k = 0U;
}

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__13(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__13\n"); );
    // Init
    CData/*0:0*/ regenx_tb__DOT__g_fix;
    regenx_tb__DOT__g_fix = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
    __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__500__w;
    __Vtask_regenx_tb__DOT__host_op__500__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__500__a;
    __Vtask_regenx_tb__DOT__host_op__500__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__500__d;
    __Vtask_regenx_tb__DOT__host_op__500__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__500__guard;
    __Vtask_regenx_tb__DOT__host_op__500__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__501__ok;
    __Vtask_regenx_tb__DOT__chk__501__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__501__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__502__ok;
    __Vtask_regenx_tb__DOT__chk__502__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__502__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__503__ok;
    __Vtask_regenx_tb__DOT__chk__503__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__503__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__504__w;
    __Vtask_regenx_tb__DOT__host_op__504__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__504__a;
    __Vtask_regenx_tb__DOT__host_op__504__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__504__d;
    __Vtask_regenx_tb__DOT__host_op__504__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__504__guard;
    __Vtask_regenx_tb__DOT__host_op__504__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__505__ok;
    __Vtask_regenx_tb__DOT__chk__505__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__505__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__506__ok;
    __Vtask_regenx_tb__DOT__chk__506__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__506__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__507__ok;
    __Vtask_regenx_tb__DOT__chk__507__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__507__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__508__ok;
    __Vtask_regenx_tb__DOT__chk__508__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__508__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__509__ok;
    __Vtask_regenx_tb__DOT__chk__509__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__509__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__510__ok;
    __Vtask_regenx_tb__DOT__chk__510__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__510__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__511__w;
    __Vtask_regenx_tb__DOT__host_op__511__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__511__a;
    __Vtask_regenx_tb__DOT__host_op__511__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__511__d;
    __Vtask_regenx_tb__DOT__host_op__511__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__511__guard;
    __Vtask_regenx_tb__DOT__host_op__511__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__512__ok;
    __Vtask_regenx_tb__DOT__chk__512__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__512__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__513__ok;
    __Vtask_regenx_tb__DOT__chk__513__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__513__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__514__w;
    __Vtask_regenx_tb__DOT__host_op__514__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__514__a;
    __Vtask_regenx_tb__DOT__host_op__514__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__514__d;
    __Vtask_regenx_tb__DOT__host_op__514__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__514__guard;
    __Vtask_regenx_tb__DOT__host_op__514__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__515__ok;
    __Vtask_regenx_tb__DOT__chk__515__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__515__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__516__ok;
    __Vtask_regenx_tb__DOT__chk__516__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__516__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__517__ok;
    __Vtask_regenx_tb__DOT__chk__517__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__517__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__518__w;
    __Vtask_regenx_tb__DOT__host_op__518__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__518__a;
    __Vtask_regenx_tb__DOT__host_op__518__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__518__d;
    __Vtask_regenx_tb__DOT__host_op__518__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__518__guard;
    __Vtask_regenx_tb__DOT__host_op__518__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__519__ok;
    __Vtask_regenx_tb__DOT__chk__519__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__519__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__520__ok;
    __Vtask_regenx_tb__DOT__chk__520__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__520__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__522__w;
    __Vtask_regenx_tb__DOT__host_op__522__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__522__a;
    __Vtask_regenx_tb__DOT__host_op__522__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__522__d;
    __Vtask_regenx_tb__DOT__host_op__522__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__522__guard;
    __Vtask_regenx_tb__DOT__host_op__522__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__523__ok;
    __Vtask_regenx_tb__DOT__chk__523__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__523__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__524__ok;
    __Vtask_regenx_tb__DOT__chk__524__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__524__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__525__slot;
    __Vtask_regenx_tb__DOT__set_fault__525__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__525__kind;
    __Vtask_regenx_tb__DOT__set_fault__525__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__525__row;
    __Vtask_regenx_tb__DOT__set_fault__525__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__525__bitn;
    __Vtask_regenx_tb__DOT__set_fault__525__bitn = 0;
    // Body
    while (VL_LTS_III(32, vlSelf->__Vtask_regenx_tb__DOT__sweep__499__unnamedblk16__DOT__k, vlSelf->__Vtask_regenx_tb__DOT__sweep__499__rounds)) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 0",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 1",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 1U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 2",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 2U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 3",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 3U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 4",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 4U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 5",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 5U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 6",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 6U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 7",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 7U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 8",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 8U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__500__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 9",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 9U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__500__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 10",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xaU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__500__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 11",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xbU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__500__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 12",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xcU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__500__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 13",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xdU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__500__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 14",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xeU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__500__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__500__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__500__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__500__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__500__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__500__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
        }
        __Vtask_regenx_tb__DOT__chk__501__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__501__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__501__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__501__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__500__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__500__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__500__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__502__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__502__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__500__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__502__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__502__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__503__what = VL_SFORMATF_NX("%@: write err flag row 15",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
        __Vtask_regenx_tb__DOT__chk__503__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xfU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x8000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 15 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 15",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 15 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xfU]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x4000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 14 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 14",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 14 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xeU]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x2000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 13 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 13",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 13 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xdU]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x1000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 12 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 12",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 12 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xcU]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x800U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 11 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 11",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 11 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xbU]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x400U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 10 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 10",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 10 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xaU]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x200U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 9 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 9",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 9 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [9U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x100U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 8 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 8",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 8 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [8U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x80U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 7 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 7",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 7 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [7U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x40U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 6 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 6",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 6 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [6U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x20U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 5 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 5",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 5 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [5U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x10U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 4 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 4",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 4 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [4U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 3 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 3",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 3 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [3U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 2 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 2",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 2 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [2U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 1 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 1",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 1 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [1U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__504__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__504__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__504__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__504__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
        }
        __Vtask_regenx_tb__DOT__chk__505__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__505__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__505__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__505__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__504__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__504__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__504__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__506__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__506__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__504__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__506__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__506__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__507__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 0 did not error",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__507__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__507__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__507__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__508__what 
                = VL_SFORMATF_NX("%@: unexpected error row 0",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag)) ;
            __Vtask_regenx_tb__DOT__chk__508__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__508__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__508__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__509__what 
                = VL_SFORMATF_NX("%@: row 0 read %02x expected %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0U]) ;
            __Vtask_regenx_tb__DOT__chk__509__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__509__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__509__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__510__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__510__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__510__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__510__what));
            }
        }
        vlSelf->__Vtask_regenx_tb__DOT__sweep__499__unnamedblk16__DOT__k 
            = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__sweep__499__unnamedblk16__DOT__k);
    }
    __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r = 0U;
    while (VL_GTS_III(32, 0x10U, __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r)) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                      >> (0xfU & __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r))))) {
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[0U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [0U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[0U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[1U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [1U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[1U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[2U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [2U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[2U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[3U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [3U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[3U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[4U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [4U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[4U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[5U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [5U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[5U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[6U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [6U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[6U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__511__d 
                = vlSelf->regenx_tb__DOT__pats[7U];
            __Vtask_regenx_tb__DOT__host_op__511__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__511__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__511__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__511__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__511__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
            }
            __Vtask_regenx_tb__DOT__chk__512__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__512__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__512__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__512__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__511__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__511__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__511__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__513__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__513__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__511__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__513__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__513__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__514__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__514__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__514__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__514__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__514__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
            }
            __Vtask_regenx_tb__DOT__chk__515__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__515__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__515__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__515__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__514__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__514__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__514__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__516__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__516__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__514__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__517__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(vlSelf->__Vtask_regenx_tb__DOT__sweep__499__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [7U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__517__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[7U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
                }
            }
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r)] = 0U;
            __Vtask_regenx_tb__DOT__host_op__518__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__518__a 
                = __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__518__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__518__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__518__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__518__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__518__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__518__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__518__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__518__guard);
            }
            __Vtask_regenx_tb__DOT__chk__519__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__519__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__518__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__519__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__519__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__518__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__518__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__518__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__518__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__520__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__520__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__518__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__520__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__520__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        }
        __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__499__unnamedblk19__DOT__r);
    }
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__522__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__522__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__522__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__522__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__522__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__522__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
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
        __Vtask_regenx_tb__DOT__host_op__522__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__522__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__522__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__522__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__522__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__522__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
        }
        __Vtask_regenx_tb__DOT__chk__523__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__523__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__522__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__522__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__522__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__524__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__524__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__522__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__524__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__524__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
    }
    __Vtask_regenx_tb__DOT__set_fault__525__bitn = 7U;
    __Vtask_regenx_tb__DOT__set_fault__525__row = 0xbU;
    __Vtask_regenx_tb__DOT__set_fault__525__kind = 3U;
    __Vtask_regenx_tb__DOT__set_fault__525__slot = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__525__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__525__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__525__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__525__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__525__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__525__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__525__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__525__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__525__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__525__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__525__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__525__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__525__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__525__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__525__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__525__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__525__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__525__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__525__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__525__slot)))));
    }
    vlSelf->__Vtask_regenx_tb__DOT__sweep__526__rounds = 1U;
    vlSelf->__Vtask_regenx_tb__DOT__sweep__526__tag = 
        std::string{"tf write"};
    vlSelf->__Vtask_regenx_tb__DOT__sweep__526__unnamedblk16__DOT__k = 0U;
}
