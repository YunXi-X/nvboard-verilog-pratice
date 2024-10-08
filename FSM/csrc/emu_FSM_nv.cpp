#include <nvboard.h>
#include "VFSM_top.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(VFSM_top* top);

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    while(1) {
        dut.eval();
        nvboard_update();
    }
}
