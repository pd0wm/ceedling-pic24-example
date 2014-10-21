#include <stdbool.h>
#include <stdint.h>
#include <xc.h>

#include "io.h"

void io_set_direction(uint16_t pin, direction_t direction){
	if (direction == OUTPUT){
		TRISC &= ~(1 << 6);
	}
}