/*
 ============================================================================
 Name        : Fun1PrimeNumbers.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Fun(int x);

int main(void) {
	int x,y;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	fflush(stdin);fflush(stdout);
	printf("Prime numbers between %d and %d are : ",x,y);
	int i;
	for(i=x+1;i<y;i++)
	{
		if(Fun(i)==1)
		{
			printf("%d ",i);
		}
	}

	return EXIT_SUCCESS;
}

int Fun(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}

