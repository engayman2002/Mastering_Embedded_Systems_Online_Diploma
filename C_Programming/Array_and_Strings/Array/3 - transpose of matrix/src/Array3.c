/*
 ============================================================================
 Name        : Array3.c
 Author      : Ayman
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {
	int r,c;
	printf("Enter rows and column of matrix: ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&r,&c);
	int m[r][c];
	printf("Enter elements of matrix: \n");
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&m[i][j]);
		}
	}

	printf("Entered Matrix:\n");
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",m[i][j]);
			}
			printf("\n");
		}

	printf("Transpose of Matrix:\n");
		for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{
					printf("%d\t",m[j][i]);
				}
				printf("\n");
			}

		return 0;
}
