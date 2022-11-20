module PC_Reg #(
    parameter DATA_LENGTH = 32
) (
    input logic clk,
    input logic rst,
    input logic [DATA_LENGTH-1:0] next_PC,
    output logic [DATA_LENGTH-1:0] PC
);

always_ff @(posedge clk)begin
    if(rst)  PC <= 0;
    else PC <= next_PC;
end
    
endmodule
