/*
You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

Input Format

First line will contain N, the row and M, the column of the matrix.
Then the N * M sized matrix will be given.

*/

#include <stdio.h>
#include <stdbool.h>

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

    // Check square matrix
    if (r != c)
    {
        printf("NO");
        return 0;
    }

    bool is_diagonal = true;

    // diagonal vlue check
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)        {
            
            if (i == j)    // primary diagonal check
            {
                if (a[i][j] != 1) is_diagonal = false;
            }            
            else if (i + j == r - 1)    // scecondary diagonal check
            {
                if (a[i][j] != 1) is_diagonal = false;
            }            
            else {        // Other
                if (a[i][j] != 0) is_diagonal = false;
            }
        }
    }
    if (is_diagonal == true)
    {
        printf("YES \n");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
