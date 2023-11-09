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

	int a[15];
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	int n;
	scanf("%d",&n);
	printf("Input %d number of elements in the array :\n",n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("element - %d : ",i+1);
		fflush(stdout);
		scanf("%d",&a[i]);
	}
	printf("The elements of array in reverse order are :\n");
	for(i=n-1;i>=0;i--)
	{
		printf("element - %d : %d\n",i+1,a[i]);
	}


	return EXIT_SUCCESS;
}
