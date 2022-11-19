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

logic addi_instr;
logic bne_instr;

always_comb begin
    // Determine which type of instruction.
    addi_instr = 0;
    bne_instr = 0;
    if (opcode == 7'b0010011 and funct3 == 3'b000) addi_instr = 1;
    if (opcode == 7'b1100011 and funct3 == 3'b001) bne_instr = 1;

    // Logic for RegWrite.
    if(addi_instr == 1) RegWrite = 1;
    if(bne_instr == 1) RegWrite = 0;
    // Logic for ALUctrl.
    if(addi_instr == 1) ALUctrl = 1;
    if(bne_instr == 1) ALUctrl = 0;
    // Logic for ALUsrc.
    if(addi_instr == 1) ALUsrc = 1;
    if(bne_instr == 1) ALUsrc = 0;
    // Logic of ImmSrc.
    if(addi_instr == 1) ImmSrc = 1;
    if(bne_instr == 1) ImmSrc = 0;
    // Logic for PCsrc
    if(addi_instr == 1 or (bne_instr == 1 and EQ == 1)) PCsrc = 0;
    if(bne_instr == 1 and EQ == 0) PCsrc = 1;
end

endmodule
