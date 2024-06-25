/*
* Florian Schäffer
* https://www.blafusel.de
*
* Make 3/2024
* ATtiny Debugger Demo 1
*/

#define F_CPU 3333333UL		// 3,3 MHz (OSCCFG = 20 Mhz, MCLKCTRLB = 0x8 => Prescaler 6)

#include <avr/io.h>
#include <util/delay.h>

int8_t value;

int main(void)
{
	value++;
	PORTA.DIRSET = (1 << 2);			// Pin 2 im Richtungsregister auf 1 = Output
	
	for (int8_t cnt = 120; cnt < 200; cnt++)	
	{
		PORTA.OUTSET |= (1 << 2);		// PA2 LED HIGH (ein)
		_delay_ms(50);
		PORTA.OUTCLR |= (1 << 2);		// PA2 LED LOW
		_delay_ms(50);
	}
	while (1);
}