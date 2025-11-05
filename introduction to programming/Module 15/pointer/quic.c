// 5. What will be the output of the following C code?

// #include<stdio.h>

// void swap (int *p, int *q)
// {
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }

// int main()
// {
//     int a =6, b = 5;
//     swap(&a, &b);

//     printf("%d %d\n", a, b);
    
//     return 0;
// }


// 6. What will be the output of the following C code?(think deeply)

// #include<stdio.h>

// void m (int *p)
// {
//     int i = 0;

//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", p[i]);
//     }
    
// }

// int main()
// {
//     int a [5] = {6, 5, 3};
//     m(a);
    
//     return 0;
// }


// 7. What will be the output of the following C code?

// #include<stdio.h>

// void m (int p, int q)
// {
//     int temp = p;
//     p = q;
//     q = temp;
// }

// int main()
// {
//     int a =6, b = 5;
//     m(a, b);

//     printf("%d %d\n", a, b);
    
//     return 0;
// }


// 8. What will be the output of the following C code?

// #include<stdio.h>

// int main()
// {
//     int ary[4] = {1, 2, 3, 4};
//     printf("%d\n", *ary);
//     return 0;
// }


// 10. What will be the output of the following C code?(A tricky question. Don’t answer without thinking. )

#include<stdio.h>

int main()
{
    int ary[4] = {1, 2, 3, 4};
    int *p;
    p = ary + 3;
    *p = 5;
    printf("%d\n", ary[3]);
    return 0;
}