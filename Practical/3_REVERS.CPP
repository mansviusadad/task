/* write a c program that defines a function to reverse a 3 digit number. */

#include<stdio.h>
#include<conio.h>

int avg(int n)
{
	int a,b,c;

	a=n/100;
	b=(n/10)%10;
	c=n%10;

	return(a+b+c)/3;
}


void main()
{
	clrscr();

	int n,ans;
	printf("Enter 3 digit number:");
	scanf("%d",&n);

	ans=avg(n);
	printf("Average = %d",ans);
	getch();
}