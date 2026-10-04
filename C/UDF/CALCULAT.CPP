/* develop a program to calculator*/

#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divi(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

void main()
{
    clrscr();

    int choice, a, b;

    do
    {
        printf("\n\n--- CALCULATOR ---");
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Result = %d", add(a,b));
                break;

            case 2:
                printf("Result = %d", sub(a,b));
                break;

            case 3:
                printf("Result = %d", mul(a,b));
                break;

            case 4:
                printf("Result = %d", divi(a,b));
                break;

            case 5:
                printf("Result = %d", mod(a,b));
                break;

            case 0:
                printf("Exit...");
                break;

            default:
                printf("Invalid choice!");
        }

    }while(choice != 0);

    getch();
}