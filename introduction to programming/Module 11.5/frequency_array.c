// Frequency Array (er mane holo array er value k kotober ache)
#include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int count_0 = 0;
//     int count_1 = 0;
//     int count_2 = 0;
//     int count_3 = 0;
//     int count_4 = 0;
//     int count_5 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//             count_0++;
//         }
//         else if (a[i] == 1)
//         {
//             count_1++;
//         }
//         else if (a[i] == 2)
//         {
//             count_2++;
//         }
//         else if (a[i] == 3)
//         {
//             count_3++;
//         }
//         else if (a[i] == 4)
//         {
//             count_4++;
//         }
//         else if (a[i] == 5)
//         {
//             count_5++;
//         }

//     }
//     printf("%d = %d \n", 0, count_0);
//     printf("%d = %d \n", 1, count_1);
//     printf("%d = %d \n", 2, count_2);
//     printf("%d = %d \n", 3, count_3);
//     printf("%d = %d \n", 4, count_4);
//     printf("%d = %d \n", 5, count_5);

//     return 0;
// }



// process 2

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count[6] = {0};

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0 && a[i] <= 5)
        {
            count[a[i]]++;
        }
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("%d = %d\n", i, count[i]);
    }

    return 0;
}
