/**
 * foo.c
 * testproject for libraries
 */

#include <stdio.h>
#include "pico/stdlib.h"

// main routine, ends with endless while loop
int main() {

    stdio_init_all();
    sleep_ms(10 * 1000); // wait for 10 seconds
    
    printf("started foo test\n");

    while (true) {
    }

}