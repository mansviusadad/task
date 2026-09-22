/*wap to count a digits of number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	long int n;
	int count=0;

	printf("Enter Number:");
	scanf("%ld",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("Total Digits =%d",count);

	getch();
}