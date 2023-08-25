/*
 ============================================================================
 Name        : String1.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	char a[1000];
	gets(a);
	printf("Enter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	char c;
	scanf("%c",&c);
	int i;
	int n=0;
	for(i=0;a[i]!=0;i++)
	{
		if(c==a[i])
		{
			n++;
		}
	}
	printf("Frequency of %c = %d",c,n);

	return EXIT_SUCCESS;
}
