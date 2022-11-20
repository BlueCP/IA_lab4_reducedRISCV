module cpu #(
    parameter WIDTH = 32
) (
    input wire [WIDTH-1:0] PC,
    input wire EQ,
    output wire [5:1] rs1,
    output wire [5:1] rs2,
    output wire [5:1] rd,
    output wire RegWrite,
    output wire ALUctrl,
    output wire ALUsrc,
    output wire ImmSrc,
    output wire PCsrc,
    output wire [WIDTH-1:0] ImmOp

);

// Interconnect wires.
wire [WIDTH-1:0] instr;

// Lower-level modules incorporated.

instr_mem InstructionMemory (
    .A (PC),
    .RD (instr)
);

control_unit ControlUnit (
    .EQ (EQ),
    .funct3(instr[14:12]),
    .opcode(instr[6:0]),
    .RegWrite (RegWrite),
    .ALUctrl (ALUctrl),
    .ALUsrc (ALUsrc),
    .ImmSrc (ImmSrc),
    .PCsrc (PCsrc)
);

sign_extend SignExtend (
    .instruction (instr),
    .ImmSrc (ImmSrc),
    .ImmOp (ImmOp)
);
    
endmodule
