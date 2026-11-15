// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregenx_tb.h for the primary calling header

#include "Vregenx_tb__pch.h"
#include "Vregenx_tb___024root.h"

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__11(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__11\n"); );
    // Init
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__471__slot;
    __Vtask_regenx_tb__DOT__set_fault__471__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__471__kind;
    __Vtask_regenx_tb__DOT__set_fault__471__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__471__row;
    __Vtask_regenx_tb__DOT__set_fault__471__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__471__bitn;
    __Vtask_regenx_tb__DOT__set_fault__471__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__473__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__473__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__473__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__473__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__474__n;
    __Vtask_regenx_tb__DOT__tick__474__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__475__n;
    __Vtask_regenx_tb__DOT__tick__475__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__476__ok;
    __Vtask_regenx_tb__DOT__chk__476__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__476__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__478__n;
    __Vtask_regenx_tb__DOT__tick__478__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__479__ok;
    __Vtask_regenx_tb__DOT__chk__479__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__479__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__483__guard;
    __Vtask_regenx_tb__DOT__boot__483__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__484__cycles;
    __Vtask_regenx_tb__DOT__do_reset__484__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__485__n;
    __Vtask_regenx_tb__DOT__tick__485__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__486__n;
    __Vtask_regenx_tb__DOT__tick__486__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__487__ok;
    __Vtask_regenx_tb__DOT__chk__487__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__487__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__489__n;
    __Vtask_regenx_tb__DOT__tick__489__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__491__w;
    __Vtask_regenx_tb__DOT__host_op__491__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__491__a;
    __Vtask_regenx_tb__DOT__host_op__491__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__491__d;
    __Vtask_regenx_tb__DOT__host_op__491__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__491__guard;
    __Vtask_regenx_tb__DOT__host_op__491__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__492__ok;
    __Vtask_regenx_tb__DOT__chk__492__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__492__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__493__ok;
    __Vtask_regenx_tb__DOT__chk__493__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__493__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__494__slot;
    __Vtask_regenx_tb__DOT__set_fault__494__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__494__kind;
    __Vtask_regenx_tb__DOT__set_fault__494__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__494__row;
    __Vtask_regenx_tb__DOT__set_fault__494__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__494__bitn;
    __Vtask_regenx_tb__DOT__set_fault__494__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__495__slot;
    __Vtask_regenx_tb__DOT__set_fault__495__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__495__kind;
    __Vtask_regenx_tb__DOT__set_fault__495__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__495__row;
    __Vtask_regenx_tb__DOT__set_fault__495__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__495__bitn;
    __Vtask_regenx_tb__DOT__set_fault__495__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__497__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__497__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__497__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__497__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__498__n;
    __Vtask_regenx_tb__DOT__tick__498__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__499__n;
    __Vtask_regenx_tb__DOT__tick__499__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__500__ok;
    __Vtask_regenx_tb__DOT__chk__500__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__500__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__502__n;
    __Vtask_regenx_tb__DOT__tick__502__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__503__ok;
    __Vtask_regenx_tb__DOT__chk__503__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__503__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__507__guard;
    __Vtask_regenx_tb__DOT__boot__507__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__508__cycles;
    __Vtask_regenx_tb__DOT__do_reset__508__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__509__n;
    __Vtask_regenx_tb__DOT__tick__509__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__510__n;
    __Vtask_regenx_tb__DOT__tick__510__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__511__ok;
    __Vtask_regenx_tb__DOT__chk__511__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__511__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__513__n;
    __Vtask_regenx_tb__DOT__tick__513__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__515__w;
    __Vtask_regenx_tb__DOT__host_op__515__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__515__a;
    __Vtask_regenx_tb__DOT__host_op__515__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__515__d;
    __Vtask_regenx_tb__DOT__host_op__515__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__515__guard;
    __Vtask_regenx_tb__DOT__host_op__515__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__516__ok;
    __Vtask_regenx_tb__DOT__chk__516__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__516__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__517__ok;
    __Vtask_regenx_tb__DOT__chk__517__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__517__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__518__slot;
    __Vtask_regenx_tb__DOT__set_fault__518__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__518__kind;
    __Vtask_regenx_tb__DOT__set_fault__518__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__518__row;
    __Vtask_regenx_tb__DOT__set_fault__518__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__518__bitn;
    __Vtask_regenx_tb__DOT__set_fault__518__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__519__n;
    __Vtask_regenx_tb__DOT__tick__519__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__520__maxc;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__520__maxc = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__wait_scrub_idle__520__g;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__520__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__521__n;
    __Vtask_regenx_tb__DOT__tick__521__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__522__n;
    __Vtask_regenx_tb__DOT__tick__522__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__523__ok;
    __Vtask_regenx_tb__DOT__chk__523__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__523__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__525__n;
    __Vtask_regenx_tb__DOT__tick__525__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__526__ok;
    __Vtask_regenx_tb__DOT__chk__526__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__526__what;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__527__Vfuncout;
    __Vfunc_regenx_tb__DOT__stat__527__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_regenx_tb__DOT__stat__527__a;
    __Vfunc_regenx_tb__DOT__stat__527__a = 0;
    // Body
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 7U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 7 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [7U],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [7U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 8U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 8 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [8U],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [8U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 9U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 9 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [9U],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [9U]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 0xaU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 10 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [0xaU],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [0xaU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 0xbU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 11 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [0xbU],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [0xbU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 0xcU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 12 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [0xcU],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [0xcU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 0xdU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 13 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [0xdU],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [0xdU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 0xeU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 14 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [0xeU],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [0xeU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a = 0xfU;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = vlSelf->__Vtask_regenx_tb__DOT__host_op__467__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & vlSelf->__Vtask_regenx_tb__DOT__host_op__467__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__what = 
            std::string{"req_ready stuck low"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok 
            = VL_GTS_III(32, 0x1f4U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__468__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__468__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard 
                = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__what = 
            std::string{"no response"};
        vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok 
            = VL_GTS_III(32, 0x64U, vlSelf->__Vtask_regenx_tb__DOT__host_op__467__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__469__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__469__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__what 
            = VL_SFORMATF_NX("%@: row 15 got %02x exp %02x err=%b",
                             -1,&(vlSelf->__Vtask_regenx_tb__DOT__verify_all__466__tag),
                             8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                             8,vlSelf->regenx_tb__DOT__shadow
                             [0xfU],1,vlSelf->regenx_tb__DOT__g_err) ;
        vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok 
            = ((~ (IData)(vlSelf->regenx_tb__DOT__g_err)) 
               & ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__shadow
                  [0xfU]));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(vlSelf->__Vtask_regenx_tb__DOT__chk__470__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(vlSelf->__Vtask_regenx_tb__DOT__chk__470__what));
            }
        }
    }
    __Vtask_regenx_tb__DOT__set_fault__471__bitn = 0U;
    __Vtask_regenx_tb__DOT__set_fault__471__row = 6U;
    __Vtask_regenx_tb__DOT__set_fault__471__kind = 6U;
    __Vtask_regenx_tb__DOT__set_fault__471__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__471__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__471__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__471__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__471__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__471__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__471__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__471__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__471__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__471__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__471__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__471__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__471__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__471__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__471__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__471__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__471__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__471__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__471__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__471__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__471__slot)))));
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
    __Vtask_regenx_tb__DOT__wait_scrub_idle__473__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__473__g = 0U;
    __Vtask_regenx_tb__DOT__tick__474__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__474__n;
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
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__473__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__473__maxc))) {
        __Vtask_regenx_tb__DOT__tick__475__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__475__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__473__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__473__g);
    }
    __Vtask_regenx_tb__DOT__chk__476__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__476__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__473__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__473__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__476__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__476__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__478__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__478__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__479__what = std::string{"no-ecc runtime remap"};
    __Vtask_regenx_tb__DOT__chk__479__ok = (0x10U == 
                                            (0x1fU 
                                             & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 << 2U) 
                                                | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                   >> 0x1eU))));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__479__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__479__what));
        }
    }
    vlSelf->regenx_tb__DOT__phase = std::string{"hint"};
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
    __Vtask_regenx_tb__DOT__boot__483__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__484__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__485__n = __Vtask_regenx_tb__DOT__do_reset__484__cycles;
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
    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge regenx_tb.clk)", 
                                                       "tb/regenx_tb.sv", 
                                                       161);
    vlSelf->regenx_tb__DOT__rst_n = 1U;
    vlSelf->regenx_tb__DOT__boots = ((IData)(1U) + vlSelf->regenx_tb__DOT__boots);
    while (((~ (IData)(vlSelf->regenx_tb__DOT__init_done)) 
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__483__guard))) {
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
        __Vtask_regenx_tb__DOT__boot__483__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__483__guard);
    }
    __Vtask_regenx_tb__DOT__chk__487__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__487__ok = vlSelf->regenx_tb__DOT__init_done;
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
    vlSelf->regenx_tb__DOT__scrub_en = 1U;
    if ((1U & (~ (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)))) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__491__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__491__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__491__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__491__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__491__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__491__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__491__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__491__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__491__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__491__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__491__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__491__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
        }
        __Vtask_regenx_tb__DOT__chk__492__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__492__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__492__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__492__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__491__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__491__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__491__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__493__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__493__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__491__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__493__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__493__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    __Vtask_regenx_tb__DOT__set_fault__494__bitn = 1U;
    __Vtask_regenx_tb__DOT__set_fault__494__row = 4U;
    __Vtask_regenx_tb__DOT__set_fault__494__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__494__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__494__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__494__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__494__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__494__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__494__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__494__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__494__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__494__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__494__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__494__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__494__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__494__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__494__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__494__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__494__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__494__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__494__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__494__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__494__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__494__slot)))));
    }
    __Vtask_regenx_tb__DOT__set_fault__495__bitn = 6U;
    __Vtask_regenx_tb__DOT__set_fault__495__row = 4U;
    __Vtask_regenx_tb__DOT__set_fault__495__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__495__slot = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__495__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__495__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__495__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__495__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__495__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__495__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__495__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__495__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__495__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__495__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__495__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__495__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__495__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__495__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__495__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__495__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__495__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__495__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__495__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__495__slot)))));
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
    __Vtask_regenx_tb__DOT__wait_scrub_idle__497__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__497__g = 0U;
    __Vtask_regenx_tb__DOT__tick__498__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__498__n;
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
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__497__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__497__maxc))) {
        __Vtask_regenx_tb__DOT__tick__499__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__499__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__497__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__497__g);
    }
    __Vtask_regenx_tb__DOT__chk__500__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__500__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__497__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__497__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__500__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__500__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__502__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__502__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__503__what = std::string{"no-ecc build must not report data loss"};
    __Vtask_regenx_tb__DOT__chk__503__ok = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__data_lost)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__503__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__503__what));
        }
    }
    vlSelf->regenx_tb__DOT__phase = std::string{"storm"};
    vlSelf->regenx_tb__DOT__phase = std::string{"period"};
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
    __Vtask_regenx_tb__DOT__boot__507__guard = 0U;
    __Vtask_regenx_tb__DOT__do_reset__508__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__509__n = __Vtask_regenx_tb__DOT__do_reset__508__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__509__n;
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
            & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__507__guard))) {
        __Vtask_regenx_tb__DOT__tick__510__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__510__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__boot__507__guard = 
            ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__507__guard);
    }
    __Vtask_regenx_tb__DOT__chk__511__what = std::string{"init_done never came"};
    __Vtask_regenx_tb__DOT__chk__511__ok = vlSelf->regenx_tb__DOT__init_done;
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__511__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__511__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__513__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__513__n;
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
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 1U)))) {
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 2U)))) {
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 3U)))) {
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 4U)))) {
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 5U)))) {
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 6U)))) {
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 7U)))) {
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 8U)))) {
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 9U)))) {
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__515__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xaU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__515__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xbU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__515__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xcU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__515__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xdU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__515__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xeU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__515__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                  >> 0xfU)))) {
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__515__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__515__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__515__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__515__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__515__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__515__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
        }
        __Vtask_regenx_tb__DOT__chk__516__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__516__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__516__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__516__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__515__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__515__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__515__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__517__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__517__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__515__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__517__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__517__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
    }
    __Vtask_regenx_tb__DOT__set_fault__518__bitn = 5U;
    __Vtask_regenx_tb__DOT__set_fault__518__row = 0xdU;
    __Vtask_regenx_tb__DOT__set_fault__518__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__518__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__518__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__518__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__518__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__518__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__518__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__518__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__518__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__518__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__518__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__518__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__518__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__518__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__518__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__518__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__518__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__518__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__518__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__518__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__518__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__518__slot)))));
    }
    __Vtask_regenx_tb__DOT__tick__519__n = 0x2328U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__519__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__wait_scrub_idle__520__maxc = 0x1770U;
    __Vtask_regenx_tb__DOT__wait_scrub_idle__520__g = 0U;
    __Vtask_regenx_tb__DOT__tick__521__n = 3U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__521__n;
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
            & VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__520__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__520__maxc))) {
        __Vtask_regenx_tb__DOT__tick__522__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__522__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__wait_scrub_idle__520__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__wait_scrub_idle__520__g);
    }
    __Vtask_regenx_tb__DOT__chk__523__what = std::string{"scrub never went idle"};
    __Vtask_regenx_tb__DOT__chk__523__ok = VL_LTS_III(32, __Vtask_regenx_tb__DOT__wait_scrub_idle__520__g, __Vtask_regenx_tb__DOT__wait_scrub_idle__520__maxc);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__523__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__523__what));
        }
    }
    __Vtask_regenx_tb__DOT__tick__525__n = 0x14U;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__525__n;
    while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           138);
        vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                              - (IData)(1U));
    }
    __Vtask_regenx_tb__DOT__chk__526__what = std::string{"timer started a round"};
    __Vtask_regenx_tb__DOT__chk__526__ok = VL_LTES_III(32, 1U, 
                                                       VL_SHIFTRS_III(32,32,32, 
                                                                      ([&]() {
                    __Vfunc_regenx_tb__DOT__stat__527__a = 7U;
                    __Vfunc_regenx_tb__DOT__stat__527__Vfuncout 
                        = vlSelf->regenx_tb__DOT__regmirror
                        [(0xfU & __Vfunc_regenx_tb__DOT__stat__527__a)];
                }(), __Vfunc_regenx_tb__DOT__stat__527__Vfuncout), 0x18U));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__526__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__526__what));
        }
    }
    vlSelf->regenx_tb__DOT__phase = std::string{"single"};
    vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k = 1U;
}

VlCoroutine Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__12(Vregenx_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregenx_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregenx_tb___024root___eval_initial__TOP__Vtiming__0__12\n"); );
    // Init
    IData/*31:0*/ __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r;
    __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__530__slot;
    __Vtask_regenx_tb__DOT__set_fault__530__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__530__kind;
    __Vtask_regenx_tb__DOT__set_fault__530__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__530__row;
    __Vtask_regenx_tb__DOT__set_fault__530__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__530__bitn;
    __Vtask_regenx_tb__DOT__set_fault__530__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__boot__531__guard;
    __Vtask_regenx_tb__DOT__boot__531__guard = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__532__cycles;
    __Vtask_regenx_tb__DOT__do_reset__532__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__533__n;
    __Vtask_regenx_tb__DOT__tick__533__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__534__n;
    __Vtask_regenx_tb__DOT__tick__534__n = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__535__ok;
    __Vtask_regenx_tb__DOT__chk__535__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__535__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__537__n;
    __Vtask_regenx_tb__DOT__tick__537__n = 0;
    std::string __Vtask_regenx_tb__DOT__check_state__538__tag;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0;
    __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1;
    __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__538__nb;
    __Vtask_regenx_tb__DOT__check_state__538__nb = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__538__nr;
    __Vtask_regenx_tb__DOT__check_state__538__nr = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__538__na;
    __Vtask_regenx_tb__DOT__check_state__538__na = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__check_state__538__nu;
    __Vtask_regenx_tb__DOT__check_state__538__nu = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r;
    __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b;
    __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b = 0;
    VlUnpacked<SData/*12:0*/, 18> __Vtask_regenx_tb__DOT__model__539__bm;
    for (int __Vi0 = 0; __Vi0 < 18; ++__Vi0) {
        __Vtask_regenx_tb__DOT__model__539__bm[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 2> __Vtask_regenx_tb__DOT__model__539__free_sp;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        __Vtask_regenx_tb__DOT__model__539__free_sp[__Vi0] = 0;
    }
    IData/*31:0*/ __Vtask_regenx_tb__DOT__model__539__v;
    __Vtask_regenx_tb__DOT__model__539__v = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__541__ok;
    __Vtask_regenx_tb__DOT__chk__541__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__541__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__542__ok;
    __Vtask_regenx_tb__DOT__chk__542__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__542__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__543__ok;
    __Vtask_regenx_tb__DOT__chk__543__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__543__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__544__ok;
    __Vtask_regenx_tb__DOT__chk__544__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__544__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__545__ok;
    __Vtask_regenx_tb__DOT__chk__545__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__545__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__546__ok;
    __Vtask_regenx_tb__DOT__chk__546__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__546__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__547__ok;
    __Vtask_regenx_tb__DOT__chk__547__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__547__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__548__ok;
    __Vtask_regenx_tb__DOT__chk__548__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__548__what;
    std::string __Vtask_regenx_tb__DOT__sweep__549__tag;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__549__rounds;
    __Vtask_regenx_tb__DOT__sweep__549__rounds = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__549__unnamedblk16__DOT__k;
    __Vtask_regenx_tb__DOT__sweep__549__unnamedblk16__DOT__k = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
    __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__550__w;
    __Vtask_regenx_tb__DOT__host_op__550__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__550__a;
    __Vtask_regenx_tb__DOT__host_op__550__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__550__d;
    __Vtask_regenx_tb__DOT__host_op__550__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__550__guard;
    __Vtask_regenx_tb__DOT__host_op__550__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__551__ok;
    __Vtask_regenx_tb__DOT__chk__551__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__551__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__552__ok;
    __Vtask_regenx_tb__DOT__chk__552__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__552__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__553__ok;
    __Vtask_regenx_tb__DOT__chk__553__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__553__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__554__w;
    __Vtask_regenx_tb__DOT__host_op__554__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__554__a;
    __Vtask_regenx_tb__DOT__host_op__554__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__554__d;
    __Vtask_regenx_tb__DOT__host_op__554__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__554__guard;
    __Vtask_regenx_tb__DOT__host_op__554__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__555__ok;
    __Vtask_regenx_tb__DOT__chk__555__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__555__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__556__ok;
    __Vtask_regenx_tb__DOT__chk__556__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__556__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__557__ok;
    __Vtask_regenx_tb__DOT__chk__557__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__557__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__558__ok;
    __Vtask_regenx_tb__DOT__chk__558__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__558__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__559__ok;
    __Vtask_regenx_tb__DOT__chk__559__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__559__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__560__ok;
    __Vtask_regenx_tb__DOT__chk__560__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__560__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__561__w;
    __Vtask_regenx_tb__DOT__host_op__561__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__561__a;
    __Vtask_regenx_tb__DOT__host_op__561__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__561__d;
    __Vtask_regenx_tb__DOT__host_op__561__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__561__guard;
    __Vtask_regenx_tb__DOT__host_op__561__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__562__ok;
    __Vtask_regenx_tb__DOT__chk__562__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__562__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__563__ok;
    __Vtask_regenx_tb__DOT__chk__563__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__563__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__564__w;
    __Vtask_regenx_tb__DOT__host_op__564__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__564__a;
    __Vtask_regenx_tb__DOT__host_op__564__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__564__d;
    __Vtask_regenx_tb__DOT__host_op__564__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__564__guard;
    __Vtask_regenx_tb__DOT__host_op__564__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__565__ok;
    __Vtask_regenx_tb__DOT__chk__565__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__565__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__566__ok;
    __Vtask_regenx_tb__DOT__chk__566__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__566__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__567__ok;
    __Vtask_regenx_tb__DOT__chk__567__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__567__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__568__w;
    __Vtask_regenx_tb__DOT__host_op__568__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__568__a;
    __Vtask_regenx_tb__DOT__host_op__568__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__568__d;
    __Vtask_regenx_tb__DOT__host_op__568__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__568__guard;
    __Vtask_regenx_tb__DOT__host_op__568__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__569__ok;
    __Vtask_regenx_tb__DOT__chk__569__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__569__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__570__ok;
    __Vtask_regenx_tb__DOT__chk__570__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__570__what;
    // Body
    while (VL_GTES_III(32, 8U, vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k)) {
        __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r = 0U;
        while (VL_GTS_III(32, 0x12U, __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r)) {
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
            __Vtask_regenx_tb__DOT__set_fault__530__bitn 
                = VL_MODDIVS_III(32, (VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r) 
                                      + vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k), (IData)(8U));
            __Vtask_regenx_tb__DOT__set_fault__530__row 
                = __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r;
            __Vtask_regenx_tb__DOT__set_fault__530__kind 
                = vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k;
            __Vtask_regenx_tb__DOT__set_fault__530__slot = 0U;
            vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
            vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
                = (0xfU & __Vtask_regenx_tb__DOT__set_fault__530__kind);
            vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
                = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__530__row);
            vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
                = (0xfU & __Vtask_regenx_tb__DOT__set_fault__530__bitn);
            if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__530__slot))) {
                vlSelf->regenx_tb__DOT__f_en = (((~ 
                                                  ((IData)(1U) 
                                                   << 
                                                   (3U 
                                                    & __Vtask_regenx_tb__DOT__set_fault__530__slot))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                                | (7U 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                      << 
                                                      (3U 
                                                       & __Vtask_regenx_tb__DOT__set_fault__530__slot))));
                vlSelf->regenx_tb__DOT__f_kind[(3U 
                                                & __Vtask_regenx_tb__DOT__set_fault__530__slot)] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
                vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__530__slot)] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
                vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__530__slot)] 
                    = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
            }
            vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
                = (0xfU & __Vtask_regenx_tb__DOT__set_fault__530__kind);
            vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
                = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__530__row);
            if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__530__slot))))) {
                vlSelf->regenx_tb__DOT__flt_row_flat 
                    = (((~ ((IData)(0x1fU) << (0xfU 
                                               & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__530__slot)))) 
                        & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                       | (0x7fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                     << (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__530__slot)))));
            }
            vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
                = (0xfU & __Vtask_regenx_tb__DOT__set_fault__530__bitn);
            if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__530__slot)))) {
                vlSelf->regenx_tb__DOT__flt_kind_flat 
                    = (((~ ((IData)(0xfU) << (0xfU 
                                              & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__530__slot)))) 
                        & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                       | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                    << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__530__slot)))));
                vlSelf->regenx_tb__DOT__flt_bit_flat 
                    = (((~ ((IData)(0xfU) << (0xfU 
                                              & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__530__slot)))) 
                        & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                       | (0xfffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                    << (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__530__slot)))));
            }
            __Vtask_regenx_tb__DOT__boot__531__guard = 0U;
            __Vtask_regenx_tb__DOT__do_reset__532__cycles = 4U;
            vlSelf->regenx_tb__DOT__rst_n = 0U;
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            vlSelf->regenx_tb__DOT__scrub_en = 0U;
            vlSelf->regenx_tb__DOT__scrub_req = 0U;
            __Vtask_regenx_tb__DOT__tick__533__n = __Vtask_regenx_tb__DOT__do_reset__532__cycles;
            vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__533__n;
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
                    & VL_GTS_III(32, 0xfa0U, __Vtask_regenx_tb__DOT__boot__531__guard))) {
                __Vtask_regenx_tb__DOT__tick__534__n = 1U;
                vlSelf->regenx_tb__DOT____Vrepeat0 
                    = __Vtask_regenx_tb__DOT__tick__534__n;
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
                __Vtask_regenx_tb__DOT__boot__531__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__boot__531__guard);
            }
            __Vtask_regenx_tb__DOT__chk__535__what = 
                std::string{"init_done never came"};
            __Vtask_regenx_tb__DOT__chk__535__ok = vlSelf->regenx_tb__DOT__init_done;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__535__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__535__what));
                }
            }
            __Vtask_regenx_tb__DOT__tick__537__n = 0x14U;
            vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__537__n;
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
            __Vtask_regenx_tb__DOT__check_state__538__tag 
                = VL_SFORMATF_NX("kind%0d row%0d",32,
                                 vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k,
                                 32,__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r) ;
            __Vtask_regenx_tb__DOT__check_state__538__nb = 0U;
            __Vtask_regenx_tb__DOT__check_state__538__nr = 0U;
            __Vtask_regenx_tb__DOT__check_state__538__na = 0U;
            __Vtask_regenx_tb__DOT__check_state__538__nu = 0U;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[1U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[1U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[2U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[2U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[3U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[3U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[4U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[4U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[5U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[5U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[6U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[6U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[7U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[7U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[8U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[8U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[9U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[9U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0xaU] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0xaU] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0xbU] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0xbU] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0xcU] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0xcU] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0xdU] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0xdU] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0xeU] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0xeU] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0xfU] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0xfU] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0x10U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0x10U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0 = 0U;
            vlSelf->regenx_tb__DOT__e_bad[0x11U] = vlSelf->regenx_tb__DOT____Vlvbound_h71829fc0__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0 = 0U;
            __Vtask_regenx_tb__DOT__model__539__bm[0x11U] 
                = vlSelf->regenx_tb__DOT____Vlvbound_h8873a1c8__0;
            if ((1U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = vlSelf->regenx_tb__DOT__f_row
                    [0U];
                __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b 
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
                                if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                                    vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                                    if (VL_LIKELY((0x11U 
                                                   >= 
                                                   (0x1fU 
                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                        vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                       & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                            = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                                    }
                                    vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                                    if (VL_LIKELY((
                                                   (0xcU 
                                                    >= 
                                                    (0xfU 
                                                     & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                                   && (0x11U 
                                                       >= 
                                                       (0x1fU 
                                                        & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                        __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                                & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                                & __Vtask_regenx_tb__DOT__model__539__bm
                                                [(0x1fU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                               | (0x1fffU 
                                                  & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                     << 
                                                     (0xfU 
                                                      & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
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
                            __Vtask_regenx_tb__DOT__model__539__v 
                                = ((0x11U == __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)
                                    ? 0U : ((IData)(1U) 
                                            + __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r));
                            vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__v))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__539__v)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0;
                                __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__539__v)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0;
                            }
                        } else {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                            }
                        }
                    } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                [0U])) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                        vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                        if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                        }
                    } else if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                } else if ((2U & vlSelf->regenx_tb__DOT__f_kind
                            [0U])) {
                    if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                            [0U])) {
                    if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                }
                vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0 
                    = ((IData)(1U) + ((8U >= vlSelf->regenx_tb__DOT__f_kind
                                       [0U]) ? vlSelf->regenx_tb__DOT__cov_kind
                                      [vlSelf->regenx_tb__DOT__f_kind
                                      [0U]] : 0U));
                if (VL_LIKELY((8U >= vlSelf->regenx_tb__DOT__f_kind
                               [0U]))) {
                    vlSelf->regenx_tb__DOT__cov_kind[vlSelf->regenx_tb__DOT__f_kind[0U]] 
                        = vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0;
                }
            }
            if ((2U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = vlSelf->regenx_tb__DOT__f_row
                    [1U];
                __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b 
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
                                if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                                    vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                                    if (VL_LIKELY((0x11U 
                                                   >= 
                                                   (0x1fU 
                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                        vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                       & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                            = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                                    }
                                    vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                                    if (VL_LIKELY((
                                                   (0xcU 
                                                    >= 
                                                    (0xfU 
                                                     & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                                   && (0x11U 
                                                       >= 
                                                       (0x1fU 
                                                        & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                        __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                                & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                                & __Vtask_regenx_tb__DOT__model__539__bm
                                                [(0x1fU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                               | (0x1fffU 
                                                  & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                     << 
                                                     (0xfU 
                                                      & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
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
                            __Vtask_regenx_tb__DOT__model__539__v 
                                = ((0x11U == __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)
                                    ? 0U : ((IData)(1U) 
                                            + __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r));
                            vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__v))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__539__v)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0;
                                __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__539__v)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0;
                            }
                        } else {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                            }
                        }
                    } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                [1U])) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                        vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                        if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                        }
                    } else if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                } else if ((2U & vlSelf->regenx_tb__DOT__f_kind
                            [1U])) {
                    if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                            [1U])) {
                    if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                }
                vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0 
                    = ((IData)(1U) + ((8U >= vlSelf->regenx_tb__DOT__f_kind
                                       [1U]) ? vlSelf->regenx_tb__DOT__cov_kind
                                      [vlSelf->regenx_tb__DOT__f_kind
                                      [1U]] : 0U));
                if (VL_LIKELY((8U >= vlSelf->regenx_tb__DOT__f_kind
                               [1U]))) {
                    vlSelf->regenx_tb__DOT__cov_kind[vlSelf->regenx_tb__DOT__f_kind[1U]] 
                        = vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0;
                }
            }
            if ((4U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
                __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r 
                    = vlSelf->regenx_tb__DOT__f_row
                    [2U];
                __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b 
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
                                if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                                    vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                                    if (VL_LIKELY((0x11U 
                                                   >= 
                                                   (0x1fU 
                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                                        vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                                       & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                            = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                                    }
                                    vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                                    if (VL_LIKELY((
                                                   (0xcU 
                                                    >= 
                                                    (0xfU 
                                                     & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                                   && (0x11U 
                                                       >= 
                                                       (0x1fU 
                                                        & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                                        __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                                & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                            = (((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                                & __Vtask_regenx_tb__DOT__model__539__bm
                                                [(0x1fU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                               | (0x1fffU 
                                                  & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                     << 
                                                     (0xfU 
                                                      & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
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
                            __Vtask_regenx_tb__DOT__model__539__v 
                                = ((0x11U == __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)
                                    ? 0U : ((IData)(1U) 
                                            + __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r));
                            vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__v))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__539__v)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_hbbec147d__0;
                                __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__539__v)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h3e512679__0;
                            }
                        } else {
                            vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                            vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                            if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                                vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                               & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                                __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                        & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                    = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                            }
                        }
                    } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                                [2U])) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1 = 1U;
                        vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0 = 0x1fffU;
                        if ((0x11U >= (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__1;
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_ha880bb23__0;
                        }
                    } else if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                } else if ((2U & vlSelf->regenx_tb__DOT__f_kind
                            [2U])) {
                    if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                } else if ((1U & vlSelf->regenx_tb__DOT__f_kind
                            [2U])) {
                    if (VL_GTS_III(32, 8U, __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) {
                        vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0 = 1U;
                        if (VL_LIKELY((0x11U >= (0x1fU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)))) {
                            vlSelf->regenx_tb__DOT__e_bad[(0x1fU 
                                                           & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = vlSelf->regenx_tb__DOT____Vlvbound_h921bc91b__0;
                        }
                        vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0 = 1U;
                        if (VL_LIKELY(((0xcU >= (0xfU 
                                                 & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b)) 
                                       && (0x11U >= 
                                           (0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r))))) {
                            __Vtask_regenx_tb__DOT__model__539__bm[(0x1fU 
                                                                    & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)] 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))) 
                                    & __Vtask_regenx_tb__DOT__model__539__bm
                                    [(0x1fU & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__r)]) 
                                   | (0x1fffU & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hc6dbe8b5__0) 
                                                 << 
                                                 (0xfU 
                                                  & __Vtask_regenx_tb__DOT__model__539__unnamedblk3__DOT__unnamedblk4__DOT__b))));
                        }
                    }
                }
                vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0 
                    = ((IData)(1U) + ((8U >= vlSelf->regenx_tb__DOT__f_kind
                                       [2U]) ? vlSelf->regenx_tb__DOT__cov_kind
                                      [vlSelf->regenx_tb__DOT__f_kind
                                      [2U]] : 0U));
                if (VL_LIKELY((8U >= vlSelf->regenx_tb__DOT__f_kind
                               [2U]))) {
                    vlSelf->regenx_tb__DOT__cov_kind[vlSelf->regenx_tb__DOT__f_kind[2U]] 
                        = vlSelf->regenx_tb__DOT____Vlvbound_h410d55be__0;
                }
            }
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0U];
            vlSelf->regenx_tb__DOT__e_sev[0U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[1U];
            vlSelf->regenx_tb__DOT__e_sev[1U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[2U];
            vlSelf->regenx_tb__DOT__e_sev[2U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[3U];
            vlSelf->regenx_tb__DOT__e_sev[3U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[4U];
            vlSelf->regenx_tb__DOT__e_sev[4U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[5U];
            vlSelf->regenx_tb__DOT__e_sev[5U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[6U];
            vlSelf->regenx_tb__DOT__e_sev[6U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[7U];
            vlSelf->regenx_tb__DOT__e_sev[7U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[8U];
            vlSelf->regenx_tb__DOT__e_sev[8U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[9U];
            vlSelf->regenx_tb__DOT__e_sev[9U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0xaU];
            vlSelf->regenx_tb__DOT__e_sev[0xaU] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0xbU];
            vlSelf->regenx_tb__DOT__e_sev[0xbU] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0xcU];
            vlSelf->regenx_tb__DOT__e_sev[0xcU] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0xdU];
            vlSelf->regenx_tb__DOT__e_sev[0xdU] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0xeU];
            vlSelf->regenx_tb__DOT__e_sev[0xeU] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0xfU];
            vlSelf->regenx_tb__DOT__e_sev[0xfU] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0x10U];
            vlSelf->regenx_tb__DOT__e_sev[0x10U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
            vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0 
                = vlSelf->regenx_tb__DOT__e_bad[0x11U];
            vlSelf->regenx_tb__DOT__e_sev[0x11U] = vlSelf->regenx_tb__DOT____Vlvbound_h407bbe78__0;
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
            __Vtask_regenx_tb__DOT__model__539__free_sp[0U] 
                = (1U & (~ vlSelf->regenx_tb__DOT__e_bad
                         [0x10U]));
            __Vtask_regenx_tb__DOT__model__539__free_sp[1U] 
                = (1U & (~ vlSelf->regenx_tb__DOT__e_bad
                         [0x11U]));
            if ((vlSelf->regenx_tb__DOT__e_bad[0U] 
                 & vlSelf->regenx_tb__DOT__e_sev[0U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[0U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[1U] 
                 & vlSelf->regenx_tb__DOT__e_sev[1U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[1U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[1U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[1U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[2U] 
                 & vlSelf->regenx_tb__DOT__e_sev[2U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[2U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[2U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[2U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[3U] 
                 & vlSelf->regenx_tb__DOT__e_sev[3U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[3U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[3U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[3U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[4U] 
                 & vlSelf->regenx_tb__DOT__e_sev[4U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[4U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[4U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[4U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[5U] 
                 & vlSelf->regenx_tb__DOT__e_sev[5U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[5U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[5U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[5U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[6U] 
                 & vlSelf->regenx_tb__DOT__e_sev[6U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[6U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[6U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[6U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[7U] 
                 & vlSelf->regenx_tb__DOT__e_sev[7U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[7U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[7U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[7U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[8U] 
                 & vlSelf->regenx_tb__DOT__e_sev[8U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[8U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[8U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[8U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[9U] 
                 & vlSelf->regenx_tb__DOT__e_sev[9U])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[9U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[9U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[9U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xaU] 
                 & vlSelf->regenx_tb__DOT__e_sev[0xaU])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[0xaU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xbU] 
                 & vlSelf->regenx_tb__DOT__e_sev[0xbU])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[0xbU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xcU] 
                 & vlSelf->regenx_tb__DOT__e_sev[0xcU])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[0xcU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xdU] 
                 & vlSelf->regenx_tb__DOT__e_sev[0xdU])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[0xdU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xeU] 
                 & vlSelf->regenx_tb__DOT__e_sev[0xeU])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[0xeU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xfU] 
                 & vlSelf->regenx_tb__DOT__e_sev[0xfU])) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_unav[0xfU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [0U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[0U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[1U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [1U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[1U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[1U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[1U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[2U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [2U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[2U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[2U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[2U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[3U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [3U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[3U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[3U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[3U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[4U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [4U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[4U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[4U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[4U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[5U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [5U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[5U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[5U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[5U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[6U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [6U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[6U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[6U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[6U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[7U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [7U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[7U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[7U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[7U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[8U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [8U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[8U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[8U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[8U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[9U] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [9U]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[9U] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[9U] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[9U] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xaU] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [0xaU]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[0xaU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xbU] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [0xbU]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[0xbU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xcU] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [0xcU]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[0xcU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xdU] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [0xdU]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[0xdU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xeU] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [0xeU]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x11U;
                    vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
                } else {
                    vlSelf->regenx_tb__DOT__e_asst[0xeU] = 1U;
                }
            }
            if ((vlSelf->regenx_tb__DOT__e_bad[0xfU] 
                 & (~ vlSelf->regenx_tb__DOT__e_sev
                    [0xfU]))) {
                if (__Vtask_regenx_tb__DOT__model__539__free_sp
                    [0U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[0U] = 0U;
                    vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x10U;
                    vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
                } else if (__Vtask_regenx_tb__DOT__model__539__free_sp
                           [1U]) {
                    __Vtask_regenx_tb__DOT__model__539__free_sp[1U] = 0U;
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
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[0] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys) 
                 == vlSelf->regenx_tb__DOT__e_bad[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[1] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 1U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [1U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 1U)) == vlSelf->regenx_tb__DOT__e_bad
                 [1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[1U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[2] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 2U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [2U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 2U)) == vlSelf->regenx_tb__DOT__e_bad
                 [2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[2U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[3] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 3U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [3U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 3U)) == vlSelf->regenx_tb__DOT__e_bad
                 [3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[3U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[4] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 4U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [4U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 4U)) == vlSelf->regenx_tb__DOT__e_bad
                 [4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[4U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[5] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 5U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [5U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 5U)) == vlSelf->regenx_tb__DOT__e_bad
                 [5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[5U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[6] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 6U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [6U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 6U)) == vlSelf->regenx_tb__DOT__e_bad
                 [6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[6U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[7] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 7U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [7U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 7U)) == vlSelf->regenx_tb__DOT__e_bad
                 [7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[7U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[8] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 8U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [8U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 8U)) == vlSelf->regenx_tb__DOT__e_bad
                 [8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[8U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[9] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 9U)),1,
                                 vlSelf->regenx_tb__DOT__e_bad
                                 [9U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 9U)) == vlSelf->regenx_tb__DOT__e_bad
                 [9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[9U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[10] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0xaU)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0xaU]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0xaU)) == vlSelf->regenx_tb__DOT__e_bad
                 [0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0xaU]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[11] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0xbU)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0xbU]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0xbU)) == vlSelf->regenx_tb__DOT__e_bad
                 [0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0xbU]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[12] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0xcU)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0xcU]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0xcU)) == vlSelf->regenx_tb__DOT__e_bad
                 [0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0xcU]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[13] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0xdU)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0xdU]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0xdU)) == vlSelf->regenx_tb__DOT__e_bad
                 [0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0xdU]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[14] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0xeU)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0xeU]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0xeU)) == vlSelf->regenx_tb__DOT__e_bad
                 [0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0xeU]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[15] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0xfU)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0xfU]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0xfU)) == vlSelf->regenx_tb__DOT__e_bad
                 [0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0xfU]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[16] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0x10U)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0x10U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0x10U)) == vlSelf->regenx_tb__DOT__e_bad
                 [0x10U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0x10U]);
            __Vtask_regenx_tb__DOT__chk__541__what 
                = VL_SFORMATF_NX("%@: bad_phys[17] dut=%b exp=%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 1,(1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                          >> 0x11U)),
                                 1,vlSelf->regenx_tb__DOT__e_bad
                                 [0x11U]) ;
            __Vtask_regenx_tb__DOT__chk__541__ok = 
                ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                        >> 0x11U)) == vlSelf->regenx_tb__DOT__e_bad
                 [0x11U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__541__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__541__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nb 
                = (__Vtask_regenx_tb__DOT__check_state__538__nb 
                   + vlSelf->regenx_tb__DOT__e_bad[0x11U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[0] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [0U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                 == vlSelf->regenx_tb__DOT__e_map[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[0]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                 == vlSelf->regenx_tb__DOT__e_unav[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[0]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist)) 
                 == vlSelf->regenx_tb__DOT__e_asst[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[0U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [0U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [0U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[1] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                             >> 5U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [1U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                           >> 5U)) == vlSelf->regenx_tb__DOT__e_map
                 [1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[1]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 1U)) == vlSelf->regenx_tb__DOT__e_unav
                 [1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[1]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 1U)) == vlSelf->regenx_tb__DOT__e_asst
                 [1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[1U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [1U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [1U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[2] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                             >> 0xaU)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [2U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                           >> 0xaU)) == vlSelf->regenx_tb__DOT__e_map
                 [2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[2]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 2U)) == vlSelf->regenx_tb__DOT__e_unav
                 [2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[2]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 2U)) == vlSelf->regenx_tb__DOT__e_asst
                 [2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[2U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [2U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [2U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[3] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                             >> 0xfU)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [3U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                           >> 0xfU)) == vlSelf->regenx_tb__DOT__e_map
                 [3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[3]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 3U)) == vlSelf->regenx_tb__DOT__e_unav
                 [3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[3]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 3U)) == vlSelf->regenx_tb__DOT__e_asst
                 [3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[3U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [3U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [3U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[4] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                             >> 0x14U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [4U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                           >> 0x14U)) == vlSelf->regenx_tb__DOT__e_map
                 [4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[4]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 4U)) == vlSelf->regenx_tb__DOT__e_unav
                 [4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[4]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 4U)) == vlSelf->regenx_tb__DOT__e_asst
                 [4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[4U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [4U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [4U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[5] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                             >> 0x19U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [5U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                           >> 0x19U)) == vlSelf->regenx_tb__DOT__e_map
                 [5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[5]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 5U)) == vlSelf->regenx_tb__DOT__e_unav
                 [5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[5]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 5U)) == vlSelf->regenx_tb__DOT__e_asst
                 [5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[5U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [5U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [5U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[6] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                              << 2U) 
                                             | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 0x1eU))),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [6U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                            << 2U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                      >> 0x1eU))) == 
                 vlSelf->regenx_tb__DOT__e_map[6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[6]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 6U)) == vlSelf->regenx_tb__DOT__e_unav
                 [6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[6]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 6U)) == vlSelf->regenx_tb__DOT__e_asst
                 [6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[6U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [6U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [6U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[7] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                             >> 3U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [7U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                           >> 3U)) == vlSelf->regenx_tb__DOT__e_map
                 [7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[7]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 7U)) == vlSelf->regenx_tb__DOT__e_unav
                 [7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[7]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 7U)) == vlSelf->regenx_tb__DOT__e_asst
                 [7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[7U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [7U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [7U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[8] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                             >> 8U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [8U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                           >> 8U)) == vlSelf->regenx_tb__DOT__e_map
                 [8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[8]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 8U)) == vlSelf->regenx_tb__DOT__e_unav
                 [8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[8]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 8U)) == vlSelf->regenx_tb__DOT__e_asst
                 [8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[8U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [8U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [8U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[9] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                             >> 0xdU)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [9U]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                           >> 0xdU)) == vlSelf->regenx_tb__DOT__e_map
                 [9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[9]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 9U)) == vlSelf->regenx_tb__DOT__e_unav
                 [9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[9]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 9U)) == vlSelf->regenx_tb__DOT__e_asst
                 [9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[9U]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [9U]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [9U]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[10] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                             >> 0x12U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [0xaU]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                           >> 0x12U)) == vlSelf->regenx_tb__DOT__e_map
                 [0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[10]",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 0xaU)) == vlSelf->regenx_tb__DOT__e_unav
                 [0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[10]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 0xaU)) == vlSelf->regenx_tb__DOT__e_asst
                 [0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[0xaU]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [0xaU]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [0xaU]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[11] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                             >> 0x17U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [0xbU]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                           >> 0x17U)) == vlSelf->regenx_tb__DOT__e_map
                 [0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[11]",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 0xbU)) == vlSelf->regenx_tb__DOT__e_unav
                 [0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[11]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 0xbU)) == vlSelf->regenx_tb__DOT__e_asst
                 [0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[0xbU]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [0xbU]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [0xbU]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[12] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                              << 4U) 
                                             | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                >> 0x1cU))),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [0xcU]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                            << 4U) | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                      >> 0x1cU))) == 
                 vlSelf->regenx_tb__DOT__e_map[0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[12]",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 0xcU)) == vlSelf->regenx_tb__DOT__e_unav
                 [0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[12]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 0xcU)) == vlSelf->regenx_tb__DOT__e_asst
                 [0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[0xcU]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [0xcU]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [0xcU]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[13] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                             >> 1U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [0xdU]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                           >> 1U)) == vlSelf->regenx_tb__DOT__e_map
                 [0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[13]",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 0xdU)) == vlSelf->regenx_tb__DOT__e_unav
                 [0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[13]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 0xdU)) == vlSelf->regenx_tb__DOT__e_asst
                 [0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[0xdU]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [0xdU]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [0xdU]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[14] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                             >> 6U)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [0xeU]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                           >> 6U)) == vlSelf->regenx_tb__DOT__e_map
                 [0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[14]",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 0xeU)) == vlSelf->regenx_tb__DOT__e_unav
                 [0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[14]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 0xeU)) == vlSelf->regenx_tb__DOT__e_asst
                 [0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[0xeU]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [0xeU]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [0xeU]);
            __Vtask_regenx_tb__DOT__chk__542__what 
                = VL_SFORMATF_NX("%@: map[15] dut=%0# exp=%0#",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                             >> 0xbU)),
                                 5,vlSelf->regenx_tb__DOT__e_map
                                 [0xfU]) ;
            __Vtask_regenx_tb__DOT__chk__542__ok = 
                ((0x1fU & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                           >> 0xbU)) == vlSelf->regenx_tb__DOT__e_map
                 [0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__542__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__542__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__543__what 
                = VL_SFORMATF_NX("%@: unavail[15]",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__543__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                        >> 0xfU)) == vlSelf->regenx_tb__DOT__e_unav
                 [0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__543__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__543__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__544__what 
                = VL_SFORMATF_NX("%@: assist[15]",-1,
                                 &(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__544__ok = 
                ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                        >> 0xfU)) == vlSelf->regenx_tb__DOT__e_asst
                 [0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__544__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__544__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__nr 
                = (__Vtask_regenx_tb__DOT__check_state__538__nr 
                   + vlSelf->regenx_tb__DOT__e_rem[0xfU]);
            __Vtask_regenx_tb__DOT__check_state__538__na 
                = (__Vtask_regenx_tb__DOT__check_state__538__na 
                   + vlSelf->regenx_tb__DOT__e_asst
                   [0xfU]);
            __Vtask_regenx_tb__DOT__check_state__538__nu 
                = (__Vtask_regenx_tb__DOT__check_state__538__nu 
                   + vlSelf->regenx_tb__DOT__e_unav
                   [0xfU]);
            __Vtask_regenx_tb__DOT__chk__545__what 
                = VL_SFORMATF_NX("%@: fault_count %0# exp %0d",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 6,(IData)(vlSelf->regenx_tb__DOT__fault_count),
                                 32,__Vtask_regenx_tb__DOT__check_state__538__nb) ;
            __Vtask_regenx_tb__DOT__chk__545__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__fault_count) 
                 == __Vtask_regenx_tb__DOT__check_state__538__nb);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__545__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__545__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__546__what 
                = VL_SFORMATF_NX("%@: remapped_count %0# exp %0d",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 5,(IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt),
                                 32,__Vtask_regenx_tb__DOT__check_state__538__nr) ;
            __Vtask_regenx_tb__DOT__chk__546__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                 == __Vtask_regenx_tb__DOT__check_state__538__nr);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__546__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__546__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__547__what 
                = VL_SFORMATF_NX("%@: degraded flag",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag)) ;
            __Vtask_regenx_tb__DOT__chk__547__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__degraded) 
                 == (0U != (__Vtask_regenx_tb__DOT__check_state__538__na 
                            + __Vtask_regenx_tb__DOT__check_state__538__nu)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__547__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__547__what));
                }
            }
            __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 0U;
            __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 0U;
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [0U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [0U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [1U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [1U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [2U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [2U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [3U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [3U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [4U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [4U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [5U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [5U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [6U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [6U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [7U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [7U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [8U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [8U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [9U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [9U])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [0xaU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [0xaU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [0xbU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [0xbU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [0xcU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [0xcU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [0xdU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [0xdU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [0xeU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [0xeU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            if ((0x10U == vlSelf->regenx_tb__DOT__e_map
                 [0xfU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0 = 1U;
            }
            if ((0x11U == vlSelf->regenx_tb__DOT__e_map
                 [0xfU])) {
                __Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1 = 1U;
            }
            __Vtask_regenx_tb__DOT__chk__548__what 
                = VL_SFORMATF_NX("%@: spare_used %b exp %b%b",
                                 -1,&(__Vtask_regenx_tb__DOT__check_state__538__tag),
                                 2,(IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used),
                                 1,__Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1,
                                 1,(IData)(__Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0)) ;
            __Vtask_regenx_tb__DOT__chk__548__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used) 
                 == (((IData)(__Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u1) 
                      << 1U) | (IData)(__Vtask_regenx_tb__DOT__check_state__538__unnamedblk14__DOT__u0)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__548__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__548__what));
                }
            }
            __Vtask_regenx_tb__DOT__sweep__549__rounds = 1U;
            __Vtask_regenx_tb__DOT__sweep__549__tag 
                = VL_SFORMATF_NX("kind%0d row%0d",32,
                                 vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k,
                                 32,__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r) ;
            __Vtask_regenx_tb__DOT__sweep__549__unnamedblk16__DOT__k = 0U;
            while (VL_LTS_III(32, __Vtask_regenx_tb__DOT__sweep__549__unnamedblk16__DOT__k, __Vtask_regenx_tb__DOT__sweep__549__rounds)) {
                vlSelf->regenx_tb__DOT__shadow[0U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [0U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 0",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[1U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [1U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 1",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 1U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[2U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [2U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 2U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 2",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 2U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[3U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [3U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 3U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 3",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 3U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[4U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [4U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 4U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 4",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 4U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[5U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [5U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 5U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 5",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 5U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[6U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [6U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 6U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 6",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 6U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[7U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [7U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 7U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 7",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 7U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[8U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [8U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 8U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 8",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 8U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[9U] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [9U];
                __Vtask_regenx_tb__DOT__host_op__550__a = 9U;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 9",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 9U)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[0xaU] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [0xaU];
                __Vtask_regenx_tb__DOT__host_op__550__a = 0xaU;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 10",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 0xaU)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[0xbU] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [0xbU];
                __Vtask_regenx_tb__DOT__host_op__550__a = 0xbU;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 11",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 0xbU)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[0xcU] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [0xcU];
                __Vtask_regenx_tb__DOT__host_op__550__a = 0xcU;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 12",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 0xcU)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[0xdU] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [0xdU];
                __Vtask_regenx_tb__DOT__host_op__550__a = 0xdU;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 13",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 0xdU)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[0xeU] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [0xeU];
                __Vtask_regenx_tb__DOT__host_op__550__a = 0xeU;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 14",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 0xeU)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                vlSelf->regenx_tb__DOT__shadow[0xfU] 
                    = (0xffU & VL_RANDOM_I());
                __Vtask_regenx_tb__DOT__host_op__550__d 
                    = vlSelf->regenx_tb__DOT__shadow
                    [0xfU];
                __Vtask_regenx_tb__DOT__host_op__550__a = 0xfU;
                __Vtask_regenx_tb__DOT__host_op__550__w = 1U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__550__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__550__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__550__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                }
                __Vtask_regenx_tb__DOT__chk__551__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__551__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__551__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__551__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__550__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__550__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__550__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__552__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__552__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__550__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__552__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__552__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                __Vtask_regenx_tb__DOT__chk__553__what 
                    = VL_SFORMATF_NX("%@: write err flag row 15",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                __Vtask_regenx_tb__DOT__chk__553__ok 
                    = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                       == (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                 >> 0xfU)));
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__553__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__553__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 0xfU;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x8000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 15 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 15",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 15 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [0xfU]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [0xfU]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 0xeU;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x4000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 14 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 14",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 14 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [0xeU]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [0xeU]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 0xdU;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x2000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 13 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 13",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 13 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [0xdU]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [0xdU]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 0xcU;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x1000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 12 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 12",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 12 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [0xcU]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [0xcU]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 0xbU;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x800U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 11 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 11",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 11 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [0xbU]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [0xbU]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 0xaU;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x400U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 10 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 10",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 10 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [0xaU]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [0xaU]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 9U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x200U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 9 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 9",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 9 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [9U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [9U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 8U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x100U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 8 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 8",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 8 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [8U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [8U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 7U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x80U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 7 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 7",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 7 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [7U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [7U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 6U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x40U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 6 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 6",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 6 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [6U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [6U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 5U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x20U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 5 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 5",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 5 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [5U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [5U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 4U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((0x10U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 4 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 4",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 4 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [4U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [4U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 3U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 3 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 3",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 3 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [3U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [3U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 2U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 2 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 2",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 2 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [2U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [2U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 1U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 1 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 1",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 1 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [1U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [1U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__host_op__554__d = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__a = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__w = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   182);
                vlSelf->regenx_tb__DOT__req_valid = 1U;
                vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__554__w;
                vlSelf->regenx_tb__DOT__req_addr = 
                    (0xfU & __Vtask_regenx_tb__DOT__host_op__554__a);
                vlSelf->regenx_tb__DOT__req_wdata = 
                    (0xffU & __Vtask_regenx_tb__DOT__host_op__554__d);
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   184);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                        & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       185);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                }
                __Vtask_regenx_tb__DOT__chk__555__what = 
                    std::string{"req_ready stuck low"};
                __Vtask_regenx_tb__DOT__chk__555__ok 
                    = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__555__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__555__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_lat = 0U;
                co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(negedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   188);
                vlSelf->regenx_tb__DOT__req_valid = 0U;
                __Vtask_regenx_tb__DOT__host_op__554__guard = 0U;
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   191);
                while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                        & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard))) {
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       192);
                    __Vtask_regenx_tb__DOT__host_op__554__guard 
                        = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__554__guard);
                    vlSelf->regenx_tb__DOT__g_lat = 
                        ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                }
                __Vtask_regenx_tb__DOT__chk__556__what = 
                    std::string{"no response"};
                __Vtask_regenx_tb__DOT__chk__556__ok 
                    = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__554__guard);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__556__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__556__what));
                    }
                }
                vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
                vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
                    __Vtask_regenx_tb__DOT__chk__557__what 
                        = VL_SFORMATF_NX("%@: read of unavailable row 0 did not error",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__557__ok 
                        = vlSelf->regenx_tb__DOT__g_err;
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__557__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__557__what));
                        }
                    }
                } else {
                    __Vtask_regenx_tb__DOT__chk__558__what 
                        = VL_SFORMATF_NX("%@: unexpected error row 0",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag)) ;
                    __Vtask_regenx_tb__DOT__chk__558__ok 
                        = (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__558__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__558__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__chk__559__what 
                        = VL_SFORMATF_NX("%@: row 0 read %02x expected %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                         8,vlSelf->regenx_tb__DOT__shadow
                                         [0U]) ;
                    __Vtask_regenx_tb__DOT__chk__559__ok 
                        = ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                           == vlSelf->regenx_tb__DOT__shadow
                           [0U]);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__559__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__559__what));
                        }
                    }
                }
                __Vtask_regenx_tb__DOT__chk__560__what 
                    = VL_SFORMATF_NX("%@: read latency %0d",
                                     -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                     32,vlSelf->regenx_tb__DOT__g_lat) ;
                __Vtask_regenx_tb__DOT__chk__560__ok 
                    = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
                vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__checks);
                if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__560__ok)))) {
                    vlSelf->regenx_tb__DOT__errors 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                    if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                        VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                  64,VL_TIME_UNITED_Q(1000),
                                  -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                  -1,&(__Vtask_regenx_tb__DOT__chk__560__what));
                    }
                }
                __Vtask_regenx_tb__DOT__sweep__549__unnamedblk16__DOT__k 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__549__unnamedblk16__DOT__k);
            }
            __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r = 0U;
            while (VL_GTS_III(32, 0x10U, __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r)) {
                if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                              >> (0xfU & __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r))))) {
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [0U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [0U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [0U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [1U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [1U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [1U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [2U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [2U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [2U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [3U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [3U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [3U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [4U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [4U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [4U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [5U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [5U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [5U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [6U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [6U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [6U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    __Vtask_regenx_tb__DOT__host_op__561__d 
                        = vlSelf->regenx_tb__DOT__pats
                        [7U];
                    __Vtask_regenx_tb__DOT__host_op__561__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__561__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__561__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__561__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__561__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__562__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__562__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__562__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__562__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__561__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__561__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__561__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__563__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__563__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__561__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__563__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__563__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__host_op__564__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__564__w = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__564__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__564__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__564__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__565__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__565__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__565__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__565__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__564__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__564__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__564__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__566__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__566__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__564__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__566__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__566__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                    __Vtask_regenx_tb__DOT__chk__567__what 
                        = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                         -1,&(__Vtask_regenx_tb__DOT__sweep__549__tag),
                                         32,__Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r,
                                         8,vlSelf->regenx_tb__DOT__pats
                                         [7U],8,vlSelf->regenx_tb__DOT__g_data) ;
                    __Vtask_regenx_tb__DOT__chk__567__ok 
                        = (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                            == vlSelf->regenx_tb__DOT__pats
                            [7U]) & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__567__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__567__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__shadow[(0xfU 
                                                    & __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r)] = 0U;
                    __Vtask_regenx_tb__DOT__host_op__568__d = 0U;
                    __Vtask_regenx_tb__DOT__host_op__568__a 
                        = __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r;
                    __Vtask_regenx_tb__DOT__host_op__568__w = 1U;
                    __Vtask_regenx_tb__DOT__host_op__568__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       182);
                    vlSelf->regenx_tb__DOT__req_valid = 1U;
                    vlSelf->regenx_tb__DOT__req_write 
                        = __Vtask_regenx_tb__DOT__host_op__568__w;
                    vlSelf->regenx_tb__DOT__req_addr 
                        = (0xfU & __Vtask_regenx_tb__DOT__host_op__568__a);
                    vlSelf->regenx_tb__DOT__req_wdata 
                        = (0xffU & __Vtask_regenx_tb__DOT__host_op__568__d);
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       184);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                            & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__568__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           185);
                        __Vtask_regenx_tb__DOT__host_op__568__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__568__guard);
                    }
                    __Vtask_regenx_tb__DOT__chk__569__what = 
                        std::string{"req_ready stuck low"};
                    __Vtask_regenx_tb__DOT__chk__569__ok 
                        = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__568__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__569__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__569__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_lat = 0U;
                    co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(negedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       188);
                    vlSelf->regenx_tb__DOT__req_valid = 0U;
                    __Vtask_regenx_tb__DOT__host_op__568__guard = 0U;
                    co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                       nullptr, 
                                                                       "@(posedge regenx_tb.clk)", 
                                                                       "tb/regenx_tb.sv", 
                                                                       191);
                    while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                            & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__568__guard))) {
                        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                           nullptr, 
                                                                           "@(posedge regenx_tb.clk)", 
                                                                           "tb/regenx_tb.sv", 
                                                                           192);
                        __Vtask_regenx_tb__DOT__host_op__568__guard 
                            = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__568__guard);
                        vlSelf->regenx_tb__DOT__g_lat 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__g_lat);
                    }
                    __Vtask_regenx_tb__DOT__chk__570__what = 
                        std::string{"no response"};
                    __Vtask_regenx_tb__DOT__chk__570__ok 
                        = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__568__guard);
                    vlSelf->regenx_tb__DOT__checks 
                        = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
                    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__570__ok)))) {
                        vlSelf->regenx_tb__DOT__errors 
                            = ((IData)(1U) + vlSelf->regenx_tb__DOT__errors);
                        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                            VL_WRITEF("[%0t] FAIL (%@): %@\n",
                                      64,VL_TIME_UNITED_Q(1000),
                                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                                      -1,&(__Vtask_regenx_tb__DOT__chk__570__what));
                        }
                    }
                    vlSelf->regenx_tb__DOT__g_data 
                        = vlSelf->regenx_tb__DOT__rsp_rdata;
                    vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
                }
                __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__549__unnamedblk19__DOT__r);
            }
            __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__unnamedblk22__DOT__r);
        }
        vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k 
            = ((IData)(1U) + vlSelf->__Vtask_regenx_tb__DOT__t_each_single__528__unnamedblk21__DOT__k);
    }
}
