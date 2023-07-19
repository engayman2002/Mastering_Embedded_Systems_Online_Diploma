/*
 ============================================================================
 Name        : E7_After.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	printf("Enter value of x here : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Enter value of y here : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("The value of x = %d\nThe value of y = %d",x,y);
	return EXIT_SUCCESS;
}
