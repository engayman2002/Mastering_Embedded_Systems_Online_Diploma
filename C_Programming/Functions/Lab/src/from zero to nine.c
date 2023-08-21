/*
 ============================================================================
 Name        : from.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print(int x);

int main(void) {
	int i;
	for(i=0;i<10;i++)
	{
		print(i);
		printf("\n");
	}

	return EXIT_SUCCESS;
}
void print(int x)
{
	for(;x<10;x++)
	{
		printf("%d\t",x);
	}
}
