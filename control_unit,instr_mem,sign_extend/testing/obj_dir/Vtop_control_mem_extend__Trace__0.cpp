// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_control_mem_extend__Syms.h"


void Vtop_control_mem_extend___024root__trace_chg_sub_0(Vtop_control_mem_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_control_mem_extend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_control_mem_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_control_mem_extend___024root*>(voidSelf);
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_control_mem_extend___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_control_mem_extend___024root__trace_chg_sub_0(Vtop_control_mem_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[16]),8);
        bufp->chgCData(oldp+17,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[17]),8);
        bufp->chgCData(oldp+18,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[18]),8);
        bufp->chgCData(oldp+19,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[19]),8);
        bufp->chgCData(oldp+20,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[20]),8);
        bufp->chgCData(oldp+21,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[21]),8);
        bufp->chgCData(oldp+22,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[22]),8);
        bufp->chgCData(oldp+23,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[23]),8);
        bufp->chgCData(oldp+24,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[24]),8);
        bufp->chgCData(oldp+25,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[25]),8);
        bufp->chgCData(oldp+26,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[26]),8);
        bufp->chgCData(oldp+27,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[27]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+28,(vlSelf->top_control_mem_extend__DOT__instr),32);
        bufp->chgCData(oldp+29,((7U & (vlSelf->top_control_mem_extend__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+30,((0x7fU & vlSelf->top_control_mem_extend__DOT__instr)),7);
        bufp->chgIData(oldp+31,(vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr),32);
        bufp->chgCData(oldp+32,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte1),8);
        bufp->chgCData(oldp+33,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte2),8);
        bufp->chgCData(oldp+34,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte3),8);
        bufp->chgCData(oldp+35,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte4),8);
        bufp->chgSData(oldp+36,(vlSelf->top_control_mem_extend__DOT__SignExtend__DOT__imm),12);
    }
    bufp->chgIData(oldp+37,(vlSelf->PC),32);
    bufp->chgBit(oldp+38,(vlSelf->EQ));
    bufp->chgCData(oldp+39,(vlSelf->rs1),5);
    bufp->chgCData(oldp+40,(vlSelf->rs2),5);
    bufp->chgCData(oldp+41,(vlSelf->rd),5);
    bufp->chgBit(oldp+42,(vlSelf->RegWrite));
    bufp->chgBit(oldp+43,(vlSelf->ALUctrl));
    bufp->chgBit(oldp+44,(vlSelf->ALUsrc));
    bufp->chgBit(oldp+45,(vlSelf->ImmSrc));
    bufp->chgBit(oldp+46,(vlSelf->PCsrc));
    bufp->chgIData(oldp+47,(vlSelf->ImmOp),32);
}

void Vtop_control_mem_extend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_cleanup\n"); );
    // Init
    Vtop_control_mem_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_control_mem_extend___024root*>(voidSelf);
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
