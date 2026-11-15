// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregenx_tb__pch.h"

//============================================================
// Constructors

Vregenx_tb::Vregenx_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregenx_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregenx_tb::Vregenx_tb(const char* _vcname__)
    : Vregenx_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregenx_tb::~Vregenx_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vregenx_tb___024root___eval_debug_assertions(Vregenx_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vregenx_tb___024root___eval_static(Vregenx_tb___024root* vlSelf);
void Vregenx_tb___024root___eval_initial(Vregenx_tb___024root* vlSelf);
void Vregenx_tb___024root___eval_settle(Vregenx_tb___024root* vlSelf);
void Vregenx_tb___024root___eval(Vregenx_tb___024root* vlSelf);

void Vregenx_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregenx_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregenx_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vregenx_tb___024root___eval_static(&(vlSymsp->TOP));
        Vregenx_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vregenx_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vregenx_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vregenx_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vregenx_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vregenx_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vregenx_tb___024root___eval_final(Vregenx_tb___024root* vlSelf);

VL_ATTR_COLD void Vregenx_tb::final() {
    Vregenx_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregenx_tb::hierName() const { return vlSymsp->name(); }
const char* Vregenx_tb::modelName() const { return "Vregenx_tb"; }
unsigned Vregenx_tb::threads() const { return 1; }
void Vregenx_tb::prepareClone() const { contextp()->prepareClone(); }
void Vregenx_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vregenx_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vregenx_tb::trace()' called on model that was Verilated without --trace option");
}
