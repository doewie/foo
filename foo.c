/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"

// main routine, ends with endless while loop
int main() {

    stdio_init_all();
    sleep_ms(10 * 1000); // wait for 10 seconds
    
    printf("started LED-blinker test + I2C-scanner\n\n");

    while (true) {
    }

}