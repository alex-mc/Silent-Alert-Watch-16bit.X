/* 
 * File:   SAWmain.c
 * Author: Alex
 *
 * Created on November 21, 2014, 11:59 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <adc.h>
#include <delay.h>
#include <timer.h>
#include <libq.h>
#include "p24Hxxxx.h"

#include "fft.h"

/*
 * 
 */

void setup(void);

void main(void) {
    while(1) {
        // read ADC
        // run FFT
        // write to RS232
    }
    while(1);
}

void setup(void) {
    // open ADC
    // open SPI
    // open motor pin(s)
}