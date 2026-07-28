Automatic nightlight built using the STMicroelectronics STM32L476RG microcontroller
Other components include 
  - LED
  - Photo Resistor
  - Potentiometer
  - 1k Ohm Resistor
  - Jumper Wires
  - Buzzer

All files were originally stored and ran in the PRGRM STM Cube IDE using the built in debugger
This program uses ADC to convert light into voltage from the photo resistor, 
Then switching on the LED and sounding the buzzer using SysTick after a certain threshold is passed 
