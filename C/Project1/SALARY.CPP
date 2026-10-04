/*wap to gross salary calculator*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float salary,hra,da,ta,gross;

	printf("Enter Base salary:");
	scanf("%f",&salary);

	printf("Enter HRA percentage:");
	scanf("%f",&hra);

	printf("Enter DA percentage:");
	scanf("%f",&da);

	printf("Enter TA percentage:");
	scanf("%f",&ta);

	gross = salary + (salary * hra/100)
			+(salary * da/100)
			+(salary * ta/100);

	printf("Gross salary =%.2f",gross);

	getch();

}