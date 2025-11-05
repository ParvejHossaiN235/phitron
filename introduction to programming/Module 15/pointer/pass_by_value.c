// 15-4 Pass by value
#include<stdio.h>

void fun(int x)
{
    x = 20;
    printf("Fun function e x pass by value: %p\n", &x);
}


int main()
{
    int x =10;
    fun(x);
    printf("%d \n", x);

    printf("Main function e x pass by value: %p\n", &x);
    return 0;
}