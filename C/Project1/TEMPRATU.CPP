/*wap to converts temprature from degrees*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float c,f;

	printf("Enter tempreture in celsius:");
	scanf("%f",&c);

	f=(9.0/5.0*c)+32;

	printf("temprature in Fahrenheit: %.1f",f);

	getch();
}