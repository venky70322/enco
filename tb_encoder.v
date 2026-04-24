

module tb_encoder;

reg  [3:0] y;
wire [1:0] a;

encoder dut (
    .y(y),
    .a(a)
);

initial begin
    $dumpfile("encoder.vcd");
    $dumpvars(0, tb_encoder);

    y = 4'b0001; #10;
    y = 4'b0010; #10;
    y = 4'b0100; #10;
    y = 4'b1000; #10;
    y = 4'b0000; #10;

    $finish;
end

initial begin
    $monitor("time=%0t y=%b a=%b", $time, y, a);
end

endmodule
