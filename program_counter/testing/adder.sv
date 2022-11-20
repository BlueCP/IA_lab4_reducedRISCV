module adder #(
    parameter DATA_LENGTH = 32
) (
   input logic [DATA_LENGTH-1:0] in,
   input logic [DATA_LENGTH-1:0] N,
   output logic [DATA_LENGTH-1:0] out 
);

assign out = in + N;

endmodule
