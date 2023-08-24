/*
 ============================================================================
 Name        : Fun4PowerNumber.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Power(int res,int base,int power);

int main(void) {
	int base,power;

	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);

	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	fflush(stdin);fflush(stdout);
	printf("%d^%d = ",base,power);
	fflush(stdin);fflush(stdout);
	printf("%d",Power(1,base,power));

	return EXIT_SUCCESS;
}
int Power(int res,int base,int power)
{
	if(power!=0)
	{
		res*=base;
		power--;
		res=Power(res,base,power);
	}
	return res;
}
