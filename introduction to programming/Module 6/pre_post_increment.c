#include <stdio.h>

// int main()
// {
//     int i = 5;

//     // int x = ++i; // pre-increment
//     // printf("%d", x);

//     int x = i++; // post-increment

//     //first x dile er value 5 hobe karon variable e purno man use hobe
//     printf("%d", i);

//     return 0;
// }

int main()
{
    // Q1. )
    // int i = 5;
    // int x = ++i + i++ + ++i;

    // /*
    //     x = ++i value -> 6
    //     x = i++ value -> 7
    //     x = ++i value -> 8
    //     int x = 6 + 7 + 8;
    // */

    // printf("%d\n", x);
    // printf("%d", i);

    // Q2. )

    // int a = 2, b = 3;
    // int result = a++ * ++b + ++a * b++;

    // /*
    //     a = a++ value -> 2 (3 hoi but value pore hobe)
    //     b = ++b value -> 4
    //     a = ++a value -> 4
    //     b = b++ value -> 4 (5 hoi but value pore hobe)

    //     int result = (2 * 4) + (4 * 4)
    // */

    // printf("%d", result);

    // Q3. )
    // int i = 0;
    // while (i++ < 3)
    // {
    //     printf("%d ", i);
    // }

    // /*
    //     i = 0++  value -> 1
    //     i = 1++  value -> 2
    //     i = 2++  value -> 3

    // */

    // Q4. )
    // int x = 10;
    // int y = (x++) + (++x) + (x--);

    // /*
    //     x = x++ value -> 10 (11 hoi but value pore hobe)
    //     x = ++x value -> 12
    //     x = x++ value -> 12 (11 hoi but value pore hobe)

    //     int result = (10) + (12) + 12
    // */

    // printf("%d\n", y);
    // printf("%d", x);

    int a = 1, b = 2, c = 3;
    int res = a++ + ++b + c++ + ++a + b++;

    /*
        a = a++ value -> 1 (2 hoi but value pore hobe)
        b = ++b value -> 3 
        c = c++ value -> 3 (4 hoi but value pore hobe)
        a = ++a value -> 3 
        b = b++ value -> 3 (4 hoi but value pore hobe)

        int res = 1 + 3 + 3 + 3 + 3
    */

    printf("%d\n", res);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}