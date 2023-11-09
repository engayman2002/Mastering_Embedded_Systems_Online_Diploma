/*
 ============================================================================
 Name        : show.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SEmp
{
	char *name;
	int id;
};

int main(void)
{
	struct SEmp a,b,c;
	struct SEmp *Pst[3]={&a,&b,&c};
	struct SEmp *p=Pst;
	p->name="Ayman";
	p->id=1;
	p++;
	p->name="Mohamed";
	p->id=2;
	p++;
	p->name="Nabil";
	p->id=3;
	p=Pst;
	int i;
	for(i=0;i<3;i++)
	{
		printf("Employee Name : %s\n",p->name);
		printf("Employee ID : %d\n\n",p->id);
		p++;
	}
	return EXIT_SUCCESS;
}
