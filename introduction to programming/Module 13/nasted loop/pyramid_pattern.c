// Pyramid Pattern
#include <stdio.h>

// int main ()
// {
//     int n;
//     scanf("%d", &n);

//     int star = 1;

//     int space = n-1;   // space value

//     for (int i = 1; i <=n; i++)   // for printing lines
//     {
//         for (int k = 1; k <= space; k++)   // for printing space
//         {
//             printf(" ");
//         }
        
//         for (int j = 1; j <= star; j++)   // for printing star
//         {
//             printf("*");
//         }
        

//        printf("\n");
//        star+= 2;
//        space --;
//     }

//     return 0;
    
// }

// Reverse pyramid Star Print
int main ()
{
    int n;
    scanf("%d", &n);

    int star = 2 * n-1;   // প্রথম লাইনে সর্বাধিক star থাকবে

    int space = 0;   // প্রথম লাইনে কোনো space থাকবে না

    for (int i = 1; i <=n; i++)   // for printing lines
    {
        for (int k = 1; k <= space; k++)   // for printing space
        {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++)   // for printing star
        {
            printf("*");
        }
        

       printf("\n");
       star -= 2;
       space ++;
    }

    return 0;
    
}