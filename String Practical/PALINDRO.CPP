/* develop a program that checks wheather a given string is a palindrime or
not without using string functions*/

#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    while(str[length] != '\0')
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("The given string is a Palindrome.");
    }
    else
    {
        printf("The given string is not a Palindrome.");
    }

    getch();
}