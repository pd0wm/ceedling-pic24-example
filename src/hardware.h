#ifndef HARDWARE_H
#define HARDWARE_H

#include <stdbool.h>

void hw_ledGreenToggle(void);
void hw_ledRed(bool state);
void hw_init(void);
bool hw_keep_running(void);

#endif