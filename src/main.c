#include <stdint.h>
#include <stdbool.h>

#include <xc.h>

#include "main.h"
#include "hardware.h"
#include "delay.h"


#ifdef TEST
int test_main(void)
#else
int main(void)
#endif
{
    hw_init();
    while (hw_keep_running()) {
        hw_ledGreenToggle();
        delay_ms(500);
    }
    return 0;
}