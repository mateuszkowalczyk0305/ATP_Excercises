/*
 * Autor: Mateusz Kowalczyk
 * Data: 24.05.2024.r
 * Laboratorium 5 - UART
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

void USART_Init( unsigned int baud )
{
/* Set baud rate */
UBRRH = (unsigned char)(baud>>8);
UBRRL = (unsigned char)baud;
/* Enable receiver and transmitter */
UCSRB = (1< /* Set frame format: 8data, 2stop bit */
UCSRC = (1< }

void USART_Transmit( unsigned char data )
{
/* Wait for empty transmit buffer */
while ( !( UCSRA & (1< /* Put data into buffer, sends the data */
UDR = data;
}

void USART_Send( const char* str )
{
while(*str)
{
USART_Transmit(*str++);
}
}

int main(void)
{
USART_Init(71);

USART_Send("Mateusz Kowalczyk ");

while(1)
{

}
return 0;
}