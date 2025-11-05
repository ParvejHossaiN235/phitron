/*
Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // part 1
    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    // part 2
    
    star -= 2;
    space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");            
        }
        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}
