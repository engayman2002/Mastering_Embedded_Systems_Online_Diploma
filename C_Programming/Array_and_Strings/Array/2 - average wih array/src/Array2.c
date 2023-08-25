/*
 ============================================================================
 Name        : Array2.c
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
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	float a[x];
	int i;
	float sum=0;
	for(i=0;i<x;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("Average = %f",sum/x);
	return EXIT_SUCCESS;
}
