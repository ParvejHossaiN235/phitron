/*
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.
*/

#include<stdio.h>

void print_number (int i, int n)
{
    if (i > n)
    {
        return;
    }

    printf("%d\n", i);

    print_number(i+1, n);
    
}


int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;

    print_number(i, n);

    return 0;
}