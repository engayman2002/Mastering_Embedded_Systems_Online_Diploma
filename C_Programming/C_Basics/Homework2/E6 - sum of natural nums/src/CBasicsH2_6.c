/*
 ============================================================================
 Name        : CBasicsH2_6.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,sum=0;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	for(int i=1;i<x+1;i++)
	{
		sum+=i;
	}
	printf("Sum = %d",sum);
	return EXIT_SUCCESS;
}
