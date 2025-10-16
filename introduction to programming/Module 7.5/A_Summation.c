/*
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

*/

#include<stdio.h>
#include <stdlib.h> 
int main()
{
    int n;
    scanf("%d", &n);

    int a [n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + a[i];
    }
    
    printf("%lld ", llabs(sum));

    return 0;
}