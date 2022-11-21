// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_control_mem_extend.h for the primary calling header

#include "verilated.h"

#include "Vtop_control_mem_extend___024root.h"

VL_ATTR_COLD void Vtop_control_mem_extend___024root___settle__TOP__0(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ALUctrl = 0U;
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root___initial__TOP__0(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_he5f77a3e__0;
    // Body
    vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr = 0U;
    VL_WRITEF("Loading instructions.\n");
    __Vtemp_he5f77a3e__0[0U] = 0x2e6d656dU;
    __Vtemp_he5f77a3e__0[1U] = 0x696f6e73U;
    __Vtemp_he5f77a3e__0[2U] = 0x72756374U;
    __Vtemp_he5f77a3e__0[3U] = 0x696e7374U;
    VL_READMEM_N(true, 8, 28, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_he5f77a3e__0)
                 ,  &(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root___eval_initial(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___eval_initial\n"); );
    // Body
    Vtop_control_mem_extend___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop_control_mem_extend___024root___combo__TOP__0(Vtop_control_mem_extend___024root* vlSelf);

VL_ATTR_COLD void Vtop_control_mem_extend___024root___eval_settle(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___eval_settle\n"); );
    // Body
    Vtop_control_mem_extend___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_control_mem_extend___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root___final(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___final\n"); );
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root___ctor_var_reset(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->EQ = VL_RAND_RESET_I(1);
    vlSelf->rs1 = VL_RAND_RESET_I(5);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->rd = VL_RAND_RESET_I(5);
    vlSelf->RegWrite = VL_RAND_RESET_I(1);
    vlSelf->ALUctrl = VL_RAND_RESET_I(1);
    vlSelf->ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmSrc = VL_RAND_RESET_I(1);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->top_control_mem_extend__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<28; ++__Vi0) {
        vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte1 = VL_RAND_RESET_I(8);
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte2 = VL_RAND_RESET_I(8);
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte3 = VL_RAND_RESET_I(8);
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte4 = VL_RAND_RESET_I(8);
    vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr = 0;
    vlSelf->top_control_mem_extend__DOT__SignExtend__DOT__imm = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
