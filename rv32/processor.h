#ifndef PROCESSOR_H
#define PROCESSOR_H

/* ****************************************************************
   RISC-V Instruction Set Simulator
   Computer Architecture, Semester 1, 2019

   Class for processor

**************************************************************** */

#include "memory.h"

using namespace std;

class processor {

 private:

  // TODO: Add private members here

 public:

  // Consructor
  processor(memory* main_memory, bool verbose, bool stage2);

  // Display PC value
  void show_pc();

  // Set PC to new value
  void set_pc(uint32_t new_pc);

  // Display register value
  void show_reg(unsigned int reg_num);

  // Set register to new value
  void set_reg(unsigned int reg_num, uint32_t new_value);

  // Execute a number of instructions
  void execute(unsigned int num, bool breakpoint_check);

  // Clear breakpoint
  void clear_breakpoint();

  // Set breakpoint at an address
  void set_breakpoint(uint32_t address);

  // Show privilege level - stub in stage 1
  void show_prv();

  // Set privilege level - stub in stage 1
  void set_prv(unsigned int prv_num);

  // Display CSR value - stub in stage 1
  void show_csr(unsigned int csr_num);

  // Set CSR to new value - stub in stage 1
  void set_csr(unsigned int csr_num, uint32_t new_value);

  uint32_t get_instruction_count();

  // Used for Postgraduate assignment. Undergraduate assignment can return 0.
  uint32_t get_cycle_count();

};

#endif
