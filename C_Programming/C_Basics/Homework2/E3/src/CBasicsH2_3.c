/*
 ============================================================================
 Name        : CBasicsH2_3.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	printf("Largest number = %f",x>y?(x>z?x:z):(y>z?y:z));
	return EXIT_SUCCESS;
}
