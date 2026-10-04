/*develop a program to find the transpose matrix of a given 2D array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10][10];
	int r,c,i,j;

	printf("\nEnter the array's row & column size:");
	scanf("%d",&r);

	c=r;
	printf("\nEnter array's element");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\na[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nTranspose of array:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	getch();
}