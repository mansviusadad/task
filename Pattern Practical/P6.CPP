#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int r,c,s;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",c);
		}
		for(s=1;s<=2*(5-r);s++)
		{
			printf("  ");
		}
		for(c=r;c>=1;c--)
		{
			printf("%d ",c);
		}
		printf("\n");
	}

	getch();
}