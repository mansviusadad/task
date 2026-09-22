/*develop a program that finds all the negative elements from a given 1D array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5],i;

	printf("\nEnter 5 array elemets:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Negetive elemets are:");
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}

	getch();
}