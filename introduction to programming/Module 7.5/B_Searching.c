/*
Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.
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

    int x;
    scanf("%d", &x);

    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            pos = i;
            break;
        }
    }

    printf("%d\n", pos);

    return 0;
}