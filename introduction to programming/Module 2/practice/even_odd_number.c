#include<stdio.h>

// Take a number from user and check if its a even number or odd number.

int main() 
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("This is even number = %d", num);
    }
    else
    {
        printf("This is Odd number = %d", num);
    }
    
}