/*
 * main.c
 *
 *  Created on: 1 mar 2024
 *      Author: Mateusz Kowalczyk
 */

// definicje dla preprocesora:
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	//inicjalizacja
	DDRA = 0b11111111; // Port A - output.
	PORTA = 0b00000000; // Port A - domyœlnie stan niski.

	DDRB = 0b00001111;
	PORTB = 0b00001111; // Port B - domyœlnie stan wysoki (nic nie swieci)

	//pêtla g³ówna programu 2|6|8|5|3|3
	while(1)
	{
			for(int i =0; i<500; i++){
				// 0|0|0|2
			PORTB = 0b00001110; // wyswietlacz 1
			PORTA = 0b10100100; // numer 2
			_delay_ms(1);
		}

			// 0|0|2|6
			for(int i =0; i<500; i++){
			PORTB = 0b00001101; // wyswietlacz 2
			PORTA = 0b10100100; // numer 2
			_delay_ms(1);
			PORTB = 0b00001110; // wyswietlacz 1
			PORTA = 0b10000010; // numer 6
			_delay_ms(1);
		}

			// 0|2|6|8
			for(int i =0; i<500; i++){
			PORTB = 0b00001011; // wyswietlacz 3
			PORTA = 0b10100100; // numer 2
			_delay_ms(1);
			PORTB = 0b00001101; // wyswietlacz 2
			PORTA = 0b10000010; // numer 6
			_delay_ms(1);
			PORTB = 0b00001110; // wyswietlacz 1
			PORTA = 0b10000000; // numer 8
			_delay_ms(1);
		}
			// 2|6|8|5
			for(int i =0; i<500; i++){
			PORTB = 0b00000111; // wyswietlacz 4
			PORTA = 0b10100100; // numer 2
			_delay_ms(1);
			PORTB = 0b00001011; // wyswietlacz 3
			PORTA = 0b10000010; // numer 6
			_delay_ms(1);
			PORTB = 0b00001101; // wyswietlacz 2
			PORTA = 0b10000000; // numer 8
			_delay_ms(1);
			PORTB = 0b00001110; // wyswietlacz 1
			PORTA = 0b10010010; // numer 5
			_delay_ms(1);
		}
			// 6|8|5|3
			for(int i =0; i<500; i++){
			PORTB = 0b00000111; // wyswietlacz 4
			PORTA = 0b10000010; // numer 6
			_delay_ms(1);
			PORTB = 0b00001011; // wyswietlacz 3
			PORTA = 0b10000000; // numer 8
			_delay_ms(1);
			PORTB = 0b00001101; // wyswietlacz 2
			PORTA = 0b10010010; // numer 5
			_delay_ms(1);
			PORTB = 0b00001110; // wyswietlacz 1
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
		}
			// 8|5|3|3
			for(int i =0; i<500; i++){
			PORTB = 0b00000111; // wyswietlacz 4
			PORTA = 0b10000000; // numer 8
			_delay_ms(1);
			PORTB = 0b00001011; // wyswietlacz 3
			PORTA = 0b10010010; // numer 5
			_delay_ms(1);
			PORTB = 0b00001101; // wyswietlacz 2
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
			PORTB = 0b00001110; // wyswietlacz 1
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
		}
			// 5|3|3|0
			for(int i =0; i<500; i++){
			PORTB = 0b00000111; // wyswietlacz 4
			PORTA = 0b10010010; // numer 5
			_delay_ms(1);
			PORTB = 0b00001011; // wyswietlacz 3
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
			PORTB = 0b00001101; // wyswietlacz 2
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 1 zgasniecie
			_delay_ms(1);
		}
			// 3|3|0|0
			for(int i =0; i<500; i++){
			PORTB = 0b00000111; // wyswietlacz 4
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
			PORTB = 0b00001011; // wyswietlacz 3
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 2 OFF
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 1 OFF
			_delay_ms(1);
		}
			// 3|0|0|0
			for(int i =0; i<500; i++){
			PORTB = 0b00000111; // wyswietlacz 4
			PORTA = 0b10110000; // numer 3
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 3 OFF
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 2 OFF
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 1 OFF
			_delay_ms(1);
		}
			// 0|0|0|0
			for(int i =0; i<500; i++){
			PORTB = 0b00000111; // wyswietlacz 4 OFF
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 3 OFF
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 2 OFF
			_delay_ms(1);
			PORTB = 0b00001111; // wyswietlacz 1 OFF
			_delay_ms(1);
		}




}
}
