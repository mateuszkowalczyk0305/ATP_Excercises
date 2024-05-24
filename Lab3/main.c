/*
 * Autor: Mateusz Kowalczyk
 * Data: 26.04.2024.r
 * Laboratorium 4 - miganie dioda w trybie licznika CTC z f=3Hz
 * fcpu = 11059200
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

//#define F_CPU 11059200 // fcpu

int main(void)
{
	DDRA = (1<<PA0); // PINA0 jako wyjscie

	OCR1A = 1799;
	//TCCR1A = 0b00000000;

	TCCR1B = 0b00001101; // CTC i preskaler 1024

	TIMSK = 0b00010000; // dla porównania

	sei(); // włącz przerwania globalne

	while(1)
	{

	}

	return 0;
}

ISR(TIMER1_COMPA_vect){
	//zmiana stanu na pinie PA0
	PORTA ^= (1<<PA0);
}