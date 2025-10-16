/*
You will be given a positive integer N. You need to print "I Want More Assignments" N times without the quotation mark. Also print from 1 to N with it. See the sample input output for more clarifications.
*/

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d. I Want More Assignments\n", i);
//     }

//     return 0;
// }

/* 2
You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.

Note: A positive number is a number that is strictly greater than 0.

*/

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     if (n > 0)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else if(n < 0)
//     {
//         for (int i = n; i <= 0; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else
//     {
//         printf("0");
//     }

//     return 0;
// }

/*3
You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

*/

// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a [n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = n-1; i >= 0; i--)
//     {
//         if (i %2 !=0)
//         {
//            printf("%d ", a[i]);
//         }

//     }

//     return 0;
// }

/*
4. You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.
*/

// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a [n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//     }

//     int even_sum = 0;
//     int odd_sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//         {
//             even_sum += a[i];
//         }
//         else
//         {
//             odd_sum += a[i];
//         }

//     }

//     printf("%d ", even_sum);
//     printf("%d ", odd_sum);

//     return 0;
// }

/*
5 You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

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
    int v;
    scanf("%d %d", &x, &v);

    a[x] = v;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}