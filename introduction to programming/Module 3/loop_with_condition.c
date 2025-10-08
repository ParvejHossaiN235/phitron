#include <stdio.h>

int main ()
{
    // int n;
    // scanf("%d", &n);

    // for (int i = 1; i <= 10; i++)
    // {
    //     if (n % 2 == 0)
    //     {
    //         printf("This is Even Value = %d\n", n);
    //     }
    //     else 
    //     {
    //         printf("This is Odd Value = %d\n", n);
    //     }
    // }


    for (int i = 1; i <=10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d - Even\n", i);
        }
        else
        {
            printf("%d - Odd\n", i);
        }
        
    }
    

    return 0;
}