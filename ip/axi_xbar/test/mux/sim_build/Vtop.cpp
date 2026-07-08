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
    , s0_axi_awid{vlSymsp->TOP.s0_axi_awid}
    , s0_axi_awlen{vlSymsp->TOP.s0_axi_awlen}
    , s0_axi_awsize{vlSymsp->TOP.s0_axi_awsize}
    , s0_axi_awburst{vlSymsp->TOP.s0_axi_awburst}
    , s0_axi_awlock{vlSymsp->TOP.s0_axi_awlock}
    , s0_axi_awcache{vlSymsp->TOP.s0_axi_awcache}
    , s0_axi_awprot{vlSymsp->TOP.s0_axi_awprot}
    , s0_axi_awvalid{vlSymsp->TOP.s0_axi_awvalid}
    , s0_axi_awready{vlSymsp->TOP.s0_axi_awready}
    , s0_axi_wstrb{vlSymsp->TOP.s0_axi_wstrb}
    , s0_axi_wlast{vlSymsp->TOP.s0_axi_wlast}
    , s0_axi_wvalid{vlSymsp->TOP.s0_axi_wvalid}
    , s0_axi_wready{vlSymsp->TOP.s0_axi_wready}
    , s0_axi_bid{vlSymsp->TOP.s0_axi_bid}
    , s0_axi_bresp{vlSymsp->TOP.s0_axi_bresp}
    , s0_axi_bvalid{vlSymsp->TOP.s0_axi_bvalid}
    , s0_axi_bready{vlSymsp->TOP.s0_axi_bready}
    , s0_axi_arid{vlSymsp->TOP.s0_axi_arid}
    , s0_axi_arlen{vlSymsp->TOP.s0_axi_arlen}
    , s0_axi_arsize{vlSymsp->TOP.s0_axi_arsize}
    , s0_axi_arburst{vlSymsp->TOP.s0_axi_arburst}
    , s0_axi_arlock{vlSymsp->TOP.s0_axi_arlock}
    , s0_axi_arcache{vlSymsp->TOP.s0_axi_arcache}
    , s0_axi_arprot{vlSymsp->TOP.s0_axi_arprot}
    , s0_axi_arvalid{vlSymsp->TOP.s0_axi_arvalid}
    , s0_axi_arready{vlSymsp->TOP.s0_axi_arready}
    , s0_axi_rid{vlSymsp->TOP.s0_axi_rid}
    , s0_axi_rresp{vlSymsp->TOP.s0_axi_rresp}
    , s0_axi_rlast{vlSymsp->TOP.s0_axi_rlast}
    , s0_axi_rvalid{vlSymsp->TOP.s0_axi_rvalid}
    , s0_axi_rready{vlSymsp->TOP.s0_axi_rready}
    , s1_axi_awid{vlSymsp->TOP.s1_axi_awid}
    , s1_axi_awlen{vlSymsp->TOP.s1_axi_awlen}
    , s1_axi_awsize{vlSymsp->TOP.s1_axi_awsize}
    , s1_axi_awburst{vlSymsp->TOP.s1_axi_awburst}
    , s1_axi_awlock{vlSymsp->TOP.s1_axi_awlock}
    , s1_axi_awcache{vlSymsp->TOP.s1_axi_awcache}
    , s1_axi_awprot{vlSymsp->TOP.s1_axi_awprot}
    , s1_axi_awvalid{vlSymsp->TOP.s1_axi_awvalid}
    , s1_axi_awready{vlSymsp->TOP.s1_axi_awready}
    , s1_axi_wstrb{vlSymsp->TOP.s1_axi_wstrb}
    , s1_axi_wlast{vlSymsp->TOP.s1_axi_wlast}
    , s1_axi_wvalid{vlSymsp->TOP.s1_axi_wvalid}
    , s1_axi_wready{vlSymsp->TOP.s1_axi_wready}
    , s1_axi_bid{vlSymsp->TOP.s1_axi_bid}
    , s1_axi_bresp{vlSymsp->TOP.s1_axi_bresp}
    , s1_axi_bvalid{vlSymsp->TOP.s1_axi_bvalid}
    , s1_axi_bready{vlSymsp->TOP.s1_axi_bready}
    , s1_axi_arid{vlSymsp->TOP.s1_axi_arid}
    , s1_axi_arlen{vlSymsp->TOP.s1_axi_arlen}
    , s1_axi_arsize{vlSymsp->TOP.s1_axi_arsize}
    , s1_axi_arburst{vlSymsp->TOP.s1_axi_arburst}
    , s1_axi_arlock{vlSymsp->TOP.s1_axi_arlock}
    , s1_axi_arcache{vlSymsp->TOP.s1_axi_arcache}
    , s1_axi_arprot{vlSymsp->TOP.s1_axi_arprot}
    , s1_axi_arvalid{vlSymsp->TOP.s1_axi_arvalid}
    , s1_axi_arready{vlSymsp->TOP.s1_axi_arready}
    , s1_axi_rid{vlSymsp->TOP.s1_axi_rid}
    , s1_axi_rresp{vlSymsp->TOP.s1_axi_rresp}
    , s1_axi_rlast{vlSymsp->TOP.s1_axi_rlast}
    , s1_axi_rvalid{vlSymsp->TOP.s1_axi_rvalid}
    , s1_axi_rready{vlSymsp->TOP.s1_axi_rready}
    , m_axi_awid{vlSymsp->TOP.m_axi_awid}
    , m_axi_awlen{vlSymsp->TOP.m_axi_awlen}
    , m_axi_awsize{vlSymsp->TOP.m_axi_awsize}
    , m_axi_awburst{vlSymsp->TOP.m_axi_awburst}
    , m_axi_awlock{vlSymsp->TOP.m_axi_awlock}
    , m_axi_awcache{vlSymsp->TOP.m_axi_awcache}
    , m_axi_awprot{vlSymsp->TOP.m_axi_awprot}
    , m_axi_awvalid{vlSymsp->TOP.m_axi_awvalid}
    , m_axi_awready{vlSymsp->TOP.m_axi_awready}
    , m_axi_wstrb{vlSymsp->TOP.m_axi_wstrb}
    , m_axi_wlast{vlSymsp->TOP.m_axi_wlast}
    , m_axi_wvalid{vlSymsp->TOP.m_axi_wvalid}
    , m_axi_wready{vlSymsp->TOP.m_axi_wready}
    , m_axi_bid{vlSymsp->TOP.m_axi_bid}
    , m_axi_bresp{vlSymsp->TOP.m_axi_bresp}
    , m_axi_bvalid{vlSymsp->TOP.m_axi_bvalid}
    , m_axi_bready{vlSymsp->TOP.m_axi_bready}
    , m_axi_arid{vlSymsp->TOP.m_axi_arid}
    , m_axi_arlen{vlSymsp->TOP.m_axi_arlen}
    , m_axi_arsize{vlSymsp->TOP.m_axi_arsize}
    , m_axi_arburst{vlSymsp->TOP.m_axi_arburst}
    , m_axi_arlock{vlSymsp->TOP.m_axi_arlock}
    , m_axi_arcache{vlSymsp->TOP.m_axi_arcache}
    , m_axi_arprot{vlSymsp->TOP.m_axi_arprot}
    , m_axi_arvalid{vlSymsp->TOP.m_axi_arvalid}
    , m_axi_arready{vlSymsp->TOP.m_axi_arready}
    , m_axi_rid{vlSymsp->TOP.m_axi_rid}
    , m_axi_rresp{vlSymsp->TOP.m_axi_rresp}
    , m_axi_rlast{vlSymsp->TOP.m_axi_rlast}
    , m_axi_rvalid{vlSymsp->TOP.m_axi_rvalid}
    , m_axi_rready{vlSymsp->TOP.m_axi_rready}
    , s0_axi_awaddr{vlSymsp->TOP.s0_axi_awaddr}
    , s0_axi_wdata{vlSymsp->TOP.s0_axi_wdata}
    , s0_axi_araddr{vlSymsp->TOP.s0_axi_araddr}
    , s0_axi_rdata{vlSymsp->TOP.s0_axi_rdata}
    , s1_axi_awaddr{vlSymsp->TOP.s1_axi_awaddr}
    , s1_axi_wdata{vlSymsp->TOP.s1_axi_wdata}
    , s1_axi_araddr{vlSymsp->TOP.s1_axi_araddr}
    , s1_axi_rdata{vlSymsp->TOP.s1_axi_rdata}
    , m_axi_awaddr{vlSymsp->TOP.m_axi_awaddr}
    , m_axi_wdata{vlSymsp->TOP.m_axi_wdata}
    , m_axi_araddr{vlSymsp->TOP.m_axi_araddr}
    , m_axi_rdata{vlSymsp->TOP.m_axi_rdata}
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
