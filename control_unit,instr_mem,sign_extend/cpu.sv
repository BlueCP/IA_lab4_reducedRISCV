module cpu #(
    parameter WIDTH = 32
) (
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

// Interconnect wires.
logic [WIDTH-1:0] address;
logic [WIDTH-1:0] instr;
// For control unit.
logic RegWrite;
logic ALUctrl;
logic ALUsrc;
logic ImmSrc;
logic PCsrc;
// For sign extend.
logic ImmOp;

// Lower-level modules incorporated.

instr_mem InstructionMemory (
    .A (address),
    .RD (instr)
);

control_unit ControlUnit (
    .EQ (),
    .funct3(instr[14:12]),
    .opcode(instr[6:0]),
    .RegWrite (RegWrite),
    .ALUctrl (ALUctrl),
    .ALUsrc (ALUsrc),
    .ImmSrc (ImmSrc),
    .PCsrc (PCsrc),
);

sign_extend SignExtend (
    .instruction (instr),
    .ImmSrc (ImmSrc),
    .ImmOp (ImmOp)
);
    
endmodule