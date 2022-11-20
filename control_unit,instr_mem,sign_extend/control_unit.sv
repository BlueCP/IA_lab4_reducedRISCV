module control_unit #(
) (
    input logic EQ,
    input logic [14:12] funct3,
    input logic [6:0] opcode,
    output logic RegWrite,
    output logic ALUctrl,
    output logic ALUsrc,
    output logic ImmSrc,
    output logic PCsrc
);

// logic addi_instr;
// logic bne_instr;

typedef enum {UNDEFINED, ADDI, BNE} instr;

// Determine instruction
always_comb begin
    if (opcode == 7'b0010011 && funct3 == 3'b000)
        instr = ADDI;
    else if (opcode == 7'b1100011 && funct3 == 3'b001)
        instr = BNE;
    else
        instr = UNDEFINED;
end

// Set outputs
always_comb begin
    RegWrite = instr == ADDI;
    ALUctrl = 0; // Only one operation on ALUout for now, addition
    ALUsrc = instr == ADDI;
    ImmSrc = instr == ADDI;
    PCsrc = instr == BNE && EQ == 0;
end

endmodule
