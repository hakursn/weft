// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_lsu_sv__pch.h"

//============================================================
// Constructors

Vtb_lsu_sv::Vtb_lsu_sv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_lsu_sv__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_lsu_sv::Vtb_lsu_sv(const char* _vcname__)
    : Vtb_lsu_sv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_lsu_sv::~Vtb_lsu_sv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_lsu_sv___024root___eval_debug_assertions(Vtb_lsu_sv___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_lsu_sv___024root___eval_static(Vtb_lsu_sv___024root* vlSelf);
void Vtb_lsu_sv___024root___eval_initial(Vtb_lsu_sv___024root* vlSelf);
void Vtb_lsu_sv___024root___eval_settle(Vtb_lsu_sv___024root* vlSelf);
void Vtb_lsu_sv___024root___eval(Vtb_lsu_sv___024root* vlSelf);

void Vtb_lsu_sv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_lsu_sv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_lsu_sv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_lsu_sv___024root___eval_static(&(vlSymsp->TOP));
        Vtb_lsu_sv___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_lsu_sv___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_lsu_sv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_lsu_sv::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_lsu_sv::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_lsu_sv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_lsu_sv___024root___eval_final(Vtb_lsu_sv___024root* vlSelf);

VL_ATTR_COLD void Vtb_lsu_sv::final() {
    Vtb_lsu_sv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_lsu_sv::hierName() const { return vlSymsp->name(); }
const char* Vtb_lsu_sv::modelName() const { return "Vtb_lsu_sv"; }
unsigned Vtb_lsu_sv::threads() const { return 1; }
void Vtb_lsu_sv::prepareClone() const { contextp()->prepareClone(); }
void Vtb_lsu_sv::atClone() const {
    contextp()->threadPoolpOnClone();
}
