// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*7:0*/ top__DOT__top_cme__DOT__InstructionMemory__DOT__byte1;
    CData/*7:0*/ top__DOT__top_cme__DOT__InstructionMemory__DOT__byte2;
    CData/*7:0*/ top__DOT__top_cme__DOT__InstructionMemory__DOT__byte3;
    CData/*7:0*/ top__DOT__top_cme__DOT__InstructionMemory__DOT__byte4;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*11:0*/ top__DOT__top_cme__DOT__SignExtend__DOT__imm;
    VL_OUT(a0,31,0);
    IData/*31:0*/ top__DOT__ImmOp;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__PC;
    IData/*31:0*/ top__DOT__aluTop__DOT__ALUop1;
    IData/*31:0*/ top__DOT__aluTop__DOT__ALUop2;
    IData/*31:0*/ top__DOT__aluTop__DOT__regOp2;
    IData/*31:0*/ top__DOT__top_cme__DOT__ControlUnit__DOT__instr;
    IData/*31:0*/ top__DOT__top_PC__DOT__next_PC;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__aluTop__DOT__RegFile__DOT__reg_array;
    VlUnpacked<CData/*7:0*/, 28> top__DOT__top_cme__DOT__InstructionMemory__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
