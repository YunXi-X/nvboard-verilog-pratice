#include <nvboard.h>
#include "VFSM_top.h"

void nvboard_bind_all_pins(VFSM_top* top) {
	nvboard_bind_pin( &top->clk, 1, BTNC);
	nvboard_bind_pin( &top->in, 1, SW15);
	nvboard_bind_pin( &top->reset, 1, SW14);
	nvboard_bind_pin( &top->out, 4, LD3, LD2, LD1, LD0);
}
