/*
 * Autor: Mateusz Kowalczyk
 * Data:  26.04.2024.r
 * Temat: Laboratorium 4
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


int main(void)
{

	DDRB |= (1<<PB3);
	DDRB |= (0 << PB0);
	DDRB |= (0 << PB1);

	TCCR0 = 0b01101010; // preskaler = 1

	PORTB |= (1 << PB0);
	PORTB |= (1 << PB1);

	while(1)
	{
		//OCR0 = 254;

		if(!(PINB & (1<<PB0))){ // btn
			// GASZENIE
			for (uint8_t i = 0; i <= 254; i++) {
				OCR0 = i;
				 _delay_ms(10);
			}

		}
		//OCR0 = 0;
		if (!(PINB & (1<<PB1)))
		{
			for (uint8_t i = 254; i <= 0; i--) {
				OCR0 = i;
				_delay_ms(10);
			}
		}
	}
	return 0;
}

