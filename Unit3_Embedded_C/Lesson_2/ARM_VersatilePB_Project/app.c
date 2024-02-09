#include "uart.h"

char aymanword[]="Learn-In-Depth: < Ayman Mohamed Elashry >";
char const Thanks[]="\nThanks";

int main()
{
	Send_String_to_UART0DR(aymanword);
	Send_String_to_UART0DR(Thanks);
	return 0;
}