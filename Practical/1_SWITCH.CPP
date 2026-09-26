/* create a c program to check if a number is entered by the user is a porositive
or consonant using a switch case */

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int n,ch;
	printf("Enter a number :");
	scanf("%d",&n);

	if(n>0)
		ch=1;
	else if(n<0)
		ch=2;
	else
		ch=3;

	switch(ch)
	{
		case 1:
		printf("Number is Positive");
		break;

		case 2:
		printf("Number is Negetive");
		break;

		case 3:
		printf("Number is Zero");
		break;
	}
	getch();
}