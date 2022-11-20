// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_PC.h for the primary calling header

#include "verilated.h"

#include "Vtop_PC___024root.h"

VL_ATTR_COLD void Vtop_PC___024root___eval_initial(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop_PC___024root___combo__TOP__0(Vtop_PC___024root* vlSelf);

VL_ATTR_COLD void Vtop_PC___024root___eval_settle(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___eval_settle\n"); );
    // Body
    Vtop_PC___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop_PC___024root___final(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___final\n"); );
}

VL_ATTR_COLD void Vtop_PC___024root___ctor_var_reset(Vtop_PC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_PC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_PC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ImmOP = VL_RAND_RESET_I(32);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->top_PC__DOT__next_PC = VL_RAND_RESET_I(32);
}
