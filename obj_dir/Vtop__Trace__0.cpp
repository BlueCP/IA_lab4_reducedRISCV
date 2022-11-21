// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[3]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[4]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[5]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[6]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[7]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[8]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[9]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[10]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[11]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[12]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[13]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[14]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[15]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[16]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[17]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[18]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[19]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[20]),8);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[21]),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[22]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[23]),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[24]),8);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[25]),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[26]),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[27]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+28,((1U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr)));
        bufp->chgBit(oldp+29,(((2U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                               & (vlSelf->top__DOT__aluTop__DOT__ALUop1 
                                  != vlSelf->top__DOT__aluTop__DOT__ALUop2))));
        bufp->chgBit(oldp+30,((vlSelf->top__DOT__aluTop__DOT__ALUop1 
                               == vlSelf->top__DOT__aluTop__DOT__ALUop2)));
        bufp->chgCData(oldp+31,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__instr),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+37,((vlSelf->top__DOT__aluTop__DOT__ALUop1 
                                 + vlSelf->top__DOT__aluTop__DOT__ALUop2)),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__aluTop__DOT__ALUop1),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__aluTop__DOT__ALUop2),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array
                                [(0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[31]),32);
        bufp->chgIData(oldp+73,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+74,((((2U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                                  & (vlSelf->top__DOT__aluTop__DOT__ALUop1 
                                     != vlSelf->top__DOT__aluTop__DOT__ALUop2))
                                  ? (vlSelf->top__DOT__PC 
                                     + (vlSelf->top__DOT__ImmOp 
                                        << 1U)) : ((IData)(4U) 
                                                   + vlSelf->top__DOT__PC))),32);
        bufp->chgIData(oldp+75,((vlSelf->top__DOT__PC 
                                 + (vlSelf->top__DOT__ImmOp 
                                    << 1U))),32);
        bufp->chgIData(oldp+76,((vlSelf->top__DOT__ImmOp 
                                 << 1U)),32);
        bufp->chgCData(oldp+77,((7U & (vlSelf->top__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+78,((0x7fU & vlSelf->top__DOT__instr)),7);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr),32);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte1),8);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte2),8);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte3),8);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte4),8);
        bufp->chgSData(oldp+84,(vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm),12);
    }
    bufp->chgBit(oldp+85,(vlSelf->clk));
    bufp->chgBit(oldp+86,(vlSelf->rst));
    bufp->chgIData(oldp+87,(vlSelf->a0),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
