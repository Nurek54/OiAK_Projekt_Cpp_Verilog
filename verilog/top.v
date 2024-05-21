module top;
  reg clk;
  reg reset;
  reg [15:0] x;
  reg [15:0] y;
  wire [31:0] out;

  BoothRadix4 uut (
    .clk(clk),
    .reset(reset),
    .x(x),
    .y(y),
    .out(out)
  );

  // Clock generation
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  // Testbench logic
  initial begin
    reset = 1;
    x = 16'h0003; // Example value
    y = 16'h0004; // Example value
    #10 reset = 0;
    #200 $finish;
  end
endmodule
