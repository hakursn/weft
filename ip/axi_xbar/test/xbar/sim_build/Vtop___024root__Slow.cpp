// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr CData/*1:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_err__DOT__Resp;
constexpr CData/*1:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_err__DOT__Resp;
constexpr CData/*0:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__FallThrough;
constexpr CData/*0:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__FallThrough;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__N;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__M;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__IDW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__MIDW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__NoSlvPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__NoMstPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__SlvIdWidth;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__NoRules;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__MaxTxns;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__NoDemuxPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__ErrIdx;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__DSelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__DecIdxW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__NoIndices;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__NoRules;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_aw_dec__DOT__IdxW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__NoIndices;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__NoRules;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_ar_dec__DOT__IdxW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__NoMstPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__MaxTxns;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__0__KET____DOT__i_demux__DOT__CntW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__NoIndices;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__NoRules;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_aw_dec__DOT__IdxW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__NoIndices;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__NoRules;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_ar_dec__DOT__IdxW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__NoMstPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__MaxTxns;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_slv__BRA__1__KET____DOT__i_demux__DOT__CntW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__NoSlvPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__SlvIdWidth;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__MaxWTxns;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__NumReq;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_aw_arb__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__NumReq;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_ar_arb__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__Depth;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__PtrW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__0__KET____DOT__i_mux__DOT__i_wfifo__DOT__UsgW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__NoSlvPorts;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__SlvIdWidth;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__MaxWTxns;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__NumReq;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_aw_arb__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__NumReq;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_ar_arb__DOT__SelW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__Depth;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__PtrW;
constexpr IData/*31:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__g_mst__BRA__1__KET____DOT__i_mux__DOT__i_wfifo__DOT__UsgW;
const VlWide<10>/*319:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__MAP = {{
    0x00002000, 0x00000000, 0x00001000, 0x00000000,
    0x00000001, 0x00001000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000
}};
const VlWide<10>/*319:0*/ Vtop___024root::weft_axi_xbar_flat__DOT__i_xbar__DOT__AddrMap = {{
    0x00002000, 0x00000000, 0x00001000, 0x00000000,
    0x00000001, 0x00001000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000
}};


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}
