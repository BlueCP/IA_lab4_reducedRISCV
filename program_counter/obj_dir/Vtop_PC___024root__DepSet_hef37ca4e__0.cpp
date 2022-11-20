// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_PC.h for the primary calling header

#include "verilated.h"

#include "Vtop_PC___024root.h"

VL_INLINE_OPT void Vtop_PC___024root___sequent__TOP__0(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->PC = ((IData)(vlSelf->rst) ? 0U : vlSelf->top_PC__DOT__next_PC);
}

VL_INLINE_OPT void Vtop_PC___024root___combo__TOP__0(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top_PC__DOT__next_PC = ((IData)(vlSelf->PCsrc)
                                     ? (vlSelf->PC 
                                        + vlSelf->ImmOp)
                                     : ((IData)(4U) 
                                        + vlSelf->PC));
}

void Vtop_PC___024root___eval(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop_PC___024root___sequent__TOP__0(vlSelf);
    }
    Vtop_PC___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop_PC___024root___eval_debug_assertions(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->PCsrc & 0xfeU))) {
        Verilated::overWidthError("PCsrc");}
}
#endif  // VL_DEBUG
