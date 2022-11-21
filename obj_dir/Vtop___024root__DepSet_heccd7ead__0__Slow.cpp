// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_h4cf3b39c_0;

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Loading instructions.\n");
    VL_READMEM_N(true, 8, 28, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_h4cf3b39c_0)
                 ,  &(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array)
                 , 0, ~0ULL);
    vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0 = vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array
        [0xaU];
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte1 
        = ((0x1bU >= (0x1fU & vlSelf->top__DOT__PC))
            ? vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & vlSelf->top__DOT__PC)] : 0U);
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte2 
        = ((0x1bU >= (0x1fU & ((IData)(1U) + vlSelf->top__DOT__PC)))
            ? vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & ((IData)(1U) + vlSelf->top__DOT__PC))]
            : 0U);
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte3 
        = ((0x1bU >= (0x1fU & ((IData)(2U) + vlSelf->top__DOT__PC)))
            ? vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & ((IData)(2U) + vlSelf->top__DOT__PC))]
            : 0U);
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte4 
        = ((0x1bU >= (0x1fU & ((IData)(3U) + vlSelf->top__DOT__PC)))
            ? vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & ((IData)(3U) + vlSelf->top__DOT__PC))]
            : 0U);
    vlSelf->top__DOT__instr = (((IData)(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte1) 
                                << 0x18U) | (((IData)(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte2) 
                                              << 0x10U) 
                                             | (((IData)(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte3) 
                                                 << 8U) 
                                                | (IData)(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte4))));
    vlSelf->top__DOT__aluTop__DOT__ALUop1 = vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
    vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr 
        = ((IData)((0x13U == (0x707fU & vlSelf->top__DOT__instr)))
            ? 1U : ((IData)((0x1063U == (0x707fU & vlSelf->top__DOT__instr)))
                     ? 2U : 0U));
    vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm 
        = (0xfffU & ((1U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr)
                      ? (vlSelf->top__DOT__instr >> 0x14U)
                      : ((0x800U & (vlSelf->top__DOT__instr 
                                    >> 0x14U)) | ((0x400U 
                                                   & (vlSelf->top__DOT__instr 
                                                      << 3U)) 
                                                  | ((0x3f0U 
                                                      & (vlSelf->top__DOT__instr 
                                                         >> 0x15U)) 
                                                     | (0xfU 
                                                        & (vlSelf->top__DOT__instr 
                                                           >> 8U)))))));
    vlSelf->top__DOT__ImmOp = ((0x800U & (IData)(vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm))
                                ? (0xfffff000U | (IData)(vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm))
                                : (IData)(vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm));
    vlSelf->top__DOT__aluTop__DOT__ALUop2 = ((1U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr)
                                              ? vlSelf->top__DOT__ImmOp
                                              : vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array
                                             [(0x1fU 
                                               & (vlSelf->top__DOT__instr 
                                                  >> 0x14U))]);
    vlSelf->top__DOT__top_PC__DOT__next_PC = (((2U 
                                                == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                                               & (vlSelf->top__DOT__aluTop__DOT__ALUop1 
                                                  != vlSelf->top__DOT__aluTop__DOT__ALUop2))
                                               ? (vlSelf->top__DOT__PC 
                                                  + 
                                                  (vlSelf->top__DOT__ImmOp 
                                                   << 1U))
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__PC));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluTop__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluTop__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr = 0;
    vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__top_PC__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
