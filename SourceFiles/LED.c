#include "LED.h"
#include "stm32l476xx.h"

// Configurations for LED
void LED_Init(){
	// Enable Clock Port for LED
	RCC -> AHB2ENR |= RCC_AHB2ENR_GPIOAEN;

	// MODE Register: Input (00) or Output (01) or Alternate (10) or Analog (11)
	GPIOA -> MODER &= ~(3UL << (2*6));		// Clear Register
	GPIOA -> MODER |=  (1UL << (2*6));		// Set as Output

	// Output Type  push-pull (0), open drain (1)
	GPIOA -> OTYPER &= ~(1UL << 6);         // Push-PUll 

	// 'No Pull-up or Pull-down': No pull-up, pull-down (00), Pull-up (01), Pull-down (10), Reserved (11)
	GPIOA -> PUPDR &= ~(3UL << (2*6));      // None
}

// Function to Toggle LED state
void toggle_LED(){
	GPIOA -> ODR ^= (1UL << 6);             // Toggle output Pin
}

// Function to Turn off LED
void turn_off_LED(){
	GPIOA -> ODR &= ~(1UL << 6);            // Turn off 
}

// Function to turn on LED
void turn_on_LED(){
	GPIOA -> ODR |= (1UL << 6);             // Turn on 
}
