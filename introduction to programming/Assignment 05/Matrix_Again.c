/*
You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the values of last row and then print the values of last column in the order they were given.

Input Format

First line will contain N and M the row and column respectively.
Then the 2D matrix will be given.
*/

#include<stdio.h>

int main()
{
     int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print last row
    for (int j = 0; j < c; j++)
    {
        printf("%d ", a[r-1][j]);
    }
    printf("\n");


    // Print last column
    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][c-1]);
    }
    printf("\n");

    return 0;
}