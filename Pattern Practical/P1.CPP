
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int r=41; r<=45; r++)
	{
		for(int c=41; c<=r; c++)

		{
			printf("%d ",c);
		}

	 printf("\n");
	 }
	getch();
}