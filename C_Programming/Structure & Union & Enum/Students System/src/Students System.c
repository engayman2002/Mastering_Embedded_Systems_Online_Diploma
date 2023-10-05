/*
 ============================================================================
 Name        : Students.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[50];
	int roll;
	float marks;
};

int main(void) {

	printf("Enter information of students:\n\n");
	struct student x;
	printf("Enter name : ");
	fflush(stdin);fflush(stdout);
	gets(x.name);
	printf("Enter roll number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x.roll);
	fflush(stdin);fflush(stdout);
	printf("Enter marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x.marks);
	printf("\nDisplaying Information\n");
	printf("name: %s\n",x.name);
	printf("name: %d\n",x.roll);
	printf("name: %f",x.marks);


	return EXIT_SUCCESS;
}
