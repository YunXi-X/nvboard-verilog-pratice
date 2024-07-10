#include <nvboard.h>
#include "Vaddr_4.h"

void nvboard_bind_all_pins(Vaddr_4* top) {
	nvboard_bind_pin( &top->a, 4, SW4, SW3, SW2, SW1);
	nvboard_bind_pin( &top->b, 4, SW8, SW7, SW6, SW5);
	nvboard_bind_pin( &top->cin, 1, SW0);
	nvboard_bind_pin( &top->sum, 4, LD4, LD3, LD2, LD1);
	nvboard_bind_pin( &top->cout, 1, LD0);
}
