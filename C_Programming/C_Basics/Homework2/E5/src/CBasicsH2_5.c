/*
 ============================================================================
 Name        : CBasicsH2_5.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&x);
	(x>64 && x<91) || (x>96 && x<123)?printf("%c is an alphabet",x):printf("%c is not an alphabet",x);
	return EXIT_SUCCESS;
}
