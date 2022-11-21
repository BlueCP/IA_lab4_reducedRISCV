// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See ValuTop.h for the primary calling header

#include "verilated.h"

#include "ValuTop___024root.h"

VL_INLINE_OPT void ValuTop___024root___sequent__TOP__0(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__aluTop__DOT__RegFile__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__aluTop__DOT__RegFile__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__aluTop__DOT__RegFile__DOT__reg_array__v0;
    // Body
    __Vdlyvset__aluTop__DOT__RegFile__DOT__reg_array__v0 = 0U;
    if (vlSelf->RegWrite) {
        __Vdlyvval__aluTop__DOT__RegFile__DOT__reg_array__v0 
            = ((4U & (IData)(vlSelf->ALUctrl)) ? ((2U 
                                                   & (IData)(vlSelf->ALUctrl))
                                                   ? vlSelf->aluTop__DOT__ALUop1
                                                   : 
                                                  ((IData)(vlSelf->ALUctrl)
                                                    ? 
                                                   (vlSelf->aluTop__DOT__ALUop1 
                                                    < vlSelf->aluTop__DOT__ALUop2)
                                                    : vlSelf->aluTop__DOT__ALUop1))
                : ((2U & (IData)(vlSelf->ALUctrl)) ? 
                   ((IData)(vlSelf->ALUctrl) ? (vlSelf->aluTop__DOT__ALUop1 
                                                | vlSelf->aluTop__DOT__ALUop2)
                     : (vlSelf->aluTop__DOT__ALUop1 
                        & vlSelf->aluTop__DOT__ALUop2))
                    : ((IData)(vlSelf->ALUctrl) ? (vlSelf->aluTop__DOT__ALUop1 
                                                   - vlSelf->aluTop__DOT__ALUop2)
                        : (vlSelf->aluTop__DOT__ALUop1 
                           + vlSelf->aluTop__DOT__ALUop2))));
        __Vdlyvset__aluTop__DOT__RegFile__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__aluTop__DOT__RegFile__DOT__reg_array__v0 
            = (0x1fU & (vlSelf->Instr >> 7U));
    }
    vlSelf->aluTop__DOT__ALUop1 = vlSelf->aluTop__DOT__RegFile__DOT__reg_array
        [(0x1fU & (vlSelf->Instr >> 0xfU))];
    vlSelf->aluTop__DOT__regOp2 = vlSelf->aluTop__DOT__RegFile__DOT__reg_array
        [(0x1fU & (vlSelf->Instr >> 0x14U))];
    vlSelf->a0 = vlSelf->aluTop__DOT__RegFile__DOT__reg_array
        [0U];
    if (__Vdlyvset__aluTop__DOT__RegFile__DOT__reg_array__v0) {
        vlSelf->aluTop__DOT__RegFile__DOT__reg_array[__Vdlyvdim0__aluTop__DOT__RegFile__DOT__reg_array__v0] 
            = __Vdlyvval__aluTop__DOT__RegFile__DOT__reg_array__v0;
    }
}

VL_INLINE_OPT void ValuTop___024root___combo__TOP__0(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->aluTop__DOT__ALUop2 = ((IData)(vlSelf->ALUsrc)
                                    ? vlSelf->ImmOp
                                    : vlSelf->aluTop__DOT__regOp2);
    vlSelf->EQ = (vlSelf->aluTop__DOT__ALUop1 == vlSelf->aluTop__DOT__ALUop2);
}

void ValuTop___024root___eval(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        ValuTop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    ValuTop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void ValuTop___024root___eval_debug_assertions(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->ALUsrc & 0xfeU))) {
        Verilated::overWidthError("ALUsrc");}
    if (VL_UNLIKELY((vlSelf->ALUctrl & 0xfeU))) {
        Verilated::overWidthError("ALUctrl");}
    if (VL_UNLIKELY((vlSelf->RegWrite & 0xfeU))) {
        Verilated::overWidthError("RegWrite");}
}
#endif  // VL_DEBUG
