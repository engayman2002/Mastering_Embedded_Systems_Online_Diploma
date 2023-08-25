/*
 ============================================================================
 Name        : CBasicsH2_7.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,fact=1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else
	{
		for(int i=1;i<x+1;i++)
		{
			fact*=i;
		}
		printf("Factorial = %d",fact);
	}

	return EXIT_SUCCESS;
}
