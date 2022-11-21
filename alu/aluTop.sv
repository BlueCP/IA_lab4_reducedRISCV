module aluTop #(
    parameter DATA_WIDTH = 32
)(
    input wire clk,
    input wire ALUsrc,
    input wire ALUctrl,
    //input wire [DATA_WIDTH-1:0] Instr,
    input logic [4:0] rs1, rs2, rd,
    input wire RegWrite,
    input wire [DATA_WIDTH-1:0] ImmOp,
    output wire EQ,
    output wire [DATA_WIDTH-1:0] a0
);

wire [DATA_WIDTH-1:0] ALUout;
wire [DATA_WIDTH-1:0] ALUop1;
wire [DATA_WIDTH-1:0] ALUop2;
wire [DATA_WIDTH-1:0] regOp2;


register RegFile(
.clk(clk),
.rs1(rs1),
.rs2(rs2),
.rd(rd),
.WE3(RegWrite),
.WD3(ALUout),
.RD1(ALUop1),
.RD2(regOp2),
.a0(a0)
);



mux ALUMux(
.ALUsrc(ALUsrc),
.regOp2(regOp2),
.ImmOp(ImmOp),
.ALUop2(ALUop2)
);

alu ALU(
.ALUctrl(ALUctrl),
.ALUop1(ALUop1),
.ALUop2(ALUop2),
.SUM(ALUout),
.EQ(EQ)
);

endmodule
