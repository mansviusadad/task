/* Extend the program to count the frequency of each character in a given string*/
#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
    char str[100];
    int i, j, count;

    printf("Enter any string: ");
    scanf("%s", str);

    printf("Frequency of each letter:\n");

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        if(str[i] == ' ')
            continue;

        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        int k;
        for(k = 0; k < i; k++)
        {
            if(str[k] == str[i])
            {
                count = 0;
                break;
            }
        }

        if(count != 0)
        {
            printf("%c => %d\n", str[i], count);
        }
    }

    getch();
}