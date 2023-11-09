/*
 ============================================================================
 Name        : demonstrate.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m=29;
	printf("Address of m : 0x%x\n",&m);
	printf("Value of m : %d\n",m);
	printf("\n");
	int *ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%x\n",ab);
	printf("Content of pointer ab : %d\n",*ab);
	printf("\n");
	m=34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%x\n",ab);
	printf("Content of pointer ab : %d\n",*ab);
	printf("\n");
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : 0x%x\n",&m);
	printf("Value of m : %d\n",m);

	return EXIT_SUCCESS;
}
