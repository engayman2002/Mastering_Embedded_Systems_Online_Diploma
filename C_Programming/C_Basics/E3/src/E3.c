/*
 ============================================================================
 Name        : E3.c
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
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum = %d",x+y);
	return EXIT_SUCCESS;
}
