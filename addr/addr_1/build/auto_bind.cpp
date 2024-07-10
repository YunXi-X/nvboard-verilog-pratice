#include <nvboard.h>
#include "Vaddr.h"

void nvboard_bind_all_pins(Vaddr* top) {
	nvboard_bind_pin( &top->cin, 1, SW0);
	nvboard_bind_pin( &top->a, 1, SW1);
	nvboard_bind_pin( &top->b, 1, SW2);
	nvboard_bind_pin( &top->sum, 1, LD0);
	nvboard_bind_pin( &top->cout, 1, LD1);
}
