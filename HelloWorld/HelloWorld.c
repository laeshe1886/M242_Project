#include <avr/io.h>
#include <Atmega328P.h>
#include <AvrLib.h>
#include <RegisterAccess.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <inttypes.h>
#include <avr/interrupt.h>

int main(void)
{
	Usart_Init(250000);

	while (True)
	{
		TRACE("hello world i");
			_delay_ms(1000);
	}
	return 0;
}