#include "stm32l476xx.h"
#include "ADC.h"
#include "LED.h"
#include "Buzzer.h"
#include "Systick_timer.h"

int main(void){

	// Initialize ADC: Set up ADC1 for sampling from external input channel PA1 (ADC1_IN6).
	// Configure for 12-bit resolution, right data alignment, single-ended, continuous mode,
	// and interrupt at the end of every conversion.
	ADC_Init();
	// Initialize configurations for the LED pins
	LED_Init();
	// Initialize configurations for Buzzer pins
	Buzzer_Init();
	// Initialize Systick
	SysTick_Init(0);


	// After initialization, begin ADC conversion with a software trigger by setting ADSTART bit in ADC1_CR.
	ADC1->CR |= ADC_CR_ADSTART;
	while(1){}
}