//Checking row, column and square matrix

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

    if (r == 1)
    {
        printf("Thi is a col matrix");
    }
    else
    {
        printf("Thi is not col matrix");
    }
}