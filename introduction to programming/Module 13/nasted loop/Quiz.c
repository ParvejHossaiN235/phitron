#include<stdio.h>

// 1. What will be the output of this pattern printing code?

// int main()
// {
//     for (int i = 1; i <=3; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);
//         }
        
//     }
    
//     return 0;
// }

// 2 Given an array [2,7,11,15] and X=9, which two elements sum to X?

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];    

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }


//     int x;
//     scanf("%d", &x);

//     int flag = 0;

//     for (int j = 0; j < n - 1; j++)
//     {
//         for (int k = j + 1; k < n; k++)
//         {
//             if (a[j] + a[k] == x)
//             {
//                 flag = 1;
//                 printf("Yes\n");
//                 printf("%d + %d = %d", a[j], a[k], x);

//             }
                      
//         }
        
//     }
    
//     if (flag == 0)
//     {
//         printf("No\n");
//     }
    
    
//     return 0;
// }


// 3. How many stars (*) will this code print?

// int main()
// {
        
//     for (int i = 1; i <=4; i++)
//     {
//         for (int j = 1; j <= 1; j++)
//         {
//             printf("* ");
//         }
        
//     }
//     return 0;
// }


//4 . What pattern will this code print?

// int main()
// {
//     for (int i = 1; i <=3; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             printf("%d ", i);
//         }
        
//     }
        
//     return 0;
// }


// 5. How many lines will this code print?
// int main()
// {
//     for (int i = 1; i <=5; i+=2)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
        
//     return 0;
// }


// 6. What replaces “?” to print:
// int main()
// {
//     int num = 1;
//     for (int i = 1; i <=3; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", num++);
//         }
//         printf("\n");
//     }
        
//     return 0;
// }



// 9. What is the output after sorting this array in ascending order?
// [5, 2, 9, 1]

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
            if (a[i] > a[j])   // Ascending Condition
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
