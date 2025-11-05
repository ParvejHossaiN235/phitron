/*
Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = n-1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= star; j++)
        {
           
            printf("*"); 
        }        

        printf("\n"); 
        star--;
    }
    
    return 0;
}
