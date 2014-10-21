#include <stdint.h>
#include <stdbool.h>

#include <xc.h>

#include "hardware.h"

void hw_ledGreenToggle(void){
    _LATA7 ^= 1;
}

void hw_ledRed(bool state){
    _LATA10 = state;
}

void hw_init(void){
    TRISA = 0xFFFF;
    TRISB = 0xFFFF;
    TRISC = 0xFFFF; // make all IO inputs

    // make all analog ports Digital ports
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0;

    // Fosc of 120mhz (119.7625Mhz) => Fp & Fcy = 60Mhz
    //_PLLDIV = 65 - 2;
    //_PLLPOST = 0;

    // Fosc of 112.4mhz (112.3925Mhz) => Fp & Fcy = 56.19Mhz
    // (this is better for uart frequency)
    _PLLDIV = 61 - 2;
    _PLLPOST = 0;

    // Ensures that PLL is in lock or PLL start-up timer is satisfied
    while (_LOCK == 0) {
        Nop();
    }
    __builtin_write_OSCCONL(OSCCON & 0xBF);

    uint16_t delay;
    for (delay = 0xff; delay != 0; delay--);

    _TRISA10 = 0; // led out b
    _TRISA7 = 0; // led out a

    // terminal output
    _RP54R = 1; // 1 = uart1 tx pic24E
    _U1RXR = 47; // rx uart1

    _RP37R = 3; // 3 = uart2 tx (pic24E) debug

    //de-lock registers
    __builtin_write_OSCCONL(OSCCON | 0x40);
}

bool hw_keep_running(void){
    return true;
}