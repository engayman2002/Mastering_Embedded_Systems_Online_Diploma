/*
 ============================================================================
 Name        : CBasicsH2_4.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x>0)
	{
		printf("%f is positive.",x);
	}
	else if(x<0)
	{
		printf("%f is negative.",x);
	}
	else
	{
		printf("You entered zero.");
	}
	return EXIT_SUCCESS;
}
