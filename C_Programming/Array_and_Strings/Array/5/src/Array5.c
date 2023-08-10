/*
 ============================================================================
 Name        : Array5.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fflush(stdout);
	printf("Enter the elements to be searched : ");
	fflush(stdin);fflush(stdout);
	int x;
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("Number found at the location = %d",i+1);
			return EXIT_SUCCESS;
		}
	}

	printf("Number doesn't exist");

	return EXIT_SUCCESS;
}
