// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_control_mem_extend.h for the primary calling header

#include "verilated.h"

#include "Vtop_control_mem_extend___024root.h"

VL_INLINE_OPT void Vtop_control_mem_extend___024root___combo__TOP__0(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte1 
        = ((0x1bU >= (0x1fU & vlSelf->PC)) ? vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & vlSelf->PC)] : 0U);
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte2 
        = ((0x1bU >= (0x1fU & ((IData)(1U) + vlSelf->PC)))
            ? vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & ((IData)(1U) + vlSelf->PC))] : 0U);
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte3 
        = ((0x1bU >= (0x1fU & ((IData)(2U) + vlSelf->PC)))
            ? vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & ((IData)(2U) + vlSelf->PC))] : 0U);
    vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte4 
        = ((0x1bU >= (0x1fU & ((IData)(3U) + vlSelf->PC)))
            ? vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array
           [(0x1fU & ((IData)(3U) + vlSelf->PC))] : 0U);
    vlSelf->top_control_mem_extend__DOT__instr = (((IData)(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte1) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte2) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte3) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte4))));
    vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr 
        = ((IData)((0x13U == (0x707fU & vlSelf->top_control_mem_extend__DOT__instr)))
            ? 1U : ((IData)((0x1063U == (0x707fU & vlSelf->top_control_mem_extend__DOT__instr)))
                     ? 2U : 0U));
    vlSelf->RegWrite = (1U == vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr);
    vlSelf->ALUsrc = (1U == vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr);
    vlSelf->PCsrc = ((2U == vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr) 
                     & (~ (IData)(vlSelf->EQ)));
    vlSelf->ImmSrc = (1U == vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr);
    vlSelf->top_control_mem_extend__DOT__SignExtend__DOT__imm 
        = (0xfffU & ((IData)(vlSelf->ImmSrc) ? (vlSelf->top_control_mem_extend__DOT__instr 
                                                >> 0x14U)
                      : ((0x800U & (vlSelf->top_control_mem_extend__DOT__instr 
                                    >> 0x14U)) | ((0x400U 
                                                   & (vlSelf->top_control_mem_extend__DOT__instr 
                                                      << 3U)) 
                                                  | ((0x3f0U 
                                                      & (vlSelf->top_control_mem_extend__DOT__instr 
                                                         >> 0x15U)) 
                                                     | (0xfU 
                                                        & (vlSelf->top_control_mem_extend__DOT__instr 
                                                           >> 8U)))))));
    vlSelf->ImmOp = ((0x800U & (IData)(vlSelf->top_control_mem_extend__DOT__SignExtend__DOT__imm))
                      ? (0xfffff000U | (IData)(vlSelf->top_control_mem_extend__DOT__SignExtend__DOT__imm))
                      : (IData)(vlSelf->top_control_mem_extend__DOT__SignExtend__DOT__imm));
}

void Vtop_control_mem_extend___024root___eval(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___eval\n"); );
    // Body
    Vtop_control_mem_extend___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vtop_control_mem_extend___024root___eval_debug_assertions(Vtop_control_mem_extend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->EQ & 0xfeU))) {
        Verilated::overWidthError("EQ");}
}
#endif  // VL_DEBUG
