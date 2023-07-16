/*
 ============================================================================
 Name        : E6.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a,b,temp;
	printf("Enter value of a : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp=b;
	b=a;
	a=temp;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);


	return EXIT_SUCCESS;
}
