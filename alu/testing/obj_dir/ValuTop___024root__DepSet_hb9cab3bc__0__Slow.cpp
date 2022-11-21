// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See ValuTop.h for the primary calling header

#include "verilated.h"

#include "ValuTop___024root.h"

VL_ATTR_COLD void ValuTop___024root___eval_initial(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void ValuTop___024root___combo__TOP__0(ValuTop___024root* vlSelf);

VL_ATTR_COLD void ValuTop___024root___eval_settle(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___eval_settle\n"); );
    // Body
    ValuTop___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void ValuTop___024root___final(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___final\n"); );
}

VL_ATTR_COLD void ValuTop___024root___ctor_var_reset(ValuTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(1);
    vlSelf->Instr = VL_RAND_RESET_I(32);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->aluTop__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->aluTop__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->aluTop__DOT__regOp2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->aluTop__DOT__RegFile__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
