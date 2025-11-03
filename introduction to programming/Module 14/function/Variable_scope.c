// Variable scope

#include<stdio.h>

int y = 10;     //global variable

int sum ()
{
    printf("Sum of %d\n", y);
}

int main()
{
    sum();
    printf("Main of %d\n", y);
    return 0;
}