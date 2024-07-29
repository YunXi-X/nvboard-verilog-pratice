#include <nvboard.h>
#include "VPS_top.h"

void nvboard_bind_all_pins(VPS_top* top) {
	nvboard_bind_pin( &top->clk, 1, BTNC);
	nvboard_bind_pin( &top->in, 1, SW15);
	nvboard_bind_pin( &top->statue, 4, SW11, SW10, SW9, SW8);
	nvboard_bind_pin( &top->reset, 1, SW14);
	nvboard_bind_pin( &top->out, 4, LD3, LD2, LD1, LD0);
}
