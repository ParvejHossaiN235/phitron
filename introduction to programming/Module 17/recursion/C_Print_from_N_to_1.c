/*
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.
*/

#include<stdio.h>

void print_number(int i, int n)
{
    if (i == 0)
    {
        return;
    }

    printf("%d", i);

    
    if (i != 1)
    {
        printf(" ");
    }

    print_number(i - 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    int i = n;

    print_number(i, n);

    return 0;
}