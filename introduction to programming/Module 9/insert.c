// Insert a value in an array idea
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int index, value;
    scanf("%d %d", &index, &value);

    for (int i = n; i >= index+1; i--)
    {
        a[i] = a[i-1];
    }

    a[index] = value;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}