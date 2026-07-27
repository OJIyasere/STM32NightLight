/*
Header file for LED configuration as output 
*/

#ifndef LED_H_
#define LED_H_

#include "stm32l476xx.h"

// Initialize LED pin
void LED_Init();

// Toggle LED on or off 
void toggle_LED();

// Turn off LED
void turn_off_LED();

// Turn on LED
void turn_on_LED();

#endif /* LED_H_ */