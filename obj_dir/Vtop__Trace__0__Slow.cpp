// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+88,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+88,"a0", false,-1, 31,0);
    tracep->declBit(c+29,"RegWrite", false,-1);
    tracep->declBit(c+89,"ALUctrl", false,-1);
    tracep->declBit(c+29,"ALUsrc", false,-1);
    tracep->declBit(c+29,"ImmSrc", false,-1);
    tracep->declBit(c+30,"PCsrc", false,-1);
    tracep->declBit(c+31,"EQ", false,-1);
    tracep->declBus(c+32,"rs1", false,-1, 4,0);
    tracep->declBus(c+33,"rs2", false,-1, 4,0);
    tracep->declBus(c+34,"rd", false,-1, 4,0);
    tracep->declBus(c+35,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("aluTop ");
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+29,"ALUsrc", false,-1);
    tracep->declBit(c+89,"ALUctrl", false,-1);
    tracep->declBus(c+32,"rs1", false,-1, 4,0);
    tracep->declBus(c+33,"rs2", false,-1, 4,0);
    tracep->declBus(c+34,"rd", false,-1, 4,0);
    tracep->declBit(c+29,"RegWrite", false,-1);
    tracep->declBus(c+35,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+31,"EQ", false,-1);
    tracep->declBus(c+88,"a0", false,-1, 31,0);
    tracep->declBus(c+38,"ALUout", false,-1, 31,0);
    tracep->declBus(c+39,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+40,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+41,"regOp2", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+40,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+91,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+38,"SUM", false,-1, 31,0);
    tracep->declBit(c+31,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMux ");
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"ALUsrc", false,-1);
    tracep->declBus(c+41,"regOp2", false,-1, 31,0);
    tracep->declBus(c+35,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+40,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegFile ");
    tracep->declBus(c+92,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBus(c+32,"rs1", false,-1, 4,0);
    tracep->declBus(c+33,"rs2", false,-1, 4,0);
    tracep->declBus(c+34,"rd", false,-1, 4,0);
    tracep->declBit(c+29,"WE3", false,-1);
    tracep->declBus(c+38,"WD3", false,-1, 31,0);
    tracep->declBus(c+39,"RD1", false,-1, 31,0);
    tracep->declBus(c+41,"RD2", false,-1, 31,0);
    tracep->declBus(c+88,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+42+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_PC ");
    tracep->declBus(c+90,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+35,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+30,"PCsrc", false,-1);
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->declBus(c+74,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+75,"next_PC", false,-1, 31,0);
    tracep->declBus(c+76,"branch_PC", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+90,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+75,"next_PC", false,-1, 31,0);
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_inc ");
    tracep->declBus(c+90,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+37,"in", false,-1, 31,0);
    tracep->declBus(c+93,"N", false,-1, 31,0);
    tracep->declBus(c+74,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add_op ");
    tracep->declBus(c+90,"DATA_LENGTH", false,-1, 31,0);
    tracep->declBus(c+37,"in", false,-1, 31,0);
    tracep->declBus(c+77,"N", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"d_0", false,-1, 31,0);
    tracep->declBus(c+76,"d_1", false,-1, 31,0);
    tracep->declBit(c+30,"s", false,-1);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("top_cme ");
    tracep->declBus(c+90,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"PC", false,-1, 31,0);
    tracep->declBit(c+31,"EQ", false,-1);
    tracep->declBus(c+36,"instr", false,-1, 31,0);
    tracep->declBit(c+29,"RegWrite", false,-1);
    tracep->declBit(c+89,"ALUctrl", false,-1);
    tracep->declBit(c+29,"ALUsrc", false,-1);
    tracep->declBit(c+29,"ImmSrc", false,-1);
    tracep->declBit(c+30,"PCsrc", false,-1);
    tracep->declBus(c+35,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBit(c+31,"EQ", false,-1);
    tracep->declBus(c+78,"funct3", false,-1, 14,12);
    tracep->declBus(c+79,"opcode", false,-1, 6,0);
    tracep->declBit(c+29,"RegWrite", false,-1);
    tracep->declBit(c+89,"ALUctrl", false,-1);
    tracep->declBit(c+29,"ALUsrc", false,-1);
    tracep->declBit(c+29,"ImmSrc", false,-1);
    tracep->declBit(c+30,"PCsrc", false,-1);
    tracep->declBus(c+80,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstructionMemory ");
    tracep->declBus(c+94,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"A", false,-1, 31,0);
    tracep->declBus(c+36,"RD", false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->declBus(c+81,"byte1", false,-1, 7,0);
    tracep->declBus(c+82,"byte2", false,-1, 7,0);
    tracep->declBus(c+83,"byte3", false,-1, 7,0);
    tracep->declBus(c+84,"byte4", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+90,"data_width", false,-1, 31,0);
    tracep->declBus(c+95,"imm_width", false,-1, 31,0);
    tracep->declBus(c+36,"instruction", false,-1, 31,0);
    tracep->declBit(c+29,"ImmSrc", false,-1);
    tracep->declBus(c+35,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+85,"imm", false,-1, 11,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array[27]),8);
    bufp->fullBit(oldp+29,((1U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr)));
    bufp->fullBit(oldp+30,(((2U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                            & (vlSelf->top__DOT__aluTop__DOT__ALUop1 
                               != vlSelf->top__DOT__aluTop__DOT__ALUop2))));
    bufp->fullBit(oldp+31,((vlSelf->top__DOT__aluTop__DOT__ALUop1 
                            == vlSelf->top__DOT__aluTop__DOT__ALUop2)));
    bufp->fullCData(oldp+32,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ImmOp),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__instr),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__PC),32);
    bufp->fullIData(oldp+38,((vlSelf->top__DOT__aluTop__DOT__ALUop1 
                              + vlSelf->top__DOT__aluTop__DOT__ALUop2)),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__aluTop__DOT__ALUop1),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__aluTop__DOT__ALUop2),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array
                             [(0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__aluTop__DOT__RegFile__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+74,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
    bufp->fullIData(oldp+75,((((2U == vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr) 
                               & (vlSelf->top__DOT__aluTop__DOT__ALUop1 
                                  != vlSelf->top__DOT__aluTop__DOT__ALUop2))
                               ? (vlSelf->top__DOT__PC 
                                  + (vlSelf->top__DOT__ImmOp 
                                     << 1U)) : ((IData)(4U) 
                                                + vlSelf->top__DOT__PC))),32);
    bufp->fullIData(oldp+76,((vlSelf->top__DOT__PC 
                              + (vlSelf->top__DOT__ImmOp 
                                 << 1U))),32);
    bufp->fullIData(oldp+77,((vlSelf->top__DOT__ImmOp 
                              << 1U)),32);
    bufp->fullCData(oldp+78,((7U & (vlSelf->top__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+79,((0x7fU & vlSelf->top__DOT__instr)),7);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__top_cme__DOT__ControlUnit__DOT__instr),32);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte1),8);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte2),8);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte3),8);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__top_cme__DOT__InstructionMemory__DOT__byte4),8);
    bufp->fullSData(oldp+85,(vlSelf->top__DOT__top_cme__DOT__SignExtend__DOT__imm),12);
    bufp->fullBit(oldp+86,(vlSelf->clk));
    bufp->fullBit(oldp+87,(vlSelf->rst));
    bufp->fullIData(oldp+88,(vlSelf->a0),32);
    bufp->fullBit(oldp+89,(0U));
    bufp->fullIData(oldp+90,(0x20U),32);
    bufp->fullCData(oldp+91,(0U),3);
    bufp->fullIData(oldp+92,(5U),32);
    bufp->fullIData(oldp+93,(4U),32);
    bufp->fullIData(oldp+94,(8U),32);
    bufp->fullIData(oldp+95,(0xcU),32);
}
