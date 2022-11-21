module top (
    input logic clk, rst,
    output logic[31:0] a0
);

logic RegWrite, ALUctrl, ALUsrc, ImmSrc, PCsrc, EQ;
logic[4:0] rs1, rs2, rd;
logic[31:0] ImmOp, instr, PC;

// Bus splitting
assign rs2 = instr[24:20];
assign rs1 = instr[19:15];
assign rd = instr[11:7];

aluTop aluTop(clk, ALUsrc, ALUctrl, rs1, rs2, rd, RegWrite, ImmOp, EQ, a0);

top_control_mem_extend top_cme(PC, EQ, instr, RegWrite, ALUctrl, ALUsrc, ImmSrc, PCsrc, ImmOp);

top_PC top_PC(clk, rst, ImmOp, PCsrc, PC);

endmodule
