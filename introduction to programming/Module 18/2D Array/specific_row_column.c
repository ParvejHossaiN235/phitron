// Printing specific row and column
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

    // print of row
    // int specific_row;
    // scanf("%d", &specific_row);

    // for (int i = 0; i < c; i++)
    // {
    //     printf("%d ", a[specific_row][i]);
    // }


    // print of column
    int specific_row;
    scanf("%d", &specific_row);

    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][specific_row]);
    }
    
    
    return 0;
}