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

	char *p;
	printf("Input a string : ");
	fflush(stdout);
	gets(p);
	char *s=p;
	while(*p!=0)
	{
		p++;
	}
	p--;
	printf("Reverse of the string is : ");
	while(s!=p)
	{
		printf("%c",*p);
		p--;
	}
	printf("%c",*s);


	return EXIT_SUCCESS;
}
