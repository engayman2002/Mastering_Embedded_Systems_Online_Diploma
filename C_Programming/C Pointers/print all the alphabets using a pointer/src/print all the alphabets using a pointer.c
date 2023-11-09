/*
 ============================================================================
 Name        : print.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("The Alphabets are : \n");
	char *p = "A";
	for(int i=0;i<26;i++)
	{
		printf("%c\t",*p+i);
	}

	return EXIT_SUCCESS;
}
