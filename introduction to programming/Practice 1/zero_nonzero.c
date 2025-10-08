#include<stdio.h>

// In this problem you will be given an integer number N. Print "Zero" if the number is equals to 0 and "Non Zero" Otherwise.

int main()
{
    int n;
    scanf("%d", &n);


    if (n == 0)
    {
        printf("Zero");
    }
    else {
        printf("Non Zero");
    }
    return 0;
}