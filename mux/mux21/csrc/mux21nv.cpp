#include <nvboard.h>
#include "Vmux21.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(Vmux21* top);

int main(){
	nvboard_bind_all_pins(&dut);	
	nvboard_init();

	while(1){
		dut.eval();
		nvboard_update();
	
	}

}
