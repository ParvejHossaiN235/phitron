// Checking secondary diagonal matrix

#include<stdio.h>
#include<stdbool.h>

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
    
    bool is_diagonal = true;

    // checking squre matrix
    if (r == c)
    {
        // diagonal vlue check
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i+j == r-1) // seconday matrix chek
                {
                    /* code */
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("This is Not a Secondary Diagonal Martix\n");
                    }
                    
                }
                
            }
            
        }
        if (is_diagonal == true)
        {
            printf("This is a Secondary Diagonal Matrix\n");
        }
        
    }
    else
    {
        printf("This is No Secondary Diagonal Matrix");
    }

    return 0;
}