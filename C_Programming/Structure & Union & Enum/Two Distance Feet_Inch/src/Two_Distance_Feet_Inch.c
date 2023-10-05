/*
 ============================================================================
 Name        : Two_Distance_Feet_Inch.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct distance
{
	int feet;
	float inch;
};

float feet(float x)
{
	return 1.0/12*x;
}

int main(void) {

	struct distance d1;
	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d1.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d1.inch);

	struct distance d2;
	printf("Enter information for 2nd distance\n");
	printf("Enter feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&d2.feet);
	printf("Enter inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&d2.inch);

	float x=feet(d1.inch+d2.inch);
	float y=x-(int)x;
	x+=d1.feet+d2.feet;

	printf("Sum of distances = %d '-%f\"",(int)x,y);

	return EXIT_SUCCESS;
}
