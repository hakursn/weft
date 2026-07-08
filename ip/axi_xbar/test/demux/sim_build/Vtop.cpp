// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , s_axi_awid{vlSymsp->TOP.s_axi_awid}
    , s_axi_awlen{vlSymsp->TOP.s_axi_awlen}
    , s_axi_awsize{vlSymsp->TOP.s_axi_awsize}
    , s_axi_awburst{vlSymsp->TOP.s_axi_awburst}
    , s_axi_awlock{vlSymsp->TOP.s_axi_awlock}
    , s_axi_awcache{vlSymsp->TOP.s_axi_awcache}
    , s_axi_awprot{vlSymsp->TOP.s_axi_awprot}
    , s_axi_awvalid{vlSymsp->TOP.s_axi_awvalid}
    , s_axi_awready{vlSymsp->TOP.s_axi_awready}
    , s_axi_wstrb{vlSymsp->TOP.s_axi_wstrb}
    , s_axi_wlast{vlSymsp->TOP.s_axi_wlast}
    , s_axi_wvalid{vlSymsp->TOP.s_axi_wvalid}
    , s_axi_wready{vlSymsp->TOP.s_axi_wready}
    , s_axi_bid{vlSymsp->TOP.s_axi_bid}
    , s_axi_bresp{vlSymsp->TOP.s_axi_bresp}
    , s_axi_bvalid{vlSymsp->TOP.s_axi_bvalid}
    , s_axi_bready{vlSymsp->TOP.s_axi_bready}
    , s_axi_arid{vlSymsp->TOP.s_axi_arid}
    , s_axi_arlen{vlSymsp->TOP.s_axi_arlen}
    , s_axi_arsize{vlSymsp->TOP.s_axi_arsize}
    , s_axi_arburst{vlSymsp->TOP.s_axi_arburst}
    , s_axi_arlock{vlSymsp->TOP.s_axi_arlock}
    , s_axi_arcache{vlSymsp->TOP.s_axi_arcache}
    , s_axi_arprot{vlSymsp->TOP.s_axi_arprot}
    , s_axi_arvalid{vlSymsp->TOP.s_axi_arvalid}
    , s_axi_arready{vlSymsp->TOP.s_axi_arready}
    , s_axi_rid{vlSymsp->TOP.s_axi_rid}
    , s_axi_rresp{vlSymsp->TOP.s_axi_rresp}
    , s_axi_rlast{vlSymsp->TOP.s_axi_rlast}
    , s_axi_rvalid{vlSymsp->TOP.s_axi_rvalid}
    , s_axi_rready{vlSymsp->TOP.s_axi_rready}
    , m0_axi_awid{vlSymsp->TOP.m0_axi_awid}
    , m0_axi_awlen{vlSymsp->TOP.m0_axi_awlen}
    , m0_axi_awsize{vlSymsp->TOP.m0_axi_awsize}
    , m0_axi_awburst{vlSymsp->TOP.m0_axi_awburst}
    , m0_axi_awlock{vlSymsp->TOP.m0_axi_awlock}
    , m0_axi_awcache{vlSymsp->TOP.m0_axi_awcache}
    , m0_axi_awprot{vlSymsp->TOP.m0_axi_awprot}
    , m0_axi_awvalid{vlSymsp->TOP.m0_axi_awvalid}
    , m0_axi_awready{vlSymsp->TOP.m0_axi_awready}
    , m0_axi_wstrb{vlSymsp->TOP.m0_axi_wstrb}
    , m0_axi_wlast{vlSymsp->TOP.m0_axi_wlast}
    , m0_axi_wvalid{vlSymsp->TOP.m0_axi_wvalid}
    , m0_axi_wready{vlSymsp->TOP.m0_axi_wready}
    , m0_axi_bid{vlSymsp->TOP.m0_axi_bid}
    , m0_axi_bresp{vlSymsp->TOP.m0_axi_bresp}
    , m0_axi_bvalid{vlSymsp->TOP.m0_axi_bvalid}
    , m0_axi_bready{vlSymsp->TOP.m0_axi_bready}
    , m0_axi_arid{vlSymsp->TOP.m0_axi_arid}
    , m0_axi_arlen{vlSymsp->TOP.m0_axi_arlen}
    , m0_axi_arsize{vlSymsp->TOP.m0_axi_arsize}
    , m0_axi_arburst{vlSymsp->TOP.m0_axi_arburst}
    , m0_axi_arlock{vlSymsp->TOP.m0_axi_arlock}
    , m0_axi_arcache{vlSymsp->TOP.m0_axi_arcache}
    , m0_axi_arprot{vlSymsp->TOP.m0_axi_arprot}
    , m0_axi_arvalid{vlSymsp->TOP.m0_axi_arvalid}
    , m0_axi_arready{vlSymsp->TOP.m0_axi_arready}
    , m0_axi_rid{vlSymsp->TOP.m0_axi_rid}
    , m0_axi_rresp{vlSymsp->TOP.m0_axi_rresp}
    , m0_axi_rlast{vlSymsp->TOP.m0_axi_rlast}
    , m0_axi_rvalid{vlSymsp->TOP.m0_axi_rvalid}
    , m0_axi_rready{vlSymsp->TOP.m0_axi_rready}
    , m1_axi_awid{vlSymsp->TOP.m1_axi_awid}
    , m1_axi_awlen{vlSymsp->TOP.m1_axi_awlen}
    , m1_axi_awsize{vlSymsp->TOP.m1_axi_awsize}
    , m1_axi_awburst{vlSymsp->TOP.m1_axi_awburst}
    , m1_axi_awlock{vlSymsp->TOP.m1_axi_awlock}
    , m1_axi_awcache{vlSymsp->TOP.m1_axi_awcache}
    , m1_axi_awprot{vlSymsp->TOP.m1_axi_awprot}
    , m1_axi_awvalid{vlSymsp->TOP.m1_axi_awvalid}
    , m1_axi_awready{vlSymsp->TOP.m1_axi_awready}
    , m1_axi_wstrb{vlSymsp->TOP.m1_axi_wstrb}
    , m1_axi_wlast{vlSymsp->TOP.m1_axi_wlast}
    , m1_axi_wvalid{vlSymsp->TOP.m1_axi_wvalid}
    , m1_axi_wready{vlSymsp->TOP.m1_axi_wready}
    , m1_axi_bid{vlSymsp->TOP.m1_axi_bid}
    , m1_axi_bresp{vlSymsp->TOP.m1_axi_bresp}
    , m1_axi_bvalid{vlSymsp->TOP.m1_axi_bvalid}
    , m1_axi_bready{vlSymsp->TOP.m1_axi_bready}
    , m1_axi_arid{vlSymsp->TOP.m1_axi_arid}
    , m1_axi_arlen{vlSymsp->TOP.m1_axi_arlen}
    , m1_axi_arsize{vlSymsp->TOP.m1_axi_arsize}
    , m1_axi_arburst{vlSymsp->TOP.m1_axi_arburst}
    , m1_axi_arlock{vlSymsp->TOP.m1_axi_arlock}
    , m1_axi_arcache{vlSymsp->TOP.m1_axi_arcache}
    , m1_axi_arprot{vlSymsp->TOP.m1_axi_arprot}
    , m1_axi_arvalid{vlSymsp->TOP.m1_axi_arvalid}
    , m1_axi_arready{vlSymsp->TOP.m1_axi_arready}
    , m1_axi_rid{vlSymsp->TOP.m1_axi_rid}
    , m1_axi_rresp{vlSymsp->TOP.m1_axi_rresp}
    , m1_axi_rlast{vlSymsp->TOP.m1_axi_rlast}
    , m1_axi_rvalid{vlSymsp->TOP.m1_axi_rvalid}
    , m1_axi_rready{vlSymsp->TOP.m1_axi_rready}
    , s_axi_awaddr{vlSymsp->TOP.s_axi_awaddr}
    , s_axi_wdata{vlSymsp->TOP.s_axi_wdata}
    , s_axi_araddr{vlSymsp->TOP.s_axi_araddr}
    , s_axi_rdata{vlSymsp->TOP.s_axi_rdata}
    , m0_axi_awaddr{vlSymsp->TOP.m0_axi_awaddr}
    , m0_axi_wdata{vlSymsp->TOP.m0_axi_wdata}
    , m0_axi_araddr{vlSymsp->TOP.m0_axi_araddr}
    , m0_axi_rdata{vlSymsp->TOP.m0_axi_rdata}
    , m1_axi_awaddr{vlSymsp->TOP.m1_axi_awaddr}
    , m1_axi_wdata{vlSymsp->TOP.m1_axi_wdata}
    , m1_axi_araddr{vlSymsp->TOP.m1_axi_araddr}
    , m1_axi_rdata{vlSymsp->TOP.m1_axi_rdata}
    , __PVT__weft_axi_pkg{vlSymsp->TOP.__PVT__weft_axi_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
