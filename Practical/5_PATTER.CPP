/* print a below pattern using nested for loop in c langauge */
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n;

	for(i=10; i>=6; i--)
	{
		n=i*i;
		for(j=10; j>=i; j--)
		{
			printf("%d ",n);
		}
		printf("\n");
	}

	getch();
}