/* write a c program to find square of each element of an 1D array using pointer */
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int a[5],i;
	int *ptr;

	printf("\nEnter 5 elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr = a;
	printf("\nSquare of elements:");
	for(i=0;i<5;i++)
	{
		printf("\n%d",(*ptr) * (*ptr));
		ptr++;
	}

	getch();
}