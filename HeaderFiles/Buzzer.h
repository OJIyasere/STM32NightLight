/*
Header file including all functions for buzzer
*/
#ifndef BUZZER_H_
#define BUZZER_H_

#include "stm32l476xx.h"

// Initialize Buzzer as output pin 
void Buzzer_Init();

// Toggle function for SysTick to use 
void toggle_Buzzer();

// Play a sound through buzzer
void play_Sound();

#endif /* BUZZER_H_ */