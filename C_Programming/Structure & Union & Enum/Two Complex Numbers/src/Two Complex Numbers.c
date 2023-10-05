/*
 ============================================================================
 Name        : Two.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct complex
{
	float r;
	float i;
};

struct complex SumComplex(struct complex x,struct complex y )
{
	struct complex sum;
	sum.r=x.r+y.r;
	sum.i=x.i+y.i;
	return sum;
}



int main(void) {

	struct complex x,y,sum;

	printf("Enter 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&x.r,&x.i);

	printf("Enter 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&y.r,&y.i);

	sum=SumComplex(x,y);
	printf("Sum=%f+%fi",sum.r,sum.i);

	return EXIT_SUCCESS;
}
