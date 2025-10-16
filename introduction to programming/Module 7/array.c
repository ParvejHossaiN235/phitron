// #include<stdio.h>

// int main()
// {
//     int ar [5];
//     ar[2] = 100;
//     ar[3] = 100;
//     ar[4] = 100;

//     printf("%d", ar[3]);
//     return 0;
// }


// Array input and output used loop
// #include<stdio.h>

// int main()
// {
//     int a [5];

//     for (int i = 0; i <=4; i++)
//     {
//         scanf("%d", &a[i]);
//         printf("%d ", a [i]);
//     }
    
    
//     return 0;
// }


// Array input and output used while loop
#include<stdio.h>

int main()
{
    int a [6];
    int i = 0;

    while (i <=5)
    {
        scanf("%d", &a[i]);
        printf("%d ", a [i]);

        i ++;
    }
    
    return 0;
}