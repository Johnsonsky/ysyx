package lumos

import chisel3._
import chisel3.util._

import lumos.IFU._
import lumos.IDU._
import lumos.EXU._

class CPU extends Module {
  val io = IO(new Bundle {
    val out = Output(UInt(64.W))
  })

  val pc = RegInit((0x0000000080000000L).U(64.W))

  val IFU = Module(new IFU())
  IFU.io.in.addr := pc
  pc := pc + 4.U

  val IDU = Module(new IDU())
  IDU.io.in.inst := IFU.io.out.inst
  
  val EXU = Module(new EXU())
  EXU.io.in.alu_op := IDU.io.contr.alu_op
  EXU.io.in.rs1 := IDU.io.out.rs1_data
  EXU.io.in.rs2 := IDU.io.out.rs2_data

  IDU.io.in.rd_data := EXU.io.out.dest
  io.out := EXU.io.out.dest
}
