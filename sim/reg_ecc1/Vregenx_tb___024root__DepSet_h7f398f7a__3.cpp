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
    CData/*0:0*/ regenx_tb__DOT__g_fix;
    regenx_tb__DOT__g_fix = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0;
    __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1;
    __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__190__ok;
    __Vtask_regenx_tb__DOT__chk__190__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__190__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__191__ok;
    __Vtask_regenx_tb__DOT__chk__191__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__191__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__192__ok;
    __Vtask_regenx_tb__DOT__chk__192__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__192__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__193__ok;
    __Vtask_regenx_tb__DOT__chk__193__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__193__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__194__ok;
    __Vtask_regenx_tb__DOT__chk__194__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__194__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__195__ok;
    __Vtask_regenx_tb__DOT__chk__195__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__195__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__196__ok;
    __Vtask_regenx_tb__DOT__chk__196__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__196__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__197__ok;
    __Vtask_regenx_tb__DOT__chk__197__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__197__what;
    std::string __Vtask_regenx_tb__DOT__sweep__198__tag;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__198__rounds;
    __Vtask_regenx_tb__DOT__sweep__198__rounds = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__198__unnamedblk16__DOT__k;
    __Vtask_regenx_tb__DOT__sweep__198__unnamedblk16__DOT__k = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
    __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__199__w;
    __Vtask_regenx_tb__DOT__host_op__199__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__199__a;
    __Vtask_regenx_tb__DOT__host_op__199__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__199__d;
    __Vtask_regenx_tb__DOT__host_op__199__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__199__guard;
    __Vtask_regenx_tb__DOT__host_op__199__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__200__ok;
    __Vtask_regenx_tb__DOT__chk__200__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__200__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__201__ok;
    __Vtask_regenx_tb__DOT__chk__201__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__201__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__202__ok;
    __Vtask_regenx_tb__DOT__chk__202__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__202__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__203__w;
    __Vtask_regenx_tb__DOT__host_op__203__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__203__a;
    __Vtask_regenx_tb__DOT__host_op__203__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__203__d;
    __Vtask_regenx_tb__DOT__host_op__203__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__203__guard;
    __Vtask_regenx_tb__DOT__host_op__203__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__204__ok;
    __Vtask_regenx_tb__DOT__chk__204__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__204__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__205__ok;
    __Vtask_regenx_tb__DOT__chk__205__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__205__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__206__ok;
    __Vtask_regenx_tb__DOT__chk__206__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__206__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__207__ok;
    __Vtask_regenx_tb__DOT__chk__207__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__207__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__208__ok;
    __Vtask_regenx_tb__DOT__chk__208__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__208__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__209__ok;
    __Vtask_regenx_tb__DOT__chk__209__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__209__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__210__w;
    __Vtask_regenx_tb__DOT__host_op__210__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__210__a;
    __Vtask_regenx_tb__DOT__host_op__210__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__210__d;
    __Vtask_regenx_tb__DOT__host_op__210__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__210__guard;
    __Vtask_regenx_tb__DOT__host_op__210__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__211__ok;
    __Vtask_regenx_tb__DOT__chk__211__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__211__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__212__ok;
    __Vtask_regenx_tb__DOT__chk__212__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__212__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__213__w;
    __Vtask_regenx_tb__DOT__host_op__213__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__213__a;
    __Vtask_regenx_tb__DOT__host_op__213__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__213__d;
    __Vtask_regenx_tb__DOT__host_op__213__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__213__guard;
    __Vtask_regenx_tb__DOT__host_op__213__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__214__ok;
    __Vtask_regenx_tb__DOT__chk__214__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__214__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__215__ok;
    __Vtask_regenx_tb__DOT__chk__215__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__215__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__216__ok;
    __Vtask_regenx_tb__DOT__chk__216__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__216__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__host_op__217__w;
    __Vtask_regenx_tb__DOT__host_op__217__w = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__217__a;
    __Vtask_regenx_tb__DOT__host_op__217__a = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__217__d;
    __Vtask_regenx_tb__DOT__host_op__217__d = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__host_op__217__guard;
    __Vtask_regenx_tb__DOT__host_op__217__guard = 0;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__218__ok;
    __Vtask_regenx_tb__DOT__chk__218__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__218__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__219__ok;
    __Vtask_regenx_tb__DOT__chk__219__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__219__what;
    CData/*0:0*/ __Vtask_regenx_tb__DOT__chk__220__ok;
    __Vtask_regenx_tb__DOT__chk__220__ok = 0;
    std::string __Vtask_regenx_tb__DOT__chk__220__what;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__223__slot;
    __Vtask_regenx_tb__DOT__set_fault__223__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__223__kind;
    __Vtask_regenx_tb__DOT__set_fault__223__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__223__row;
    __Vtask_regenx_tb__DOT__set_fault__223__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__223__bitn;
    __Vtask_regenx_tb__DOT__set_fault__223__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__224__kind;
    __Vtask_regenx_tb__DOT__late_fault__224__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__224__row;
    __Vtask_regenx_tb__DOT__late_fault__224__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__224__bitn;
    __Vtask_regenx_tb__DOT__late_fault__224__bitn = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__late_fault__224__g;
    __Vtask_regenx_tb__DOT__late_fault__224__g = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__do_reset__225__cycles;
    __Vtask_regenx_tb__DOT__do_reset__225__cycles = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__226__n;
    __Vtask_regenx_tb__DOT__tick__226__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__tick__227__n;
    __Vtask_regenx_tb__DOT__tick__227__n = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__228__slot;
    __Vtask_regenx_tb__DOT__set_fault__228__slot = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__228__kind;
    __Vtask_regenx_tb__DOT__set_fault__228__kind = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__228__row;
    __Vtask_regenx_tb__DOT__set_fault__228__row = 0;
    IData/*31:0*/ __Vtask_regenx_tb__DOT__set_fault__228__bitn;
    __Vtask_regenx_tb__DOT__set_fault__228__bitn = 0;
    // Body
    if ((vlSelf->regenx_tb__DOT__e_bad[0xeU] & vlSelf->regenx_tb__DOT__e_sev
         [0xeU])) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_unav[0xeU] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0xfU] & vlSelf->regenx_tb__DOT__e_sev
         [0xfU])) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_unav[0xfU] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [0U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[0U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[1U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [1U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[1U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[1U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[1U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[1U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[2U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [2U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[2U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[2U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[2U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[2U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[3U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [3U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[3U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[3U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[3U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[3U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[4U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [4U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[4U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[4U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[4U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[4U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[5U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [5U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[5U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[5U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[5U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[5U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[6U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [6U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[6U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[6U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[6U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[6U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[7U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [7U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[7U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[7U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[7U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[7U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[8U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [8U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[8U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[8U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[8U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[8U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[9U] & (~ vlSelf->regenx_tb__DOT__e_sev
                                              [9U]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[9U] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[9U] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[9U] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[9U] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0xaU] & (~ vlSelf->regenx_tb__DOT__e_sev
                                                [0xaU]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xaU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xaU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[0xaU] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0xbU] & (~ vlSelf->regenx_tb__DOT__e_sev
                                                [0xbU]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xbU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xbU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[0xbU] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0xcU] & (~ vlSelf->regenx_tb__DOT__e_sev
                                                [0xcU]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xcU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xcU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[0xcU] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0xdU] & (~ vlSelf->regenx_tb__DOT__e_sev
                                                [0xdU]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xdU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xdU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[0xdU] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0xeU] & (~ vlSelf->regenx_tb__DOT__e_sev
                                                [0xeU]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xeU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xeU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[0xeU] = 1U;
        }
    }
    if ((vlSelf->regenx_tb__DOT__e_bad[0xfU] & (~ vlSelf->regenx_tb__DOT__e_sev
                                                [0xfU]))) {
        if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
            [0U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[0U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x10U;
            vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
        } else if (vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp
                   [1U]) {
            vlSelf->__Vtask_regenx_tb__DOT__model__187__free_sp[1U] = 0U;
            vlSelf->regenx_tb__DOT__e_map[0xfU] = 0x11U;
            vlSelf->regenx_tb__DOT__e_rem[0xfU] = 1U;
        } else {
            vlSelf->regenx_tb__DOT__e_asst[0xfU] = 1U;
        }
    }
    if ((1U & (IData)(vlSelf->regenx_tb__DOT__f_en))) {
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
    if ((0U == (IData)(vlSelf->regenx_tb__DOT__f_en))) {
        vlSelf->regenx_tb__DOT__cov_out[0U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [0U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[0U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[0U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[0U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[1U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[1U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[1U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[2U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[2U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[2U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[3U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[3U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[3U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[4U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[4U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[4U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[5U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[5U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[5U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[6U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[6U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[6U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[7U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[7U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[7U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[8U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[8U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[8U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[9U]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[9U]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[9U]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[0xaU]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[0xaU]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[0xaU]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[0xbU]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[0xbU]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[0xbU]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[0xcU]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[0xcU]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[0xcU]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[0xdU]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[0xdU]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[0xdU]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[0xeU]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[0xeU]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[0xeU]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    if (vlSelf->regenx_tb__DOT__e_rem[0xfU]) {
        vlSelf->regenx_tb__DOT__cov_out[1U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [1U]);
    }
    if (vlSelf->regenx_tb__DOT__e_asst[0xfU]) {
        vlSelf->regenx_tb__DOT__cov_out[2U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [2U]);
    }
    if (vlSelf->regenx_tb__DOT__e_unav[0xfU]) {
        vlSelf->regenx_tb__DOT__cov_out[3U] = ((IData)(1U) 
                                               + vlSelf->regenx_tb__DOT__cov_out
                                               [3U]);
    }
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[0] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & vlSelf->regenx_tb__DOT__dut__DOT__bad_phys) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[1] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 1U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [1U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 1U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [1U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[1U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[2] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 2U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [2U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 2U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [2U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[2U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[3] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 3U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [3U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 3U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [3U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[3U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[4] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 4U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [4U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 4U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [4U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[4U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[5] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 5U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [5U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 5U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [5U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[5U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[6] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 6U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [6U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 6U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [6U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[6U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[7] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 7U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [7U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 7U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [7U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[7U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[8] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 8U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [8U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 8U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [8U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[8U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[9] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 9U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [9U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 9U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [9U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[9U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[10] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0xaU)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0xaU]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0xaU)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0xaU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0xaU]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[11] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0xbU)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0xbU]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0xbU)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0xbU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0xbU]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[12] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0xcU)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0xcU]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0xcU)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0xcU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0xcU]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[13] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0xdU)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0xdU]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0xdU)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0xdU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0xdU]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[14] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0xeU)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0xeU]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0xeU)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0xeU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0xeU]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[15] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0xfU)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0xfU]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0xfU)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0xfU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0xfU]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[16] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0x10U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0x10U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0x10U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0x10U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0x10U]);
    __Vtask_regenx_tb__DOT__chk__190__what = VL_SFORMATF_NX("%@: bad_phys[17] dut=%b exp=%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            1,
                                                            (1U 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                                >> 0x11U)),
                                                            1,
                                                            vlSelf->regenx_tb__DOT__e_bad
                                                            [0x11U]) ;
    __Vtask_regenx_tb__DOT__chk__190__ok = ((1U & (vlSelf->regenx_tb__DOT__dut__DOT__bad_phys 
                                                   >> 0x11U)) 
                                            == vlSelf->regenx_tb__DOT__e_bad
                                            [0x11U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__190__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__190__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb 
           + vlSelf->regenx_tb__DOT__e_bad[0x11U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[0] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [0U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U]) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [0U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[0]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [0U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[0]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [0U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[0U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[0U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[0U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[1] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                >> 5U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [1U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 5U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [1U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[1]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 1U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [1U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[1]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 1U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [1U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[1U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[1U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[1U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[2] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                >> 0xaU)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [2U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 0xaU)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [2U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[2]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 2U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [2U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[2]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 2U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [2U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[2U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[2U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[2U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[3] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                >> 0xfU)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [3U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 0xfU)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [3U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[3]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 3U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [3U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[3]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 3U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [3U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[3U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[3U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[3U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[4] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                >> 0x14U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [4U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 0x14U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [4U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[4]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 4U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [4U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[4]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 4U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [4U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[4U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[4U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[4U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[5] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                >> 0x19U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [5U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                >> 0x19U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [5U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[5]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 5U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [5U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[5]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 5U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [5U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[5U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[5U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[5U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[6] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                                 << 2U) 
                                                                | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                                   >> 0x1eU))),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [6U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                 << 2U) 
                                                | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[0U] 
                                                   >> 0x1eU))) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [6U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[6]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 6U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [6U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[6]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 6U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [6U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[6U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[6U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[6U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[7] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                                >> 3U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [7U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                >> 3U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [7U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[7]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 7U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [7U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[7]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 7U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [7U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[7U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[7U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[7U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[8] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                                >> 8U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [8U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                >> 8U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [8U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[8]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 8U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [8U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[8]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 8U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [8U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[8U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[8U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[8U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[9] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                                >> 0xdU)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [9U]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                >> 0xdU)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [9U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[9]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 9U)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [9U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[9]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 9U)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [9U]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[9U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[9U]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[9U]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[10] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                                >> 0x12U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [0xaU]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                >> 0x12U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [0xaU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[10]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 0xaU)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [0xaU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[10]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 0xaU)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [0xaU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[0xaU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[0xaU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[0xaU]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[11] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                                >> 0x17U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [0xbU]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                >> 0x17U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [0xbU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[11]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 0xbU)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [0xbU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[11]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 0xbU)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [0xbU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[0xbU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[0xbU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[0xbU]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[12] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                                 << 4U) 
                                                                | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                                   >> 0x1cU))),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [0xcU]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & ((vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                 << 4U) 
                                                | (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[1U] 
                                                   >> 0x1cU))) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [0xcU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[12]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 0xcU)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [0xcU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[12]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 0xcU)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [0xcU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[0xcU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[0xcU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[0xcU]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[13] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                                >> 1U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [0xdU]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                >> 1U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [0xdU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[13]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 0xdU)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [0xdU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[13]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 0xdU)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [0xdU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[0xdU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[0xdU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[0xdU]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[14] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                                >> 6U)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [0xeU]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                >> 6U)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [0xeU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[14]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 0xeU)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [0xeU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[14]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 0xeU)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [0xeU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[0xeU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[0xeU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[0xeU]);
    __Vtask_regenx_tb__DOT__chk__191__what = VL_SFORMATF_NX("%@: map[15] dut=%0# exp=%0#",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (0x1fU 
                                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                                >> 0xbU)),
                                                            5,
                                                            vlSelf->regenx_tb__DOT__e_map
                                                            [0xfU]) ;
    __Vtask_regenx_tb__DOT__chk__191__ok = ((0x1fU 
                                             & (vlSelf->regenx_tb__DOT__dut__DOT__l2p_flat[2U] 
                                                >> 0xbU)) 
                                            == vlSelf->regenx_tb__DOT__e_map
                                            [0xfU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__191__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__191__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__192__what = VL_SFORMATF_NX("%@: unavail[15]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__192__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                   >> 0xfU)) 
                                            == vlSelf->regenx_tb__DOT__e_unav
                                            [0xfU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__192__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__192__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__193__what = VL_SFORMATF_NX("%@: assist[15]",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__193__ok = ((1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__assist) 
                                                   >> 0xfU)) 
                                            == vlSelf->regenx_tb__DOT__e_asst
                                            [0xfU]);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__193__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__193__what));
        }
    }
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr 
           + vlSelf->regenx_tb__DOT__e_rem[0xfU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
           + vlSelf->regenx_tb__DOT__e_asst[0xfU]);
    vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
        = (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu 
           + vlSelf->regenx_tb__DOT__e_unav[0xfU]);
    __Vtask_regenx_tb__DOT__chk__194__what = VL_SFORMATF_NX("%@: fault_count %0# exp %0d",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            6,
                                                            (IData)(vlSelf->regenx_tb__DOT__fault_count),
                                                            32,
                                                            vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb) ;
    __Vtask_regenx_tb__DOT__chk__194__ok = ((IData)(vlSelf->regenx_tb__DOT__fault_count) 
                                            == vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nb);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__194__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__194__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__195__what = VL_SFORMATF_NX("%@: remapped_count %0# exp %0d",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            5,
                                                            (IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt),
                                                            32,
                                                            vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr) ;
    __Vtask_regenx_tb__DOT__chk__195__ok = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__remap_cnt) 
                                            == vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nr);
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__195__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__195__what));
        }
    }
    __Vtask_regenx_tb__DOT__chk__196__what = VL_SFORMATF_NX("%@: degraded flag",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag)) ;
    __Vtask_regenx_tb__DOT__chk__196__ok = ((IData)(vlSelf->regenx_tb__DOT__degraded) 
                                            == (0U 
                                                != 
                                                (vlSelf->__Vtask_regenx_tb__DOT__check_state__186__na 
                                                 + vlSelf->__Vtask_regenx_tb__DOT__check_state__186__nu)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__196__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__196__what));
        }
    }
    __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 0U;
    __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 0U;
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[0U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[0U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[1U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[1U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[2U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[2U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[3U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[3U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[4U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[4U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[5U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[5U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[6U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[6U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[7U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[7U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[8U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[8U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[9U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[9U])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[0xaU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[0xaU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[0xbU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[0xbU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[0xcU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[0xcU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[0xdU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[0xdU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[0xeU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[0xeU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    if ((0x10U == vlSelf->regenx_tb__DOT__e_map[0xfU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0 = 1U;
    }
    if ((0x11U == vlSelf->regenx_tb__DOT__e_map[0xfU])) {
        __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1 = 1U;
    }
    __Vtask_regenx_tb__DOT__chk__197__what = VL_SFORMATF_NX("%@: spare_used %b exp %b%b",
                                                            -1,
                                                            &(vlSelf->__Vtask_regenx_tb__DOT__check_state__186__tag),
                                                            2,
                                                            (IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used),
                                                            1,
                                                            __Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1,
                                                            1,
                                                            (IData)(__Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0)) ;
    __Vtask_regenx_tb__DOT__chk__197__ok = ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__spare_used) 
                                            == (((IData)(__Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u1) 
                                                 << 1U) 
                                                | (IData)(__Vtask_regenx_tb__DOT__check_state__186__unnamedblk14__DOT__u0)));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__197__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__197__what));
        }
    }
    __Vtask_regenx_tb__DOT__sweep__198__rounds = 1U;
    __Vtask_regenx_tb__DOT__sweep__198__tag = std::string{"unavail"};
    __Vtask_regenx_tb__DOT__sweep__198__unnamedblk16__DOT__k = 0U;
    while (VL_LTS_III(32, __Vtask_regenx_tb__DOT__sweep__198__unnamedblk16__DOT__k, __Vtask_regenx_tb__DOT__sweep__198__rounds)) {
        vlSelf->regenx_tb__DOT__shadow[0U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [0U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 0",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[1U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [1U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 1",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 1U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[2U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [2U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 2",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 2U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[3U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [3U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 3",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 3U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[4U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [4U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 4",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 4U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[5U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [5U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 5",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 5U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[6U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [6U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 6",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 6U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[7U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [7U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 7",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 7U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[8U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [8U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 8",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 8U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[9U] = (0xffU 
                                              & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [9U];
        __Vtask_regenx_tb__DOT__host_op__199__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 9",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 9U)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xaU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [0xaU];
        __Vtask_regenx_tb__DOT__host_op__199__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 10",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xaU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xbU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [0xbU];
        __Vtask_regenx_tb__DOT__host_op__199__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 11",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xbU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xcU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [0xcU];
        __Vtask_regenx_tb__DOT__host_op__199__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 12",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xcU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xdU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [0xdU];
        __Vtask_regenx_tb__DOT__host_op__199__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 13",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xdU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xeU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [0xeU];
        __Vtask_regenx_tb__DOT__host_op__199__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 14",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xeU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        vlSelf->regenx_tb__DOT__shadow[0xfU] = (0xffU 
                                                & VL_RANDOM_I());
        __Vtask_regenx_tb__DOT__host_op__199__d = vlSelf->regenx_tb__DOT__shadow
            [0xfU];
        __Vtask_regenx_tb__DOT__host_op__199__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__199__w = 1U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__199__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__199__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__199__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
        }
        __Vtask_regenx_tb__DOT__chk__200__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__200__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__200__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__200__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__199__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__199__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__199__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__201__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__201__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__199__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__201__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__201__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        __Vtask_regenx_tb__DOT__chk__202__what = VL_SFORMATF_NX("%@: write err flag row 15",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
        __Vtask_regenx_tb__DOT__chk__202__ok = ((IData)(vlSelf->regenx_tb__DOT__g_err) 
                                                == 
                                                (1U 
                                                 & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                    >> 0xfU)));
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__202__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__202__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 0xfU;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x8000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 15 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 15",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 15 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xfU]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xfU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 0xeU;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x4000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 14 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 14",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 14 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xeU]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xeU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 0xdU;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x2000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 13 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 13",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 13 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xdU]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xdU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 0xcU;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x1000U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 12 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 12",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 12 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xcU]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xcU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 0xbU;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x800U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 11 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 11",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 11 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xbU]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xbU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 0xaU;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x400U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 10 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 10",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 10 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0xaU]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0xaU]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 9U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x200U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 9 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 9",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 9 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [9U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[9U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 8U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x100U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 8 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 8",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 8 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [8U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[8U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 7U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x80U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 7 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 7",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 7 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [7U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[7U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 6U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x40U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 6 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 6",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 6 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [6U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[6U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 5U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x20U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 5 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 5",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 5 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [5U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[5U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 4U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((0x10U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 4 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 4",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 4 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [4U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[4U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 3U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((8U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 3 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 3",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 3 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [3U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[3U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 2U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((4U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 2 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 2",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 2 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [2U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[2U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 1U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((2U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 1 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 1",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 1 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [1U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[1U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__host_op__203__d = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__a = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__w = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           182);
        vlSelf->regenx_tb__DOT__req_valid = 1U;
        vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__203__w;
        vlSelf->regenx_tb__DOT__req_addr = (0xfU & __Vtask_regenx_tb__DOT__host_op__203__a);
        vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                             & __Vtask_regenx_tb__DOT__host_op__203__d);
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           184);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               185);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
        }
        __Vtask_regenx_tb__DOT__chk__204__what = std::string{"req_ready stuck low"};
        __Vtask_regenx_tb__DOT__chk__204__ok = VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__204__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__204__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_lat = 0U;
        co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           188);
        vlSelf->regenx_tb__DOT__req_valid = 0U;
        __Vtask_regenx_tb__DOT__host_op__203__guard = 0U;
        co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge regenx_tb.clk)", 
                                                           "tb/regenx_tb.sv", 
                                                           191);
        while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard))) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               192);
            __Vtask_regenx_tb__DOT__host_op__203__guard 
                = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__203__guard);
            vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                             + vlSelf->regenx_tb__DOT__g_lat);
        }
        __Vtask_regenx_tb__DOT__chk__205__what = std::string{"no response"};
        __Vtask_regenx_tb__DOT__chk__205__ok = VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__203__guard);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__205__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__205__what));
            }
        }
        vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
        vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
        regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        if ((1U & (IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail))) {
            __Vtask_regenx_tb__DOT__chk__206__what 
                = VL_SFORMATF_NX("%@: read of unavailable row 0 did not error",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__206__ok = vlSelf->regenx_tb__DOT__g_err;
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__206__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__206__what));
                }
            }
        } else {
            __Vtask_regenx_tb__DOT__chk__207__what 
                = VL_SFORMATF_NX("%@: unexpected error row 0",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag)) ;
            __Vtask_regenx_tb__DOT__chk__207__ok = 
                (1U & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__207__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__207__what));
                }
            }
            __Vtask_regenx_tb__DOT__chk__208__what 
                = VL_SFORMATF_NX("%@: row 0 read %02x expected %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 8,(IData)(vlSelf->regenx_tb__DOT__g_data),
                                 8,vlSelf->regenx_tb__DOT__shadow
                                 [0U]) ;
            __Vtask_regenx_tb__DOT__chk__208__ok = 
                ((IData)(vlSelf->regenx_tb__DOT__g_data) 
                 == vlSelf->regenx_tb__DOT__shadow[0U]);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__208__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__208__what));
                }
            }
        }
        __Vtask_regenx_tb__DOT__chk__209__what = VL_SFORMATF_NX("%@: read latency %0d",
                                                                -1,
                                                                &(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                                                32,
                                                                vlSelf->regenx_tb__DOT__g_lat) ;
        __Vtask_regenx_tb__DOT__chk__209__ok = VL_GTES_III(32, 6U, vlSelf->regenx_tb__DOT__g_lat);
        vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__checks);
        if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__209__ok)))) {
            vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__errors);
            if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                VL_WRITEF("[%0t] FAIL (%@): %@\n",64,
                          VL_TIME_UNITED_Q(1000),-9,
                          -1,&(vlSelf->regenx_tb__DOT__phase),
                          -1,&(__Vtask_regenx_tb__DOT__chk__209__what));
            }
        }
        __Vtask_regenx_tb__DOT__sweep__198__unnamedblk16__DOT__k 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__198__unnamedblk16__DOT__k);
    }
    __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r = 0U;
    while (VL_GTS_III(32, 0x10U, __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r)) {
        if ((1U & (~ ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                      >> (0xfU & __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r))))) {
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[0U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [0U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[0U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[1U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [1U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[1U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[2U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [2U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[2U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[3U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [3U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[3U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[4U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [4U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[4U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[5U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [5U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[5U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[6U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [6U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[6U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            __Vtask_regenx_tb__DOT__host_op__210__d 
                = vlSelf->regenx_tb__DOT__pats[7U];
            __Vtask_regenx_tb__DOT__host_op__210__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__210__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__210__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__210__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__210__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
            }
            __Vtask_regenx_tb__DOT__chk__211__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__211__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__211__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__211__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__210__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__210__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__210__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__212__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__212__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__210__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__212__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__212__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__host_op__213__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__213__w = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__213__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__213__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__213__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
            }
            __Vtask_regenx_tb__DOT__chk__214__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__214__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__214__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__214__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__213__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__213__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__213__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__215__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__215__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__213__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__215__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__215__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
            __Vtask_regenx_tb__DOT__chk__216__what 
                = VL_SFORMATF_NX("%@: row %0d pattern %02x got %02x",
                                 -1,&(__Vtask_regenx_tb__DOT__sweep__198__tag),
                                 32,__Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r,
                                 8,vlSelf->regenx_tb__DOT__pats
                                 [7U],8,vlSelf->regenx_tb__DOT__g_data) ;
            __Vtask_regenx_tb__DOT__chk__216__ok = 
                (((IData)(vlSelf->regenx_tb__DOT__g_data) 
                  == vlSelf->regenx_tb__DOT__pats[7U]) 
                 & (~ (IData)(vlSelf->regenx_tb__DOT__g_err)));
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__216__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__216__what));
                }
            }
            vlSelf->regenx_tb__DOT__shadow[(0xfU & __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r)] = 0U;
            __Vtask_regenx_tb__DOT__host_op__217__d = 0U;
            __Vtask_regenx_tb__DOT__host_op__217__a 
                = __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r;
            __Vtask_regenx_tb__DOT__host_op__217__w = 1U;
            __Vtask_regenx_tb__DOT__host_op__217__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               182);
            vlSelf->regenx_tb__DOT__req_valid = 1U;
            vlSelf->regenx_tb__DOT__req_write = __Vtask_regenx_tb__DOT__host_op__217__w;
            vlSelf->regenx_tb__DOT__req_addr = (0xfU 
                                                & __Vtask_regenx_tb__DOT__host_op__217__a);
            vlSelf->regenx_tb__DOT__req_wdata = (0xffU 
                                                 & __Vtask_regenx_tb__DOT__host_op__217__d);
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               184);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__req_ready)) 
                    & VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__217__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   185);
                __Vtask_regenx_tb__DOT__host_op__217__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__217__guard);
            }
            __Vtask_regenx_tb__DOT__chk__218__what = 
                std::string{"req_ready stuck low"};
            __Vtask_regenx_tb__DOT__chk__218__ok = 
                VL_GTS_III(32, 0x1f4U, __Vtask_regenx_tb__DOT__host_op__217__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__218__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__218__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_lat = 0U;
            co_await vlSelf->__VtrigSched_h1832ed33__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               188);
            vlSelf->regenx_tb__DOT__req_valid = 0U;
            __Vtask_regenx_tb__DOT__host_op__217__guard = 0U;
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               191);
            while (((~ (IData)(vlSelf->regenx_tb__DOT__rsp_valid)) 
                    & VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__217__guard))) {
                co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                                   nullptr, 
                                                                   "@(posedge regenx_tb.clk)", 
                                                                   "tb/regenx_tb.sv", 
                                                                   192);
                __Vtask_regenx_tb__DOT__host_op__217__guard 
                    = ((IData)(1U) + __Vtask_regenx_tb__DOT__host_op__217__guard);
                vlSelf->regenx_tb__DOT__g_lat = ((IData)(1U) 
                                                 + vlSelf->regenx_tb__DOT__g_lat);
            }
            __Vtask_regenx_tb__DOT__chk__219__what = 
                std::string{"no response"};
            __Vtask_regenx_tb__DOT__chk__219__ok = 
                VL_GTS_III(32, 0x64U, __Vtask_regenx_tb__DOT__host_op__217__guard);
            vlSelf->regenx_tb__DOT__checks = ((IData)(1U) 
                                              + vlSelf->regenx_tb__DOT__checks);
            if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__219__ok)))) {
                vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                                  + vlSelf->regenx_tb__DOT__errors);
                if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
                    VL_WRITEF("[%0t] FAIL (%@): %@\n",
                              64,VL_TIME_UNITED_Q(1000),
                              -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                              -1,&(__Vtask_regenx_tb__DOT__chk__219__what));
                }
            }
            vlSelf->regenx_tb__DOT__g_data = vlSelf->regenx_tb__DOT__rsp_rdata;
            vlSelf->regenx_tb__DOT__g_err = vlSelf->regenx_tb__DOT__rsp_error;
            regenx_tb__DOT__g_fix = vlSelf->regenx_tb__DOT__rsp_corrected;
        }
        __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__sweep__198__unnamedblk19__DOT__r);
    }
    __Vtask_regenx_tb__DOT__chk__220__what = std::string{"row10 should be unavailable"};
    __Vtask_regenx_tb__DOT__chk__220__ok = (1U & ((IData)(vlSelf->regenx_tb__DOT__dut__DOT__unavail) 
                                                  >> 0xaU));
    vlSelf->regenx_tb__DOT__checks = ((IData)(1U) + vlSelf->regenx_tb__DOT__checks);
    if ((1U & (~ (IData)(__Vtask_regenx_tb__DOT__chk__220__ok)))) {
        vlSelf->regenx_tb__DOT__errors = ((IData)(1U) 
                                          + vlSelf->regenx_tb__DOT__errors);
        if (VL_UNLIKELY(VL_GTES_III(32, 0x28U, vlSelf->regenx_tb__DOT__errors))) {
            VL_WRITEF("[%0t] FAIL (%@): %@\n",64,VL_TIME_UNITED_Q(1000),
                      -9,-1,&(vlSelf->regenx_tb__DOT__phase),
                      -1,&(__Vtask_regenx_tb__DOT__chk__220__what));
        }
    }
    vlSelf->regenx_tb__DOT__phase = std::string{"recovery"};
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
    __Vtask_regenx_tb__DOT__set_fault__223__bitn = 1U;
    __Vtask_regenx_tb__DOT__set_fault__223__row = 5U;
    __Vtask_regenx_tb__DOT__set_fault__223__kind = 2U;
    __Vtask_regenx_tb__DOT__set_fault__223__slot = 0U;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__223__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__223__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__223__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__223__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__223__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__223__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__223__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__223__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__223__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__223__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__223__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__223__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__223__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__223__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__223__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__223__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__223__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__223__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__223__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__223__slot)))));
    }
    vlSelf->__Vtask_regenx_tb__DOT__late_fault__224__row2 = 0U;
    vlSelf->__Vtask_regenx_tb__DOT__late_fault__224__kind2 = 0U;
    __Vtask_regenx_tb__DOT__late_fault__224__bitn = 0U;
    __Vtask_regenx_tb__DOT__late_fault__224__row = 0x10U;
    __Vtask_regenx_tb__DOT__late_fault__224__kind = 6U;
    vlSelf->__Vtask_regenx_tb__DOT__late_fault__224__slot = 1U;
    __Vtask_regenx_tb__DOT__late_fault__224__g = 0U;
    __Vtask_regenx_tb__DOT__do_reset__225__cycles = 4U;
    vlSelf->regenx_tb__DOT__rst_n = 0U;
    vlSelf->regenx_tb__DOT__req_valid = 0U;
    vlSelf->regenx_tb__DOT__scrub_en = 0U;
    vlSelf->regenx_tb__DOT__scrub_req = 0U;
    __Vtask_regenx_tb__DOT__tick__226__n = __Vtask_regenx_tb__DOT__do_reset__225__cycles;
    vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__226__n;
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
            & VL_GTS_III(32, 0xbb8U, __Vtask_regenx_tb__DOT__late_fault__224__g))) {
        __Vtask_regenx_tb__DOT__tick__227__n = 1U;
        vlSelf->regenx_tb__DOT____Vrepeat0 = __Vtask_regenx_tb__DOT__tick__227__n;
        while (VL_LTS_III(32, 0U, vlSelf->regenx_tb__DOT____Vrepeat0)) {
            co_await vlSelf->__VtrigSched_h1832eb76__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge regenx_tb.clk)", 
                                                               "tb/regenx_tb.sv", 
                                                               138);
            vlSelf->regenx_tb__DOT____Vrepeat0 = (vlSelf->regenx_tb__DOT____Vrepeat0 
                                                  - (IData)(1U));
        }
        __Vtask_regenx_tb__DOT__late_fault__224__g 
            = ((IData)(1U) + __Vtask_regenx_tb__DOT__late_fault__224__g);
    }
    __Vtask_regenx_tb__DOT__set_fault__228__bitn = __Vtask_regenx_tb__DOT__late_fault__224__bitn;
    __Vtask_regenx_tb__DOT__set_fault__228__row = __Vtask_regenx_tb__DOT__late_fault__224__row;
    __Vtask_regenx_tb__DOT__set_fault__228__kind = __Vtask_regenx_tb__DOT__late_fault__224__kind;
    __Vtask_regenx_tb__DOT__set_fault__228__slot = vlSelf->__Vtask_regenx_tb__DOT__late_fault__224__slot;
    vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0 = 1U;
    vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__228__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__228__row);
    vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__228__bitn);
    if ((2U >= (3U & __Vtask_regenx_tb__DOT__set_fault__228__slot))) {
        vlSelf->regenx_tb__DOT__f_en = (((~ ((IData)(1U) 
                                             << (3U 
                                                 & __Vtask_regenx_tb__DOT__set_fault__228__slot))) 
                                         & (IData)(vlSelf->regenx_tb__DOT__f_en)) 
                                        | (7U & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_hdbe59c3e__0) 
                                                 << 
                                                 (3U 
                                                  & __Vtask_regenx_tb__DOT__set_fault__228__slot))));
        vlSelf->regenx_tb__DOT__f_kind[(3U & __Vtask_regenx_tb__DOT__set_fault__228__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_he832db1a__0;
        vlSelf->regenx_tb__DOT__f_row[(3U & __Vtask_regenx_tb__DOT__set_fault__228__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_ha4e791a6__0;
        vlSelf->regenx_tb__DOT__f_bit[(3U & __Vtask_regenx_tb__DOT__set_fault__228__slot)] 
            = vlSelf->regenx_tb__DOT____Vlvbound_h04db47bb__0;
    }
    vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__228__kind);
    vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0 
        = (0x1fU & __Vtask_regenx_tb__DOT__set_fault__228__row);
    if (VL_LIKELY((0xeU >= (0xfU & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__228__slot))))) {
        vlSelf->regenx_tb__DOT__flt_row_flat = (((~ 
                                                  ((IData)(0x1fU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__228__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_row_flat)) 
                                                | (0x7fffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_haed0c7d8__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(5U), __Vtask_regenx_tb__DOT__set_fault__228__slot)))));
    }
    vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0 
        = (0xfU & __Vtask_regenx_tb__DOT__set_fault__228__bitn);
    if ((0xbU >= (0xfU & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__228__slot)))) {
        vlSelf->regenx_tb__DOT__flt_kind_flat = (((~ 
                                                   ((IData)(0xfU) 
                                                    << 
                                                    (0xfU 
                                                     & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__228__slot)))) 
                                                  & (IData)(vlSelf->regenx_tb__DOT__flt_kind_flat)) 
                                                 | (0xfffU 
                                                    & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_ha4bfc19c__0) 
                                                       << 
                                                       (0xfU 
                                                        & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__228__slot)))));
        vlSelf->regenx_tb__DOT__flt_bit_flat = (((~ 
                                                  ((IData)(0xfU) 
                                                   << 
                                                   (0xfU 
                                                    & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__228__slot)))) 
                                                 & (IData)(vlSelf->regenx_tb__DOT__flt_bit_flat)) 
                                                | (0xfffU 
                                                   & ((IData)(vlSelf->regenx_tb__DOT____Vlvbound_he887d7ec__0) 
                                                      << 
                                                      (0xfU 
                                                       & VL_MULS_III(32, (IData)(4U), __Vtask_regenx_tb__DOT__set_fault__228__slot)))));
    }
}
