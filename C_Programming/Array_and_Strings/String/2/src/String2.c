/*
 ============================================================================
 Name        : String2.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char a[1000];
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(a);
	int i=0;
	for(i=0;a[i]!=0;i++);
	printf("Length of string: %d",i);

	return EXIT_SUCCESS;
}
