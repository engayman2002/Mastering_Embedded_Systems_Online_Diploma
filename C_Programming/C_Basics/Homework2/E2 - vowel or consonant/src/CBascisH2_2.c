/*
 ============================================================================
 Name        : CBascisH2_2.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&x);
	printf("%c is ",x);
	if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}

	return EXIT_SUCCESS;
}
