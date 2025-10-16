/*1. Given a lowercase alphabet character. You have to print the next character in the alphabet.

Note
The next letter to z is a.

*/

// #include<stdio.h>

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     if (ch == 'z')
//     {
//         printf("a");
//     }
//     else
//     {
//         printf("%c", ch+1);
//     }

//     return 0;
// }



//  3 Given a number N. Print all the divisors of N in ascending order.

// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("%d\n", i);
//         }
        
//     }
    
//     return 0;
// }



/*
4 . A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.
*/


#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a = n / 10;
    int b = n % 10;

    if (a == 0 || b == 0)
    {
        printf("YES");
    }
    else if (a%b == 0 || b%a == 0)
    {
       printf("YES");
    }    
    else 
    {
        printf("NO");
    }   
    

    return 0;
}