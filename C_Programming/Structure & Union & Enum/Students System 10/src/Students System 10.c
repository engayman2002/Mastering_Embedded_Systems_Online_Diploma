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

	struct student s[10];
	printf("Enter information of students:\n\n");
	for(int i=0;i<10;i++)
	{
		printf("For roll number %d\n",i+1);
		s[i].roll=i+1;
		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		gets(s[i].name);
		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&s[i].marks);
		printf("\n");
	}

	printf("\nDisplaying information of students:\n");
	for(int i=0;i<10;i++)
	{
		printf("\nInformation for roll number %d:\n",s[i].roll);
		printf("Name: %s\n",s[i].name);
		printf("Marks: %f\n",s[i].marks);
	}

	return EXIT_SUCCESS;
}
