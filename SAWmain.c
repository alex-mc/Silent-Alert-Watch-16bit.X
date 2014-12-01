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

_FOSCSEL(FNOSC_FRC); // Select fast RC clock

void setup(void);

int main(void) {
    while(1) {
        // read ADC
        // run FFT
        // write to RS232
    }
    while(1);
}

void setup(void) {
    unsigned int config1;
    unsigned int config2;
    unsigned int config3;
    unsigned int config4;
    unsigned int configport_h;
    unsigned int configport_l;

    config1 = ADC_MODULE_ON & ADC_IDLE_STOP & ADC_ADDMABM_ORDER & ADC_AD12B_10BIT & ADC_FORMAT_INTG;
    config2 = ADC_VREF_AVDD_AVSS & ADC_SCAN_ON & ADC_DMA_ADD_INC_1 & ADC_ALT_BUF_OFF & ADC_ALT_INPUT_OFF;
    config3 = ADC_SAMPLE_TIME_0 & ADC_CONV_CLK_INTERNAL_RC & ADC_CONV_CLK_256Tcy;
    config4 = ADC_DMA_BUF_LOC_32;
    configport_h = ENABLE_ALL_ANA_16_31;
    configport_l = ENABLE_ALL_ANA_0_15;

    OpenADC1(config1, config2, config3, config4, configport_h, configport_l, configport_h, configport_l);
    // open SPI
    // open motor pin(s)
}