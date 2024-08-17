#include <nvboard.h>
#include "Vmux41.h"

void nvboard_bind_all_pins(Vmux41* top) {
	nvboard_bind_pin( &top->Y, 2, SW15, SW14);
	nvboard_bind_pin( &top->X_0, 1, SW0);
	nvboard_bind_pin( &top->X_1, 1, SW1);
	nvboard_bind_pin( &top->X_2, 1, SW2);
	nvboard_bind_pin( &top->X_3, 1, SW3);
	nvboard_bind_pin( &top->out, 1, LD0);
}
