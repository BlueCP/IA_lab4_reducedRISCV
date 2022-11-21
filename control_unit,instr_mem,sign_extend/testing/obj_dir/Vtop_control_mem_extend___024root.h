// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_control_mem_extend.h for the primary calling header

#ifndef VERILATED_VTOP_CONTROL_MEM_EXTEND___024ROOT_H_
#define VERILATED_VTOP_CONTROL_MEM_EXTEND___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_control_mem_extend__Syms;

class Vtop_control_mem_extend___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(EQ,0,0);
    VL_OUT8(rs1,5,1);
    VL_OUT8(rs2,5,1);
    VL_OUT8(rd,5,1);
    VL_OUT8(RegWrite,0,0);
    VL_OUT8(ALUctrl,0,0);
    VL_OUT8(ALUsrc,0,0);
    VL_OUT8(ImmSrc,0,0);
    VL_OUT8(PCsrc,0,0);
    CData/*7:0*/ top_control_mem_extend__DOT__InstructionMemory__DOT__byte1;
    CData/*7:0*/ top_control_mem_extend__DOT__InstructionMemory__DOT__byte2;
    CData/*7:0*/ top_control_mem_extend__DOT__InstructionMemory__DOT__byte3;
    CData/*7:0*/ top_control_mem_extend__DOT__InstructionMemory__DOT__byte4;
    SData/*11:0*/ top_control_mem_extend__DOT__SignExtend__DOT__imm;
    VL_IN(PC,31,0);
    VL_OUT(ImmOp,31,0);
    IData/*31:0*/ top_control_mem_extend__DOT__instr;
    IData/*31:0*/ top_control_mem_extend__DOT__ControlUnit__DOT__instr;
    VlUnpacked<CData/*7:0*/, 28> top_control_mem_extend__DOT__InstructionMemory__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop_control_mem_extend__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_control_mem_extend___024root(Vtop_control_mem_extend__Syms* symsp, const char* name);
    ~Vtop_control_mem_extend___024root();
    VL_UNCOPYABLE(Vtop_control_mem_extend___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
