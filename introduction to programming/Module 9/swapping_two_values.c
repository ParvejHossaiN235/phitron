/*
Swapping two values


b er value hobe a te and a er value hobe b te
*/

#include<stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int temp = a;

    a = b;
    b = temp;

    printf("A = %d\nB = %d", a,b);
    return 0;
}