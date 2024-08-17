#include <nvboard.h>
#include "Vmux21.h"

void nvboard_bind_all_pins(Vmux21* top) {
	nvboard_bind_pin( &top->s, 1, SW0);
	nvboard_bind_pin( &top->a, 1, SW1);
	nvboard_bind_pin( &top->b, 1, SW2);
	nvboard_bind_pin( &top->out, 1, LD0);
}
