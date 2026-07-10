// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_uart_sv__pch.h"

//============================================================
// Constructors

Vtb_uart_sv::Vtb_uart_sv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_uart_sv__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_uart_sv::Vtb_uart_sv(const char* _vcname__)
    : Vtb_uart_sv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_uart_sv::~Vtb_uart_sv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_uart_sv___024root___eval_debug_assertions(Vtb_uart_sv___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_uart_sv___024root___eval_static(Vtb_uart_sv___024root* vlSelf);
void Vtb_uart_sv___024root___eval_initial(Vtb_uart_sv___024root* vlSelf);
void Vtb_uart_sv___024root___eval_settle(Vtb_uart_sv___024root* vlSelf);
void Vtb_uart_sv___024root___eval(Vtb_uart_sv___024root* vlSelf);

void Vtb_uart_sv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_uart_sv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_uart_sv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_uart_sv___024root___eval_static(&(vlSymsp->TOP));
        Vtb_uart_sv___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_uart_sv___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_uart_sv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_uart_sv::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_uart_sv::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_uart_sv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_uart_sv___024root___eval_final(Vtb_uart_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_sv::final() {
    Vtb_uart_sv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_uart_sv::hierName() const { return vlSymsp->name(); }
const char* Vtb_uart_sv::modelName() const { return "Vtb_uart_sv"; }
unsigned Vtb_uart_sv::threads() const { return 1; }
void Vtb_uart_sv::prepareClone() const { contextp()->prepareClone(); }
void Vtb_uart_sv::atClone() const {
    contextp()->threadPoolpOnClone();
}
