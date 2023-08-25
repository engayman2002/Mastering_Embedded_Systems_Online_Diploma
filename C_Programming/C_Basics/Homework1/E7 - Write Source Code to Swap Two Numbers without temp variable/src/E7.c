/*
 ============================================================================
 Name        : E7.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);

	printf("After swapping, value of a = %f\n",b);
	printf("After swapping, value of b = %f",a);
	return EXIT_SUCCESS;
}
