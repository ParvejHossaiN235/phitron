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
//     scanf("%d\n %lld\n %lf\n %c\n",&a,&b,&c,&d);

//     printf("%d\n%lld\n%lf\n%c\n", a,b,c,d);

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

// int main ()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 5 == 0 )
//         {
//             printf("%d Yes\n", i);
//         }
//         else {
//             printf("%d No\n", i);
//         }
        
//     }
    
//     return 0;
// }


// Hello, world! I am learning C programming language. ^_^

// Programming is fun and challenging. /\/\/\

// I want to give my 100% dedication to learn!	I will succeed one day.

// Note: Here you will see 4 spaces in the last line which is a tab, you need to print a tab there.




// int main() {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");
//     return 0;
// }



// int main() {

//     long long a;
//     long long b;
    
//     scanf("%lld", &a);
//     scanf("%lld", &b);
    
//     printf("%lld\n", a * b);


//     return 0;
// }



// int main() {

//     int n;
//     scanf("%d", &n);

//     if (n % 3 == 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
    
//     return 0;
// }



// int main()
// {

//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         if (i%3==0 && i%7==0)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }


int main() {
    long long int n;
    scanf("%lld", &n);

    if (n > 1000) 
    {
        printf("I will buy Punjabi\n");

        if (n >= 1500) 
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    } 
    else 
    {
        printf("Bad luck!\n");
    }

    return 0;
}

