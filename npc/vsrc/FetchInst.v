
import "DPI-C" context function logic[31:0] get_inst(logic[63:0] addr);
module IFU_DPIC(addr, inst);
  input [63:0] addr;
  output [31:0] inst;

  assign inst = get_inst(addr);
endmodule
    