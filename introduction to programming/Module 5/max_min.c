// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    // minimum value
    if (a <= b && a <= c )
    {
        printf("%d ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%d ", b);
    }
    else if (c <= a && c <= b)
    {
        printf("%d ", c);
    }   
    

    // maximum value
    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else if (c >= a && c >= b)
    {
        printf("%d", c);
    }  
        
    return 0;
}