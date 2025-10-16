// Given a number N, and N numbers, find maximum number in these N numbers.


// max number output 
// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int max = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         int val;
//         scanf("%d", &val);

//         if (val > max)
//         {
//             max = val;
//         }
        
//     }
//     printf("%d", max);
    
//     return 0;
// }



// INT_MIN number output 
// #include<stdio.h>
// #include<limits.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int max = INT_MIN;

//     for (int i = 1; i <= n; i++)
//     {
//         int val;
//         scanf("%d", &val);

//         if (val > max)
//         {
//             max = val;
//         }
        
//     }
//     printf("%d", max);
    
//     return 0;
// }


// INT_MAX number output 
#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int max = INT_MAX;

    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);

        if (val < max)
        {
            max = val;
        }
        
    }
    printf("%d", max);
    
    return 0;
}