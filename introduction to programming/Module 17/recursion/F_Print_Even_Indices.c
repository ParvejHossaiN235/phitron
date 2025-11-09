/*
Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

Note: Assume array A is 0-based indexing.
Solve this problem using recursion.
*/

#include<stdio.h>

void print_array(int a[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    
    if (i%2 == 0)
    {        
        printf("%d ", a[i]);

    }
    

    print_array(a,n,i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;

    print_array(a,n,i);
    
    return 0;
}