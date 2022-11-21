// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_control_mem_extend__Syms.h"


VL_ATTR_COLD void Vtop_control_mem_extend___024root__trace_init_sub__TOP__0(Vtop_control_mem_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+38,"PC", false,-1, 31,0);
    tracep->declBit(c+39,"EQ", false,-1);
    tracep->declBus(c+40,"rs1", false,-1, 5,1);
    tracep->declBus(c+41,"rs2", false,-1, 5,1);
    tracep->declBus(c+42,"rd", false,-1, 5,1);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBit(c+44,"ALUctrl", false,-1);
    tracep->declBit(c+45,"ALUsrc", false,-1);
    tracep->declBit(c+46,"ImmSrc", false,-1);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBus(c+48,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("top_control_mem_extend ");
    tracep->declBus(c+49,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"PC", false,-1, 31,0);
    tracep->declBit(c+39,"EQ", false,-1);
    tracep->declBus(c+40,"rs1", false,-1, 5,1);
    tracep->declBus(c+41,"rs2", false,-1, 5,1);
    tracep->declBus(c+42,"rd", false,-1, 5,1);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBit(c+44,"ALUctrl", false,-1);
    tracep->declBit(c+45,"ALUsrc", false,-1);
    tracep->declBit(c+46,"ImmSrc", false,-1);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBus(c+48,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+29,"instr", false,-1, 31,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBit(c+39,"EQ", false,-1);
    tracep->declBus(c+30,"funct3", false,-1, 14,12);
    tracep->declBus(c+31,"opcode", false,-1, 6,0);
    tracep->declBit(c+43,"RegWrite", false,-1);
    tracep->declBit(c+44,"ALUctrl", false,-1);
    tracep->declBit(c+45,"ALUsrc", false,-1);
    tracep->declBit(c+46,"ImmSrc", false,-1);
    tracep->declBit(c+47,"PCsrc", false,-1);
    tracep->declBus(c+32,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+50,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"A", false,-1, 31,0);
    tracep->declBus(c+29,"RD", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->declBus(c+33,"byte1", false,-1, 7,0);
    tracep->declBus(c+34,"byte2", false,-1, 7,0);
    tracep->declBus(c+35,"byte3", false,-1, 7,0);
    tracep->declBus(c+36,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+49,"data_width", false,-1, 31,0);
    tracep->declBus(c+51,"imm_width", false,-1, 31,0);
    tracep->declBus(c+29,"instruction", false,-1, 31,0);
    tracep->declBit(c+46,"ImmSrc", false,-1);
    tracep->declBus(c+48,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+37,"imm", false,-1, 11,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root__trace_init_top(Vtop_control_mem_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_init_top\n"); );
    // Body
    Vtop_control_mem_extend___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_control_mem_extend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_control_mem_extend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_control_mem_extend___024root__trace_register(Vtop_control_mem_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_control_mem_extend___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_control_mem_extend___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_control_mem_extend___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root__trace_full_sub_0(Vtop_control_mem_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_control_mem_extend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_full_top_0\n"); );
    // Init
    Vtop_control_mem_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_control_mem_extend___024root*>(voidSelf);
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_control_mem_extend___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_control_mem_extend___024root__trace_full_sub_0(Vtop_control_mem_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_control_mem_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_control_mem_extend___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array[27]),8);
    bufp->fullIData(oldp+29,(vlSelf->top_control_mem_extend__DOT__instr),32);
    bufp->fullCData(oldp+30,((7U & (vlSelf->top_control_mem_extend__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+31,((0x7fU & vlSelf->top_control_mem_extend__DOT__instr)),7);
    bufp->fullIData(oldp+32,(vlSelf->top_control_mem_extend__DOT__ControlUnit__DOT__instr),32);
    bufp->fullCData(oldp+33,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte1),8);
    bufp->fullCData(oldp+34,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte2),8);
    bufp->fullCData(oldp+35,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte3),8);
    bufp->fullCData(oldp+36,(vlSelf->top_control_mem_extend__DOT__InstructionMemory__DOT__byte4),8);
    bufp->fullSData(oldp+37,(vlSelf->top_control_mem_extend__DOT__SignExtend__DOT__imm),12);
    bufp->fullIData(oldp+38,(vlSelf->PC),32);
    bufp->fullBit(oldp+39,(vlSelf->EQ));
    bufp->fullCData(oldp+40,(vlSelf->rs1),5);
    bufp->fullCData(oldp+41,(vlSelf->rs2),5);
    bufp->fullCData(oldp+42,(vlSelf->rd),5);
    bufp->fullBit(oldp+43,(vlSelf->RegWrite));
    bufp->fullBit(oldp+44,(vlSelf->ALUctrl));
    bufp->fullBit(oldp+45,(vlSelf->ALUsrc));
    bufp->fullBit(oldp+46,(vlSelf->ImmSrc));
    bufp->fullBit(oldp+47,(vlSelf->PCsrc));
    bufp->fullIData(oldp+48,(vlSelf->ImmOp),32);
    bufp->fullIData(oldp+49,(0x20U),32);
    bufp->fullIData(oldp+50,(8U),32);
    bufp->fullIData(oldp+51,(0xcU),32);
}
