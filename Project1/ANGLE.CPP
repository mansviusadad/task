/*wap to triangle angle finder*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a1,a2,a3;

	printf("Enter First Angle:");
	scanf("%d",&a1);

	printf("Enter Second Angle:");
	scanf("%d",&a2);

	a3 = 180 - (a1+a2);
	printf("Third Angle =%d",a3);

	getch();
}