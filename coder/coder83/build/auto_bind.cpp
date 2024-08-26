#include <nvboard.h>
#include "Vcoder.h"

void nvboard_bind_all_pins(Vcoder* top) {
	nvboard_bind_pin( &top->x, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW15);
	nvboard_bind_pin( &top->out, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->seg, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
}
