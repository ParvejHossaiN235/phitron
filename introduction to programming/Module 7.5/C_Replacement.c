/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Replace every positive number by 1.
Replace every negative number by 2.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            a[i] = 1;
        }
        else if (a[i] < 0)
        {
            a[i] = 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i<n -1)
        {
            printf(" ");
        }
        
    }
    printf("\n");

    return 0;
}