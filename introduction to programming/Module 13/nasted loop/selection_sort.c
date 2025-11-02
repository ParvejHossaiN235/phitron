// Selection sort

// print korbo ascending order
// print korbo descending order

#include<stdio.h>

// Ascending value bahir korchi
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i] < a[j])   // Ascending Condition
//             {
//                 //printf("Serial Ok");
//             }
//             else
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
        
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     return 0;
// }


// Descending value bahir korchi
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])    // Descending Condition
            {
                //printf("Serial Ok");
            }
            else
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}