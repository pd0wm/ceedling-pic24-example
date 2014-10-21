#ifndef IO_H
#define IO_H

typedef enum {OUTPUT, INPUT} direction_t;

void io_set_direction(uint16_t pin, direction_t direction);

#endif