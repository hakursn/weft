// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_weft_axi_pkg.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_weft_axi_bram_flat);
    __Vhier.remove(0, &__Vscope_weft_axi_pkg);
    __Vhier.remove(&__Vscope_weft_axi_bram_flat, &__Vscope_weft_axi_bram_flat__i_bram);
    __Vhier.remove(&__Vscope_weft_axi_bram_flat__i_bram, &__Vscope_weft_axi_bram_flat__i_bram__unnamedblk1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__weft_axi_pkg{this, Verilated::catName(namep, "weft_axi_pkg")}
{
        // Check resources
        Verilated::stackCheck(89);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__weft_axi_pkg = &TOP__weft_axi_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__weft_axi_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_weft_axi_bram_flat.configure(this, name(), "weft_axi_bram_flat", "weft_axi_bram_flat", "weft_axi_bram_flat", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_weft_axi_bram_flat__i_bram.configure(this, name(), "weft_axi_bram_flat.i_bram", "i_bram", "weft_axi_bram", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_weft_axi_bram_flat__i_bram__unnamedblk1.configure(this, name(), "weft_axi_bram_flat.i_bram.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_weft_axi_pkg.configure(this, name(), "weft_axi_pkg", "weft_axi_pkg", "weft_axi_pkg", -9, VerilatedScope::SCOPE_PACKAGE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_weft_axi_bram_flat);
    __Vhier.add(0, &__Vscope_weft_axi_pkg);
    __Vhier.add(&__Vscope_weft_axi_bram_flat, &__Vscope_weft_axi_bram_flat__i_bram);
    __Vhier.add(&__Vscope_weft_axi_bram_flat__i_bram, &__Vscope_weft_axi_bram_flat__i_bram__unnamedblk1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk_i", &(TOP.clk_i), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_ni", &(TOP.rst_ni), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_araddr", &(TOP.s_axi_araddr), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arburst", &(TOP.s_axi_arburst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arcache", &(TOP.s_axi_arcache), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arid", &(TOP.s_axi_arid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arlen", &(TOP.s_axi_arlen), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arlock", &(TOP.s_axi_arlock), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arprot", &(TOP.s_axi_arprot), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arready", &(TOP.s_axi_arready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arsize", &(TOP.s_axi_arsize), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_arvalid", &(TOP.s_axi_arvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awaddr", &(TOP.s_axi_awaddr), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awburst", &(TOP.s_axi_awburst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awcache", &(TOP.s_axi_awcache), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awid", &(TOP.s_axi_awid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awlen", &(TOP.s_axi_awlen), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awlock", &(TOP.s_axi_awlock), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awprot", &(TOP.s_axi_awprot), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awready", &(TOP.s_axi_awready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awsize", &(TOP.s_axi_awsize), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_awvalid", &(TOP.s_axi_awvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_bid", &(TOP.s_axi_bid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_bready", &(TOP.s_axi_bready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_bresp", &(TOP.s_axi_bresp), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_bvalid", &(TOP.s_axi_bvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_rdata", &(TOP.s_axi_rdata), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_rid", &(TOP.s_axi_rid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_rlast", &(TOP.s_axi_rlast), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_rready", &(TOP.s_axi_rready), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_rresp", &(TOP.s_axi_rresp), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_rvalid", &(TOP.s_axi_rvalid), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_wdata", &(TOP.s_axi_wdata), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_wlast", &(TOP.s_axi_wlast), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_wready", &(TOP.s_axi_wready), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_wstrb", &(TOP.s_axi_wstrb), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"s_axi_wvalid", &(TOP.s_axi_wvalid), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"MemWords", const_cast<void*>(static_cast<const void*>(&(TOP.weft_axi_bram_flat__DOT__MemWords))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"clk_i", &(TOP.weft_axi_bram_flat__DOT__clk_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"rq", &(TOP.weft_axi_bram_flat__DOT__rq), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,180,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"rs", &(TOP.weft_axi_bram_flat__DOT__rs), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,51,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"rst_ni", &(TOP.weft_axi_bram_flat__DOT__rst_ni), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_araddr", &(TOP.weft_axi_bram_flat__DOT__s_axi_araddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arburst", &(TOP.weft_axi_bram_flat__DOT__s_axi_arburst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arcache", &(TOP.weft_axi_bram_flat__DOT__s_axi_arcache), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arid", &(TOP.weft_axi_bram_flat__DOT__s_axi_arid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arlen", &(TOP.weft_axi_bram_flat__DOT__s_axi_arlen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arlock", &(TOP.weft_axi_bram_flat__DOT__s_axi_arlock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arprot", &(TOP.weft_axi_bram_flat__DOT__s_axi_arprot), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arready", &(TOP.weft_axi_bram_flat__DOT__s_axi_arready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arsize", &(TOP.weft_axi_bram_flat__DOT__s_axi_arsize), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_arvalid", &(TOP.weft_axi_bram_flat__DOT__s_axi_arvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awaddr", &(TOP.weft_axi_bram_flat__DOT__s_axi_awaddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awburst", &(TOP.weft_axi_bram_flat__DOT__s_axi_awburst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awcache", &(TOP.weft_axi_bram_flat__DOT__s_axi_awcache), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awid", &(TOP.weft_axi_bram_flat__DOT__s_axi_awid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awlen", &(TOP.weft_axi_bram_flat__DOT__s_axi_awlen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awlock", &(TOP.weft_axi_bram_flat__DOT__s_axi_awlock), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awprot", &(TOP.weft_axi_bram_flat__DOT__s_axi_awprot), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awready", &(TOP.weft_axi_bram_flat__DOT__s_axi_awready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awsize", &(TOP.weft_axi_bram_flat__DOT__s_axi_awsize), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_awvalid", &(TOP.weft_axi_bram_flat__DOT__s_axi_awvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_bid", &(TOP.weft_axi_bram_flat__DOT__s_axi_bid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_bready", &(TOP.weft_axi_bram_flat__DOT__s_axi_bready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_bresp", &(TOP.weft_axi_bram_flat__DOT__s_axi_bresp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_bvalid", &(TOP.weft_axi_bram_flat__DOT__s_axi_bvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_rdata", &(TOP.weft_axi_bram_flat__DOT__s_axi_rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_rid", &(TOP.weft_axi_bram_flat__DOT__s_axi_rid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_rlast", &(TOP.weft_axi_bram_flat__DOT__s_axi_rlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_rready", &(TOP.weft_axi_bram_flat__DOT__s_axi_rready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_rresp", &(TOP.weft_axi_bram_flat__DOT__s_axi_rresp), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_rvalid", &(TOP.weft_axi_bram_flat__DOT__s_axi_rvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_wdata", &(TOP.weft_axi_bram_flat__DOT__s_axi_wdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_wlast", &(TOP.weft_axi_bram_flat__DOT__s_axi_wlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_wready", &(TOP.weft_axi_bram_flat__DOT__s_axi_wready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_wstrb", &(TOP.weft_axi_bram_flat__DOT__s_axi_wstrb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat.varInsert(__Vfinal,"s_axi_wvalid", &(TOP.weft_axi_bram_flat__DOT__s_axi_wvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"AddrLsb", const_cast<void*>(static_cast<const void*>(&(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__AddrLsb))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"DataW", const_cast<void*>(static_cast<const void*>(&(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__DataW))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"IdxW", const_cast<void*>(static_cast<const void*>(&(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__IdxW))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"MemWords", const_cast<void*>(static_cast<const void*>(&(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__MemWords))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"StrbW", const_cast<void*>(static_cast<const void*>(&(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__StrbW))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"clk_i", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__clk_i), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"mem", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,1023 ,31,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"r_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__r_q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"raddr_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__raddr_q), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"rcnt_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__rcnt_q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"rid_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__rid_q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"rlen_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__rlen_q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"rst_ni", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__rst_ni), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"slv_req_i", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__slv_req_i), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,180,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"slv_rsp_o", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__slv_rsp_o), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,51,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"w_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__w_q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"waddr_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__waddr_q), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_weft_axi_bram_flat__i_bram.varInsert(__Vfinal,"wid_q", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__wid_q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_weft_axi_bram_flat__i_bram__unnamedblk1.varInsert(__Vfinal,"b", &(TOP.weft_axi_bram_flat__DOT__i_bram__DOT__unnamedblk1__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_weft_axi_pkg.varInsert(__Vfinal,"BURST_FIXED", const_cast<void*>(static_cast<const void*>(&(TOP__weft_axi_pkg.BURST_FIXED))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_pkg.varInsert(__Vfinal,"BURST_INCR", const_cast<void*>(static_cast<const void*>(&(TOP__weft_axi_pkg.BURST_INCR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_pkg.varInsert(__Vfinal,"BURST_WRAP", const_cast<void*>(static_cast<const void*>(&(TOP__weft_axi_pkg.BURST_WRAP))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_pkg.varInsert(__Vfinal,"RESP_DECERR", const_cast<void*>(static_cast<const void*>(&(TOP__weft_axi_pkg.RESP_DECERR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_pkg.varInsert(__Vfinal,"RESP_EXOKAY", const_cast<void*>(static_cast<const void*>(&(TOP__weft_axi_pkg.RESP_EXOKAY))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_pkg.varInsert(__Vfinal,"RESP_OKAY", const_cast<void*>(static_cast<const void*>(&(TOP__weft_axi_pkg.RESP_OKAY))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_weft_axi_pkg.varInsert(__Vfinal,"RESP_SLVERR", const_cast<void*>(static_cast<const void*>(&(TOP__weft_axi_pkg.RESP_SLVERR))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
    }
}
