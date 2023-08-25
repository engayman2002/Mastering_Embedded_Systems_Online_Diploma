/*
 ============================================================================
 Name        : Fun2_Factorial_Number.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Fact(int f,int x);

int main(void) {
	int x;
	printf("Enter an positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);fflush(stdout);
	printf("Factorial of %d = %d",x,Fact(1,x));
	return EXIT_SUCCESS;
}

int Fact(int f,int x)
{
	f*=x;
	x--;
	if(x>0)
		f=Fact(f,x);
	return f!=0?f:1;
}
