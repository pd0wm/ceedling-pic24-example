#include <xc.h>
#include <stdbool.h>

#include "unity.h"
#include "io.h"


void setUp(void){
	TRISA = 0xFFFF;
	TRISB = 0xFFFF;
	TRISC = 0xFFFF;
}

void tearDown(void){
}

void test_io_set_direction_output(void){
    // io_set_direction(2, OUTPUT);
    _TRISC5 = 1;
    _TRISC6 = 0;
    TEST_ASSERT_EQUAL_HEX16(0xFFFF, TRISC);
}