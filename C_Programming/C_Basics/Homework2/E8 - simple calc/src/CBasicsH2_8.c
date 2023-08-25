/*
 ============================================================================
 Name        : CBasicsH2_8.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	char c;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&c);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(c)
	{
	case '+':
		printf("%f + %f = %f",x,y,x+y);
		break;
	case '-':
		printf("%f - %f = %f",x,y,x-y);
		break;

	case '*':
		printf("%f * %f = %f",x,y,x*y);
		break;
	case '/':
		printf("%f / %f = %f",x,y,x/y);
		break;
	default:
		printf("You entered wrong operator");
	}
	return EXIT_SUCCESS;
}
