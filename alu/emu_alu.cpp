#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vsub.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vsub* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vsub;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main() {
  sim_init();
		top->a = 0b0101; top->b = 0b1001; step_and_dump_wave();
		top->a = 0b0100; top->b = 0b0010; step_and_dump_wave();
		top->a = 0b0111; top->b = 0b0100; step_and_dump_wave();
		top->a = 0b0110; top->b = 0b1001; step_and_dump_wave();
		top->a = 0b0111; top->b = 0b1011; step_and_dump_wave();
		top->a = 0b1001; top->b = 0b0001; step_and_dump_wave();
		top->a = 0b1011; top->b = 0b0011; step_and_dump_wave();


  sim_exit();
}
