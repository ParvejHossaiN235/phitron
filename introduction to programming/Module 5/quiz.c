// 1 )  If a = 5, b = 1, c = 3, Then what will be the output of the following code snippet?

// #include<stdio.h>

// int main()
// {
//     int a = 5;
//     int b = 1;
//     int c = 3;

//     if (a > b && b > c)
//     {
//        printf("%d", a);
//     }
//     else if (b > b && c > b)
//     {
//        printf("%d", b);
//     }
//     else
//     {
//        printf("%d", c);
//     }

//     return 0;
// }

//  2) What will be the output of the following code?
// #include<stdio.h>

// int main()
// {
//     int x = 1;

//     if (x < 5)
//     {
//         printf("hello");
//     }
//     if (x <= 10)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("no");
//     }

//     return 0;
// }

// 3) If x = 4, Then what will be the output of the following code snippet?

// #include<stdio.h>

// int main()
// {
//     int x = 4;

//     if (x%2 != 0)
//     {
//         printf("Odd ");
//     }
//     else
//     {
//         printf("Even ");
//     }
//     if (x > 0)
//     {
//         printf("Positive");
//     }
//     else
//     {
//         printf("Negative");
//     }

//     return 0;
// }

// 4) What will be the output of the following code?

// #include <stdio.h>

// int main()
// {
//     int x = 0;

//     if (x == 1)
//     {
//         if (x == 0)
//         {
//             printf("inside if if\n");
//         }
//         else
//         {
//             printf("inside if else\n");
//         }
//     }
//     else
//     {
//         printf("inside else\n");
//     }

//     return 0;
// }

// 5) If marks = 76, Then what will be the output of the following code snippet?

// #include<stdio.h>

// int main()
// {
//     int marks = 76;

//     if (marks >= 80)
//     {
//        printf("A+");
//     }
//     else if (marks >= 70)
//     {
//        printf("A");
//     }
//     else if (marks >= 70)
//     {
//        printf("A-");
//     }

//     return 0;
// }

//  6. What is the output of the following code snippet?

// #include<stdio.h>

// int main()
// {
//     int num = 5;

//     if (num > 10)
//     {
//         printf("Greater than 10");
//     }
//     else if (num < 10)
//     {
//         printf("Less than 10");
//     }
//     else
//     {
//         printf("Equal to 10");
//     }

//     return 0;
// }

// 7. If marks = 92, Then what will be the output of the following code snippet?

// #include<stdio.h>

// int main()
// {
//     int marks = 92;

//     if (marks >= 80)
//     {
//         printf("A+");
//     }
//     if (marks >= 70)
//     {
//         printf("A");
//     }
//     if (marks >= 70)
//     {
//         printf("A-");
//     }

//     return 0;
// }

// 8. What will be the output of the following C code?

// #include<stdio.h>

// int main()
// {
//     int x = 0;

//     if (x == 1)
//     {
//         if (x >= 0)
//         {
//             printf("true\n");
//         }
//         else
//         {
//             printf("false\n");
//         }

//     }

//     return 0;
// }

// 9) What will be the output of the following code snippet?
// #include<stdio.h>

// int main()
// {
//     int x = 5;
//     int y = 4;

//     if (x>=y && x<y+4)
//     {
//         if (y<5)
//         {
//             printf("hi ");
//         }
//         if (y<10)
//         {
//             printf("hi ");
//         }
//     }
//     else
//     {
//         printf("hello ");
//     }

//     return 0;
// }

// 10. What will be the output of the following code snippet?
#include <stdio.h>

int main()
{
    int x = 5;
    int y = 4;

    if (x>=y && x<y+4)
    {
        if (y < 5)
        {
            printf("hi ");
        }
        else if (x < 10)
        {
            printf("hi ");
        }
    }
    else
    {
        printf("hello ");
    }
    return 0;
}
