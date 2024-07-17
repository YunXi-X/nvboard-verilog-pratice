#include <nvboard.h>
#include "Valu.h"

void nvboard_bind_all_pins(Valu* top) {
	nvboard_bind_pin( &top->a, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->b, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->i_mod, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->o_overflow, 1, LD15);
	nvboard_bind_pin( &top->o_cout, 1, LD14);
	nvboard_bind_pin( &top->o_res, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->o_seg, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->o_minus, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
}
