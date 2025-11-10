// Declaring 2D array

#include<stdio.h>

int main()
{                                // [3]  => row size
    // int a[3][4];              // [4]  => column size                  

    // a[1][2] = 10;

    // printf("%d %d", a[1][2]);



    // User Theke Input nibo

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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}