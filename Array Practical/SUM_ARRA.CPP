/*develop a program to print and find the sum of all elements of a given row
& column from 2D arrray*/
#include<stdio.h>
#include<conio.h>

void main()
{
     clrscr();
    int a[10][10];
    int r, c, i, j;
    int row, col;
    int rowSum = 0, colSum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &r);

    printf("Enter the array's column size: ");
    scanf("%d", &c);

    printf("Enter array's elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row);

    printf("Enter column number: ");
    scanf("%d", &col);

    for(j = 0; j < c; j++)
    {
        rowSum = rowSum + a[row][j];
    }

    for(i = 0; i < r; i++)
    {
        colSum = colSum + a[i][col];
    }

    printf("Sum of row = %d\n", rowSum);
    printf("Sum of column = %d", colSum);

    getch();
}