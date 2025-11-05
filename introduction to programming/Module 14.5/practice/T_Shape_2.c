/*
Given a number N. Print a pyramid that has N rows.

For more clarification see the example below.
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 0;
    int space = n-1;

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
        
        printf("*\n");
        star+=2;
        space--;
    }
    
    return 0;
}