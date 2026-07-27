#include "Buzzer.h"
#include "Systick_timer.h"
#include "stm32l476xx.h"

void Buzzer_Init(){
	// Enable Clock for Port A
	RCC -> AHB2ENR |= RCC_AHB2ENR_GPIOAEN;

	// Set Mode for output 
	GPIOA -> MODER &= ~(3UL << (2*7));      // Clear pins 
	GPIOA -> MODER |=  (1UL << (2*7));      // Set output 

	// Output Type Push-pull (0) or Open (1)
	GPIOA -> OTYPER &= ~(1UL << 7);         // Output type: Push-Pull

	// Reserved (11) Pull-up (01) or Pull-down (10) or None (00)
	GPIOA -> PUPDR &= ~(3UL << (2*7));      // None
}

void play_Sound(){
	SysTick->LOAD = 7633;                   // Load Systick to Buzz a sound
	for(int i =0; i < 500000; i++);         // Delay
	SysTick->LOAD = 0;                      // Turn off sound 

}

void toggle_Buzzer(){
	GPIOA -> ODR ^= (1UL << 7);             // Toggle output of Buzzer 
}
