/*
 ============================================================================
 Name        : String3.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("Enter the string : ");
	char a[1000];
	fflush(stdin);fflush(stdout);
	gets(a);
	int n=0;
	for(n=0;a[n]!=0;n++);


	char b[n];
	int m=n-1;

	int i=0;
	for(i=0;i<n;i++,m--)
	{
		b[i]=a[m];
	}
	b[i]=0;
	printf("Reverse string is : %s",b);

	return EXIT_SUCCESS;
}
