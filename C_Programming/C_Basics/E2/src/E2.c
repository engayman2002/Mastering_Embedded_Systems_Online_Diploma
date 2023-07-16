/*
 ============================================================================
 Name        : E2.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("You entered %d",x);
	return EXIT_SUCCESS;
}
