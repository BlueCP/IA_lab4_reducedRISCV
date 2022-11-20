module mux_2 #(
    parameter WIDTH = 32
) (
    input logic [WIDTH-1:0] d_0,
    input logic [WIDTH-1:0] d_1,
    input logic s,
    output logic [WIDTH-1:0] dout
);

assign dout = s ? d_1 : d_0;
    
endmodule
