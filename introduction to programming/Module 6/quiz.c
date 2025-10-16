// 1. How many times “hi” will be printed for the following code snippet?

// #include<stdio.h>

// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         printf("hi ");
//         if (i > 2)
//         {
//             break;
//         }
        
//     }
    
//     return 0;
// }


// 2. How many times (*) will be printed for the following nested loops?

// #include<stdio.h>

// int main()
// {
//     int i = 3;

//     while (i <= 5)
//     {
//         for (int j = 0; j <i; j++)
//         {
//             printf("* \n");
//         }
//         i++;
//     }
    
//     return 0;
// }


// 3. How many times “#” will be printed for the following code snippet?

// #include<stdio.h>

// int main()
// {
//     int i = -3;

//     while (i<0)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("# \n");
//         }
//         i--;
        
//     }
    
//     return 0;
// }


// 4. How many times “hi” will be printed for the following code snippet?

// #include<stdio.h>

// int main()
// {
//   for (int i = -4; i >=0; i++)
//   {
//     for (int j = 5; j < 2; j++)
//     {
//         printf("hi\n");
//     }
    
//   }
     
//     return 0;
// }


// 5. Which one is an infinite loop?

// #include<stdio.h>

// int main()
// {
//     for (int i = -4; i <= 0; i--)
//     {
//         printf("%d", i);
//     }
    
//     return 0;
// }



// 6. Write a loop that can print all values from 1 to 10 inclusive.

// #include<stdio.h>

// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//        printf("%d \n", i);
//     }
    
//     return 0;
// }

// 7. Write a loop that can print all values from 1 to 10 exclusive.

// #include<stdio.h>

// int main()
// {
//     int i = 2;
//     while (i < 10)
//     {
//         printf("%d \n", i);
//         i++;
//     }
    
//     return 0;
// }

// 8. What will be the output of the following code snippet?

// #include<stdio.h>

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         if (i == 3)
//         {
//             continue;
//         }
//         printf("%d ",i);
//     }
    
//     return 0;
// }



// 9. How many times “hi” will be printed for the following code snippet?
// #include<stdio.h>

// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         if (i > 2)
//         {
//            break;
//         }

//         printf("hi ");
        
//     }
    
//     return 0;
// }.


// 10. How many times “hi” will be printed for the following code snippet?

#include<stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i > 2)
        {
           continue;
        }

        printf("hi \n");
        
    }
    return 0;
}