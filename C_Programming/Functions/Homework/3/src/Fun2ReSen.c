/*
 ============================================================================
 Name        : Fun2ReSen.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int co(int count,char *c);
void Re(char *p,char *e);

int main(void) {
	char *p;
	printf("Enter a sentense: ");
	fflush(stdin);fflush(stdout);
	gets(p);
	int c=co(0,p);
	if(c!=0)
	{
		Re(p-1,p+c-1);
	}
	else
	{
		printf("Nothing");
	}
	return EXIT_SUCCESS;
}
int co(int count,char *c)
{
	if(*c!='\0')
	{
		count++;c++;
		count=co(count,c);
	}
	return count;
}

void Re(char *p,char *e)
{
	printf("%c",*e);
	e--;
	if(e!=p)
	{
		Re(p,e);
	}
}
