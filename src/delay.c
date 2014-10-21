#define FOSC    (112392500ULL)
#define FCY     (FOSC/2)
#include <stdint.h>
#include <libpic30.h>

#include "delay.h"

void delay_ms(uint16_t ms){
	__delay_ms(ms);
}