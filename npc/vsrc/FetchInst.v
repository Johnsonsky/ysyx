
import "DPI-C" context function bits[31:0] get_inst(bits[63:0] addr);
module FetchInst(in_addr, out_inst);
  input [63:0] in_addr;
  output [31:0] out_inst;

  assign out_inst = get_inst(in_addr);
endmodule
    