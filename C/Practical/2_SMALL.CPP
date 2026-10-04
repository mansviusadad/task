/* craete a program to find the smallest element in an 1D array.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int a[5],i,small;
	printf("\nEnter 5 element:");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	small =a[0];
	for(i=1; i<5; i++)
	{
		if(a[i]<small)
		{
			small = a[i];
		}
	}
	printf("Smallest element = %d",small);
	getch();
}
