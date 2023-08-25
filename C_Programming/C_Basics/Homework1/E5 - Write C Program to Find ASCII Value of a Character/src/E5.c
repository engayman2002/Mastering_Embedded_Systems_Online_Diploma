/*
 ============================================================================
 Name        : E5.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&c);
	printf("ASCII value of %c = %d",c,c);

	return EXIT_SUCCESS;
}
