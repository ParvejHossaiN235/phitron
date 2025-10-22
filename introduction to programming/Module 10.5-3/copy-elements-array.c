// Copy elements from 2 arrays to another array

#include<stdio.h>

int main()
{

    // first array
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    // second array
    int m;
    scanf("%d", &m);
    int b[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    // first array copy
    int c[n+m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    
    // second array copy
    for (int i = 0; i < m; i++)
    {
        c[i+n] = b[i];
    }

    // print copy array
    for (int i = 0; i < n+m; i++)
    {
        printf("%d ", c[i]);
    }
    
    return 0;
}