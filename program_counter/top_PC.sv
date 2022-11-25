module  top_PC #(
    parameter ADDRESS_WIDTH = 32
) (
    input logic clk,
    input logic rst,
    input logic [ADDRESS_WIDTH-1:0] ImmOp,
    input logic PCsrc,
    output logic [ADDRESS_WIDTH-1:0] PC
);

logic [ADDRESS_WIDTH-1:0] inc_PC;
logic [ADDRESS_WIDTH-1:0] next_PC;
logic [ADDRESS_WIDTH-1:0] branch_PC;

adder add_op(
    .in(PC),
    .N(ImmOp << 1), // 1 step in ImmOp corresponds to 2 bytes
    .out(branch_PC)
);

adder add_inc(
    .in(PC),
    .N(32'd4),
    .out(inc_PC)
);

mux_2 mux(
    .d_0(inc_PC),
    .d_1(branch_PC),
    .s(PCsrc),
    .dout(next_PC)
);

PC_Reg PC_Reg(
    .clk(clk),
    .rst(rst),
    .next_PC(next_PC),
    .PC(PC)
);

endmodule
