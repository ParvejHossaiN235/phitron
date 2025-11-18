/*
    Given a number N. Print factorial of N.

    Note: Solve this problem using recursion.
*/

#include<stdio.h>

long long int factorial (int n)
{
    if (n == 1)
    {
       return 1;
    }
    
    long long int multi = factorial(n-1);    /// n er man 1 er komiye dawa and multi varibla er man store kore

    return n*multi;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long ans = factorial(n);
    printf("%lld", ans);
    return 0;
}