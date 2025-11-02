// Sum of 2 values equal x
// flag variable

#include<stdio.h>

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

    int flag = 0;

    for (int j = 0; j < n - 1; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (a[j] + a[k] == x)
            {
                flag = 1;
                printf("Yes\n");
                printf("%d + %d = %d", a[j], a[k], x);

            }
                      
        }
        
    }
    
    if (flag == 0)
    {
        printf("No\n");
    }
    
    
    return 0;
}