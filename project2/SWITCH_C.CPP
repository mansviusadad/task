/*wap to switch case*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char grade;
	printf("Enter your grade:");
	scanf("%c",&grade);

	switch(grade)
	{
		case 'A':
		printf("Excellent work!");
		break;

		case 'B':
		printf("Well done.");
		break;

		case 'C':
		printf("Good Job.");
		break;

		case 'D':
		printf("You are passed,but you could do better.");
		break;

		case 'F':
		printf("Sorry,you failed.");
		break;

		default:
		printf("Invalid grade.");

	}
	getch();
}