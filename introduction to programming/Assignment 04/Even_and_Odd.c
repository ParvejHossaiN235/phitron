/*
You will be given an array A, and the size of that array N. You need to write a function named odd_even() and take input inside that function. The function won't return anything. You need to count the number of even values and number of odd values in that array and print inside the function.
*/

#include<stdio.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];

    int even_count = 0, odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("%d %d", even_count, odd_count);
    
}
int main()
{
    odd_even();
    return 0;
}