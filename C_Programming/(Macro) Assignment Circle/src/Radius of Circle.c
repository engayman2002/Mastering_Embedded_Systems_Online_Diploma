/*
 ============================================================================
 Name        : Radius.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define Area(radius) 3.14*radius*radius

int main(void) {
	float radius;
	printf("Enter the radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	printf("%f",Area(radius));

	return EXIT_SUCCESS;
}
