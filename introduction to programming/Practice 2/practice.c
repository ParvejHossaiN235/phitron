// I know that you're loving practice days! So this task is for you. You need to print "I Love Practice" without the quotation marks. I know that you can do it!

// #include <stdio.h>

// int main()
// {
//     printf("I Love Practice");

//     return 0;
// }


// 2 . Take two integers A and B as input and output their summation.

// #include <stdio.h>

// int main ()
// {
//     int A;
//     int B;

//     scanf("%d %d", &A, &B);
//     int sum = A + B;

//     printf("%d ", sum );

//     return 0;
// }



// 3 . You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value  C and a character D as input and output them serially.

#include <stdio.h>

// int main ()
// {
//     int a;
//     long long int b;
//     double c;
//     char d;
//     scanf("%d",&a);
//     scanf("%lld",&b);
//     scanf("%lf",&c);
//     scanf(" %c",&d);

//     printf("%d\n", a);
//     printf("%lld\n", b);
//     printf("%lf\n", c);
//     printf("%c\n", d);

//     return 0;
// }



// 4 . I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times.

// int main ()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         printf("I Love Practice \n", i);
//     }    

//     return 0;
// }


// 5 .  You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No Print Yes if the value is divisible by 5 and print No otherwise.

int main ()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 )
        {
            printf("%d Yes\n", i);
        }
        else {
            printf("%d No\n", i);
        }
        
    }
    
    return 0;
}