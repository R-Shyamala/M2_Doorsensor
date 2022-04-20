/**
 * @file Doorsensor.h
 * @author Shyamala.R (shyamala.18ece@sonatech.ac.in)
 * @brief Finding door is open or close
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <avr/io.h>
int main(void)

{
  DDRB=DDRB&0b11111101;//fd
  DDRC=DDRC|0b01000000;//40
  while(1)
  {
if(PINB & 0b00000010)//02
  PORTC=PORTC|0b01000000;//40
    else
    PORTC=PORTC&0b10111111;//bf
  }
  return 0;
  }