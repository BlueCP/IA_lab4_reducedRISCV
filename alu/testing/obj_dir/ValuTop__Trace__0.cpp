// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "ValuTop__Syms.h"


void ValuTop___024root__trace_chg_sub_0(ValuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void ValuTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_chg_top_0\n"); );
    // Init
    ValuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<ValuTop___024root*>(voidSelf);
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    ValuTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void ValuTop___024root__trace_chg_sub_0(ValuTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->aluTop__DOT__ALUop1),32);
        bufp->chgIData(oldp+1,(vlSelf->aluTop__DOT__regOp2),32);
        bufp->chgIData(oldp+2,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->aluTop__DOT__RegFile__DOT__reg_array[31]),32);
    }
    bufp->chgBit(oldp+34,(vlSelf->clk));
    bufp->chgBit(oldp+35,(vlSelf->ALUsrc));
    bufp->chgBit(oldp+36,(vlSelf->ALUctrl));
    bufp->chgIData(oldp+37,(vlSelf->Instr),32);
    bufp->chgBit(oldp+38,(vlSelf->RegWrite));
    bufp->chgIData(oldp+39,(vlSelf->ImmOp),32);
    bufp->chgBit(oldp+40,(vlSelf->EQ));
    bufp->chgIData(oldp+41,(vlSelf->a0),32);
    bufp->chgIData(oldp+42,(((4U & (IData)(vlSelf->ALUctrl))
                              ? ((2U & (IData)(vlSelf->ALUctrl))
                                  ? vlSelf->aluTop__DOT__ALUop1
                                  : ((IData)(vlSelf->ALUctrl)
                                      ? (vlSelf->aluTop__DOT__ALUop1 
                                         < vlSelf->aluTop__DOT__ALUop2)
                                      : vlSelf->aluTop__DOT__ALUop1))
                              : ((2U & (IData)(vlSelf->ALUctrl))
                                  ? ((IData)(vlSelf->ALUctrl)
                                      ? (vlSelf->aluTop__DOT__ALUop1 
                                         | vlSelf->aluTop__DOT__ALUop2)
                                      : (vlSelf->aluTop__DOT__ALUop1 
                                         & vlSelf->aluTop__DOT__ALUop2))
                                  : ((IData)(vlSelf->ALUctrl)
                                      ? (vlSelf->aluTop__DOT__ALUop1 
                                         - vlSelf->aluTop__DOT__ALUop2)
                                      : (vlSelf->aluTop__DOT__ALUop1 
                                         + vlSelf->aluTop__DOT__ALUop2))))),32);
    bufp->chgIData(oldp+43,(vlSelf->aluTop__DOT__ALUop2),32);
    bufp->chgCData(oldp+44,(vlSelf->ALUctrl),3);
    bufp->chgCData(oldp+45,((0x1fU & (vlSelf->Instr 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+46,((0x1fU & (vlSelf->Instr 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+47,((0x1fU & (vlSelf->Instr 
                                      >> 7U))),5);
}

void ValuTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    ValuTop___024root__trace_cleanup\n"); );
    // Init
    ValuTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<ValuTop___024root*>(voidSelf);
    ValuTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
