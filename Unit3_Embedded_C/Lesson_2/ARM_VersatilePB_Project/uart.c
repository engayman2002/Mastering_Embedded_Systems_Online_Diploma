#include "uart.h"

#define UART0 0x101f1000
#define UART0DR *(volatile unsigned int*)((unsigned int*)(UART0+0x0))


void Send_String_to_UART0DR(char *p_char)
{
	while(*p_char!='\0')
	{
		UART0DR=(unsigned int)(*p_char);
		p_char++;
	}
}