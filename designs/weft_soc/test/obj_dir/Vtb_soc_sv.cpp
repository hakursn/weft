// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_soc_sv__pch.h"

//============================================================
// Constructors

Vtb_soc_sv::Vtb_soc_sv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_soc_sv__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_soc_sv::Vtb_soc_sv(const char* _vcname__)
    : Vtb_soc_sv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_soc_sv::~Vtb_soc_sv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_soc_sv___024root___eval_debug_assertions(Vtb_soc_sv___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_soc_sv___024root___eval_static(Vtb_soc_sv___024root* vlSelf);
void Vtb_soc_sv___024root___eval_initial(Vtb_soc_sv___024root* vlSelf);
void Vtb_soc_sv___024root___eval_settle(Vtb_soc_sv___024root* vlSelf);
void Vtb_soc_sv___024root___eval(Vtb_soc_sv___024root* vlSelf);

void Vtb_soc_sv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_soc_sv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_soc_sv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_soc_sv___024root___eval_static(&(vlSymsp->TOP));
        Vtb_soc_sv___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_soc_sv___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_soc_sv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_soc_sv::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_soc_sv::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_soc_sv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_soc_sv___024root___eval_final(Vtb_soc_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc_sv::final() {
    Vtb_soc_sv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_soc_sv::hierName() const { return vlSymsp->name(); }
const char* Vtb_soc_sv::modelName() const { return "Vtb_soc_sv"; }
unsigned Vtb_soc_sv::threads() const { return 1; }
void Vtb_soc_sv::prepareClone() const { contextp()->prepareClone(); }
void Vtb_soc_sv::atClone() const {
    contextp()->threadPoolpOnClone();
}
