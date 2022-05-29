#include <avr/io.h>
#include <stdio.h>

#include "sw_uart_tx.h"

/*
Example for basic software UART (TX only)

(c) 2022 by kittennbfive

AGPLv3+ and NO WARRANTY!

version 29.05.22
*/

int main(void)
{	
	sw_uart_tx_init();
		
	FILE uart_output = FDEV_SETUP_STREAM(sw_uart_putchar, NULL, _FDEV_SETUP_WRITE);
	stdout = &uart_output;
	
	printf("Test\r\n");
	
	while(1);
	
	return 0;
}
