// Function with return + parameter

#include<stdio.h>

// function called

int sum(int num1, int num2)
{
    int total = num1 + num2;
    return total;
}


int main()
{
    //    int val = sum(30,50);
    //     printf("%d", val);

    int a,b;
    scanf("%d %d", &a, &b);

    int val = sum(a,b);

    printf("%d", val);

    return 0;
}  