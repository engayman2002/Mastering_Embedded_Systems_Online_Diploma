/*
 ============================================================================
 Name        : CBasicsH2_1.c
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
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("%d is ",x);
	x&0b1?printf("odd"):printf("even");

	return EXIT_SUCCESS;
}
