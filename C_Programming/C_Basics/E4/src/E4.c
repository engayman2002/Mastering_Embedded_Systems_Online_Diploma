/*
 ============================================================================
 Name        : E4.c
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
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product : %f",x*y);

	return EXIT_SUCCESS;
}
