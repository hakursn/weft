// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_exec_sv.h for the primary calling header

#include "Vtb_exec_sv__pch.h"
#include "Vtb_exec_sv___024root.h"

VlCoroutine Vtb_exec_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_exec_sv___024root* vlSelf);

void Vtb_exec_sv___024root___eval_initial(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_initial\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_exec_sv___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_exec_sv___024root___eval_initial__TOP__Vtiming__0(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_exec_sv__DOT__unnamedblk1__DOT__i;
    tb_exec_sv__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_exec_sv__DOT__unnamedblk2__DOT__i;
    tb_exec_sv__DOT__unnamedblk2__DOT__i = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_19;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f766563U;
    __Vtemp_1[2U] = 0x616c75U;
    VL_READMEM_N(true, 100, 400, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.tb_exec_sv__DOT__av)
                 , 0, ~0ULL);
    tb_exec_sv__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x190U, tb_exec_sv__DOT__unnamedblk1__DOT__i)) {
        if ((0x18fU >= (0x1ffU & tb_exec_sv__DOT__unnamedblk1__DOT__i))) {
            vlSelfRef.tb_exec_sv__DOT__aop = (0xfU 
                                              & vlSelfRef.tb_exec_sv__DOT__av
                                              [(0x1ffU 
                                                & tb_exec_sv__DOT__unnamedblk1__DOT__i)][3U]);
            vlSelfRef.tb_exec_sv__DOT__aa = vlSelfRef.tb_exec_sv__DOT__av
                [(0x1ffU & tb_exec_sv__DOT__unnamedblk1__DOT__i)][2U];
            vlSelfRef.tb_exec_sv__DOT__ab = vlSelfRef.tb_exec_sv__DOT__av
                [(0x1ffU & tb_exec_sv__DOT__unnamedblk1__DOT__i)][1U];
            vlSelfRef.tb_exec_sv__DOT__aexp = vlSelfRef.tb_exec_sv__DOT__av
                [(0x1ffU & tb_exec_sv__DOT__unnamedblk1__DOT__i)][0U];
        } else {
            vlSelfRef.tb_exec_sv__DOT__aop = 0U;
            vlSelfRef.tb_exec_sv__DOT__aa = 0U;
            vlSelfRef.tb_exec_sv__DOT__ab = 0U;
            vlSelfRef.tb_exec_sv__DOT__aexp = 0U;
        }
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/exec/tb_exec_sv.sv", 
                                             13);
        if ((vlSelfRef.tb_exec_sv__DOT__ares != vlSelfRef.tb_exec_sv__DOT__aexp)) {
            vlSelfRef.tb_exec_sv__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_exec_sv__DOT__errors);
            if (VL_UNLIKELY((VL_GTS_III(32, 8U, vlSelfRef.tb_exec_sv__DOT__errors)))) {
                VL_WRITEF_NX("ALU op=%0# a=%x b=%x exp=%x got=%x\n",0,
                             4,((0x18fU >= (0x1ffU 
                                            & tb_exec_sv__DOT__unnamedblk1__DOT__i))
                                 ? (0xfU & vlSelfRef.tb_exec_sv__DOT__av
                                    [(0x1ffU & tb_exec_sv__DOT__unnamedblk1__DOT__i)][3U])
                                 : 0U),32,vlSelfRef.tb_exec_sv__DOT__aa,
                             32,vlSelfRef.tb_exec_sv__DOT__ab,
                             32,vlSelfRef.tb_exec_sv__DOT__aexp,
                             32,vlSelfRef.tb_exec_sv__DOT__ares);
            }
        }
        tb_exec_sv__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                + tb_exec_sv__DOT__unnamedblk1__DOT__i);
    }
    __Vtemp_19[0U] = 0x2e686578U;
    __Vtemp_19[1U] = 0x5f766563U;
    __Vtemp_19[2U] = 0x616e6368U;
    __Vtemp_19[3U] = 0x6272U;
    VL_READMEM_N(true, 72, 200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_19)
                 ,  &(vlSelfRef.tb_exec_sv__DOT__bv)
                 , 0, ~0ULL);
    tb_exec_sv__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0xc8U, tb_exec_sv__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.tb_exec_sv__DOT__bop = (7U & (((0xc7U 
                                                  >= 
                                                  (0xffU 
                                                   & tb_exec_sv__DOT__unnamedblk2__DOT__i))
                                                  ? 
                                                 vlSelfRef.tb_exec_sv__DOT__bv
                                                 [(0xffU 
                                                   & tb_exec_sv__DOT__unnamedblk2__DOT__i)][2U]
                                                  : 0U) 
                                                >> 4U));
        vlSelfRef.tb_exec_sv__DOT__ba = ((((0xc7U >= 
                                            (0xffU 
                                             & tb_exec_sv__DOT__unnamedblk2__DOT__i))
                                            ? vlSelfRef.tb_exec_sv__DOT__bv
                                           [(0xffU 
                                             & tb_exec_sv__DOT__unnamedblk2__DOT__i)][2U]
                                            : 0U) << 0x1cU) 
                                         | (((0xc7U 
                                              >= (0xffU 
                                                  & tb_exec_sv__DOT__unnamedblk2__DOT__i))
                                              ? vlSelfRef.tb_exec_sv__DOT__bv
                                             [(0xffU 
                                               & tb_exec_sv__DOT__unnamedblk2__DOT__i)][1U]
                                              : 0U) 
                                            >> 4U));
        vlSelfRef.tb_exec_sv__DOT__bb = ((((0xc7U >= 
                                            (0xffU 
                                             & tb_exec_sv__DOT__unnamedblk2__DOT__i))
                                            ? vlSelfRef.tb_exec_sv__DOT__bv
                                           [(0xffU 
                                             & tb_exec_sv__DOT__unnamedblk2__DOT__i)][1U]
                                            : 0U) << 0x1cU) 
                                         | (((0xc7U 
                                              >= (0xffU 
                                                  & tb_exec_sv__DOT__unnamedblk2__DOT__i))
                                              ? vlSelfRef.tb_exec_sv__DOT__bv
                                             [(0xffU 
                                               & tb_exec_sv__DOT__unnamedblk2__DOT__i)][0U]
                                              : 0U) 
                                            >> 4U));
        vlSelfRef.tb_exec_sv__DOT__bexp = ((0xc7U >= 
                                            (0xffU 
                                             & tb_exec_sv__DOT__unnamedblk2__DOT__i))
                                            ? (1U & 
                                               vlSelfRef.tb_exec_sv__DOT__bv
                                               [(0xffU 
                                                 & tb_exec_sv__DOT__unnamedblk2__DOT__i)][0U])
                                            : 0U);
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/exec/tb_exec_sv.sv", 
                                             18);
        if (((IData)(vlSelfRef.tb_exec_sv__DOT__bt) 
             != (IData)(vlSelfRef.tb_exec_sv__DOT__bexp))) {
            vlSelfRef.tb_exec_sv__DOT__errors = ((IData)(1U) 
                                                 + vlSelfRef.tb_exec_sv__DOT__errors);
            if (VL_UNLIKELY((VL_GTS_III(32, 8U, vlSelfRef.tb_exec_sv__DOT__errors)))) {
                VL_WRITEF_NX("BR f3=%0# a=%x b=%x exp=%0# got=%0#\n",0,
                             4,(0xfU & (((0xc7U >= 
                                          (0xffU & tb_exec_sv__DOT__unnamedblk2__DOT__i))
                                          ? vlSelfRef.tb_exec_sv__DOT__bv
                                         [(0xffU & tb_exec_sv__DOT__unnamedblk2__DOT__i)][2U]
                                          : 0U) >> 4U)),
                             32,vlSelfRef.tb_exec_sv__DOT__ba,
                             32,vlSelfRef.tb_exec_sv__DOT__bb,
                             1,(IData)(vlSelfRef.tb_exec_sv__DOT__bexp),
                             1,vlSelfRef.tb_exec_sv__DOT__bt);
            }
        }
        tb_exec_sv__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                + tb_exec_sv__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF_NX("exec SV (ALU 400 + BRANCH 200 vs ISS): errors=%0d -> %s\n",0,
                 32,vlSelfRef.tb_exec_sv__DOT__errors,
                 32,((0U == vlSelfRef.tb_exec_sv__DOT__errors)
                      ? 0x50415353U : 0x4641494cU));
    VL_FINISH_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/exec/tb_exec_sv.sv", 22, "");
}

void Vtb_exec_sv___024root___act_sequent__TOP__0(Vtb_exec_sv___024root* vlSelf);

void Vtb_exec_sv___024root___eval_act(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_act\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_exec_sv___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_exec_sv___024root___act_sequent__TOP__0(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___act_sequent__TOP__0\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_exec_sv__DOT__ares = ((8U & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                        ? ((4U & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                              ? (vlSelfRef.tb_exec_sv__DOT__aa 
                                                 & vlSelfRef.tb_exec_sv__DOT__ab)
                                              : (vlSelfRef.tb_exec_sv__DOT__aa 
                                                 | vlSelfRef.tb_exec_sv__DOT__ab))))
                                        : ((4U & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.tb_exec_sv__DOT__aa, 
                                                                  (0x1fU 
                                                                   & vlSelfRef.tb_exec_sv__DOT__ab))
                                                    : 
                                                   (vlSelfRef.tb_exec_sv__DOT__aa 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelfRef.tb_exec_sv__DOT__ab)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                                    ? 
                                                   (vlSelfRef.tb_exec_sv__DOT__aa 
                                                    ^ vlSelfRef.tb_exec_sv__DOT__ab)
                                                    : 
                                                   ((vlSelfRef.tb_exec_sv__DOT__aa 
                                                     < vlSelfRef.tb_exec_sv__DOT__ab)
                                                     ? 1U
                                                     : 0U)))
                                            : ((2U 
                                                & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                                    ? 
                                                   (VL_LTS_III(32, vlSelfRef.tb_exec_sv__DOT__aa, vlSelfRef.tb_exec_sv__DOT__ab)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelfRef.tb_exec_sv__DOT__aa 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelfRef.tb_exec_sv__DOT__ab)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_exec_sv__DOT__aop))
                                                    ? 
                                                   (vlSelfRef.tb_exec_sv__DOT__aa 
                                                    - vlSelfRef.tb_exec_sv__DOT__ab)
                                                    : 
                                                   (vlSelfRef.tb_exec_sv__DOT__aa 
                                                    + vlSelfRef.tb_exec_sv__DOT__ab)))));
    vlSelfRef.tb_exec_sv__DOT__bt = ((4U & (IData)(vlSelfRef.tb_exec_sv__DOT__bop))
                                      ? ((2U & (IData)(vlSelfRef.tb_exec_sv__DOT__bop))
                                          ? ((1U & (IData)(vlSelfRef.tb_exec_sv__DOT__bop))
                                              ? (vlSelfRef.tb_exec_sv__DOT__ba 
                                                 >= vlSelfRef.tb_exec_sv__DOT__bb)
                                              : (vlSelfRef.tb_exec_sv__DOT__ba 
                                                 < vlSelfRef.tb_exec_sv__DOT__bb))
                                          : ((1U & (IData)(vlSelfRef.tb_exec_sv__DOT__bop))
                                              ? VL_GTES_III(32, vlSelfRef.tb_exec_sv__DOT__ba, vlSelfRef.tb_exec_sv__DOT__bb)
                                              : VL_LTS_III(32, vlSelfRef.tb_exec_sv__DOT__ba, vlSelfRef.tb_exec_sv__DOT__bb)))
                                      : ((~ ((IData)(vlSelfRef.tb_exec_sv__DOT__bop) 
                                             >> 1U)) 
                                         & ((1U & (IData)(vlSelfRef.tb_exec_sv__DOT__bop))
                                             ? (vlSelfRef.tb_exec_sv__DOT__ba 
                                                != vlSelfRef.tb_exec_sv__DOT__bb)
                                             : (vlSelfRef.tb_exec_sv__DOT__ba 
                                                == vlSelfRef.tb_exec_sv__DOT__bb))));
}

void Vtb_exec_sv___024root___eval_nba(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_nba\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_exec_sv___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_exec_sv___024root___timing_resume(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___timing_resume\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_exec_sv___024root___eval_triggers__act(Vtb_exec_sv___024root* vlSelf);

bool Vtb_exec_sv___024root___eval_phase__act(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_phase__act\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_exec_sv___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_exec_sv___024root___timing_resume(vlSelf);
        Vtb_exec_sv___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_exec_sv___024root___eval_phase__nba(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_phase__nba\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_exec_sv___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_exec_sv___024root___dump_triggers__nba(Vtb_exec_sv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_exec_sv___024root___dump_triggers__act(Vtb_exec_sv___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_exec_sv___024root___eval(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_exec_sv___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/exec/tb_exec_sv.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_exec_sv___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/c/Users/kursu/Desktop/hasankursun/weft/ip/warp/test/exec/tb_exec_sv.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_exec_sv___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_exec_sv___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_exec_sv___024root___eval_debug_assertions(Vtb_exec_sv___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_exec_sv___024root___eval_debug_assertions\n"); );
    Vtb_exec_sv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
