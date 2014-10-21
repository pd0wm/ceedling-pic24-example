#include "unity.h"
#include "main.h"
#include "mock_hardware.h"
#include "mock_delay.h"

void setUp(void){
}

void tearDown(void){
}

void test_main_hardware_should_init(void){
    hw_init_Expect();
    hw_keep_running_ExpectAndReturn(false);
    test_main();
}

void test_main_led_should_blink(void){
    hw_init_Expect();

    hw_keep_running_ExpectAndReturn(true);
    hw_ledGreenToggle_Expect();
    delay_ms_Expect(500);

    hw_keep_running_ExpectAndReturn(false);

    test_main();
}