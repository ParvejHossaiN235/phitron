/*
Given a number N. Print "I love Recursion" N times.

Note: Solve this problem using recursion.
*/

#include<stdio.h>

void print_text(int i, int n) {

    if (i == n)
    {
        return;
    }
    

    printf("I love Recursion\n");
    print_text(i+1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int i = 0;

    print_text(i, n);
    
    return 0;
}