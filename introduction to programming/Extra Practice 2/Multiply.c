/*
You will be given two integers A and B. You need to give output their multiplication.
*/

#include<stdio.h>

int main()
{
    long long int a,b;
    scanf("%lld %lld", &a, &b);

    long long int total = a * b;

    printf("%lld", total);
    return 0;
}