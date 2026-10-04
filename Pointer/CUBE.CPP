/* develop a program to find cubes of all elements from a given 2D array
using pointer with UDF */
#include<stdio.h>
#include<conio.h>

void cube(int *p, int n)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
	    printf("%d ", (*(p + i * 10 + j)) *
			  (*(p + i * 10 + j)) *
			  (*(p + i * 10 + j)));
	}
	printf("\n");
    }
}

void main()
{
    clrscr();
    int a[10][10];
    int n, i, j;

    printf("Enter array's size: ");
    scanf("%d", &n);

    printf("\nEnter array elements:\n");

    for(i = 0; i < n; i++)
    {
	for(j = 0; j < n; j++)
	{
	    printf("a[%d][%d] = ", i, j);
	    scanf("%d", &a[i][j]);
	}
    }

    printf("\nOutput:\n");
    printf("Cubes of all elements:\n");

    cube(&a[0][0], n);

    getch();
}