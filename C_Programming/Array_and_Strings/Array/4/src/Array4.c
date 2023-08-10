/*
 ============================================================================
 Name        : Array4.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Enter no of elements : ");
	fflush(stdin);fflush(stdout);
	int x;
	scanf("%d",&x);
	int a[x+1];
	int i=0;
	fflush(stdin);
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	fflush(stdin);fflush(stdout);
	printf("Enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a[x]);
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	int j;
	scanf("%d",&j);
	if(j>x){
		goto print;
	}
		for(i=x; i>0 && j!=x+1 ;i--)
			{
				a[i-1]=a[i-1]+a[i];
				a[i]=a[i-1]-a[i];
				a[i-1]=a[i-1]-a[i];
				if(j==i)
				{
					break;
				}
			}

print:
	for(i=0;i<x+1;i++)
	{
			printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
