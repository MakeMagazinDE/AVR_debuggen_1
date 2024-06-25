/*
* Florian Schäffer
* https://www.blafusel.de
*
* Make 3/2024
* ATtiny Debugger Demo 2
*/

#define F_CPU 3333333UL		// 3,3 MHz (OSCCFG = 20 Mhz, MCLKCTRLB = 0x8 => Prescaler 6)

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	PORTA.DIR = (1 << 1) & (1 << 2);			// Pin PA1 und PA2 im Richtungsregister auf 1 = Output

	PORTA.OUT = (1 << 1);		// PA1 LED HIGH (ein)
	PORTA.OUT = (1 << 2);		// PA2 LED HIGH (ein)
	
	while(1);
	return(0);
}