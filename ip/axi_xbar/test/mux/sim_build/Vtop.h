// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class Vtop_weft_axi_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&s0_axi_awid,3,0);
    VL_IN8(&s0_axi_awlen,7,0);
    VL_IN8(&s0_axi_awsize,2,0);
    VL_IN8(&s0_axi_awburst,1,0);
    VL_IN8(&s0_axi_awlock,0,0);
    VL_IN8(&s0_axi_awcache,3,0);
    VL_IN8(&s0_axi_awprot,2,0);
    VL_IN8(&s0_axi_awvalid,0,0);
    VL_OUT8(&s0_axi_awready,0,0);
    VL_IN8(&s0_axi_wstrb,3,0);
    VL_IN8(&s0_axi_wlast,0,0);
    VL_IN8(&s0_axi_wvalid,0,0);
    VL_OUT8(&s0_axi_wready,0,0);
    VL_OUT8(&s0_axi_bid,3,0);
    VL_OUT8(&s0_axi_bresp,1,0);
    VL_OUT8(&s0_axi_bvalid,0,0);
    VL_IN8(&s0_axi_bready,0,0);
    VL_IN8(&s0_axi_arid,3,0);
    VL_IN8(&s0_axi_arlen,7,0);
    VL_IN8(&s0_axi_arsize,2,0);
    VL_IN8(&s0_axi_arburst,1,0);
    VL_IN8(&s0_axi_arlock,0,0);
    VL_IN8(&s0_axi_arcache,3,0);
    VL_IN8(&s0_axi_arprot,2,0);
    VL_IN8(&s0_axi_arvalid,0,0);
    VL_OUT8(&s0_axi_arready,0,0);
    VL_OUT8(&s0_axi_rid,3,0);
    VL_OUT8(&s0_axi_rresp,1,0);
    VL_OUT8(&s0_axi_rlast,0,0);
    VL_OUT8(&s0_axi_rvalid,0,0);
    VL_IN8(&s0_axi_rready,0,0);
    VL_IN8(&s1_axi_awid,3,0);
    VL_IN8(&s1_axi_awlen,7,0);
    VL_IN8(&s1_axi_awsize,2,0);
    VL_IN8(&s1_axi_awburst,1,0);
    VL_IN8(&s1_axi_awlock,0,0);
    VL_IN8(&s1_axi_awcache,3,0);
    VL_IN8(&s1_axi_awprot,2,0);
    VL_IN8(&s1_axi_awvalid,0,0);
    VL_OUT8(&s1_axi_awready,0,0);
    VL_IN8(&s1_axi_wstrb,3,0);
    VL_IN8(&s1_axi_wlast,0,0);
    VL_IN8(&s1_axi_wvalid,0,0);
    VL_OUT8(&s1_axi_wready,0,0);
    VL_OUT8(&s1_axi_bid,3,0);
    VL_OUT8(&s1_axi_bresp,1,0);
    VL_OUT8(&s1_axi_bvalid,0,0);
    VL_IN8(&s1_axi_bready,0,0);
    VL_IN8(&s1_axi_arid,3,0);
    VL_IN8(&s1_axi_arlen,7,0);
    VL_IN8(&s1_axi_arsize,2,0);
    VL_IN8(&s1_axi_arburst,1,0);
    VL_IN8(&s1_axi_arlock,0,0);
    VL_IN8(&s1_axi_arcache,3,0);
    VL_IN8(&s1_axi_arprot,2,0);
    VL_IN8(&s1_axi_arvalid,0,0);
    VL_OUT8(&s1_axi_arready,0,0);
    VL_OUT8(&s1_axi_rid,3,0);
    VL_OUT8(&s1_axi_rresp,1,0);
    VL_OUT8(&s1_axi_rlast,0,0);
    VL_OUT8(&s1_axi_rvalid,0,0);
    VL_IN8(&s1_axi_rready,0,0);
    VL_OUT8(&m_axi_awid,4,0);
    VL_OUT8(&m_axi_awlen,7,0);
    VL_OUT8(&m_axi_awsize,2,0);
    VL_OUT8(&m_axi_awburst,1,0);
    VL_OUT8(&m_axi_awlock,0,0);
    VL_OUT8(&m_axi_awcache,3,0);
    VL_OUT8(&m_axi_awprot,2,0);
    VL_OUT8(&m_axi_awvalid,0,0);
    VL_IN8(&m_axi_awready,0,0);
    VL_OUT8(&m_axi_wstrb,3,0);
    VL_OUT8(&m_axi_wlast,0,0);
    VL_OUT8(&m_axi_wvalid,0,0);
    VL_IN8(&m_axi_wready,0,0);
    VL_IN8(&m_axi_bid,4,0);
    VL_IN8(&m_axi_bresp,1,0);
    VL_IN8(&m_axi_bvalid,0,0);
    VL_OUT8(&m_axi_bready,0,0);
    VL_OUT8(&m_axi_arid,4,0);
    VL_OUT8(&m_axi_arlen,7,0);
    VL_OUT8(&m_axi_arsize,2,0);
    VL_OUT8(&m_axi_arburst,1,0);
    VL_OUT8(&m_axi_arlock,0,0);
    VL_OUT8(&m_axi_arcache,3,0);
    VL_OUT8(&m_axi_arprot,2,0);
    VL_OUT8(&m_axi_arvalid,0,0);
    VL_IN8(&m_axi_arready,0,0);
    VL_IN8(&m_axi_rid,4,0);
    VL_IN8(&m_axi_rresp,1,0);
    VL_IN8(&m_axi_rlast,0,0);
    VL_IN8(&m_axi_rvalid,0,0);
    VL_OUT8(&m_axi_rready,0,0);
    VL_IN(&s0_axi_awaddr,31,0);
    VL_IN(&s0_axi_wdata,31,0);
    VL_IN(&s0_axi_araddr,31,0);
    VL_OUT(&s0_axi_rdata,31,0);
    VL_IN(&s1_axi_awaddr,31,0);
    VL_IN(&s1_axi_wdata,31,0);
    VL_IN(&s1_axi_araddr,31,0);
    VL_OUT(&s1_axi_rdata,31,0);
    VL_OUT(&m_axi_awaddr,31,0);
    VL_OUT(&m_axi_wdata,31,0);
    VL_OUT(&m_axi_araddr,31,0);
    VL_IN(&m_axi_rdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_weft_axi_pkg* const __PVT__weft_axi_pkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
