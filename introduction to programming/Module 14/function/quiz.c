#include <stdio.h>


// 2. What will be the output of the following C code?
// void m()
// {
//     printf("hi ");
// }
// int main()
// {
//     m();
//     return 0;
// }


// 3. What will be the output of the following C code?
// void m()
// {
//     printf("hi ");
// }
// int main()
// {
//     printf("hello ");
//     return 0;
// }


//5. What will be the output of the following C code?

// int sum(int x, int y)
// {
//     int res = x + y;
//     return res;
// }

// int main()
// {
//     sum(5, 6);
//     return 0;
// }

//6. What will be the output of the following C code?

int sum(int x, int y)
{
    int res = x + y;
    return res;
}

int main()
{
    printf("%d", sum(5, 6));
    return 0;
}