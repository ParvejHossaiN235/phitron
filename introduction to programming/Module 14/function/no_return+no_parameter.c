// Function with no return + no parameter

#include<stdio.h>


// function called

void sum()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int ans = a+b;

    printf("%d", ans) ;
}


int main()
{    
    sum();

    return 0;
}  
