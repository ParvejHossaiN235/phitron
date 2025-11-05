#include<stdio.h>

/*
    int main()
    {
        int x = 15;
        printf("%d\n", x);
        printf("%p\n", &x);


        int* ptr;  // pointer variable
        ptr = &x;
        printf("%p\n", ptr);  // x ar adress value print
        printf("%p\n", &ptr);
        return 0;
    }
*/


int main ()
{
    int x = 15;
    printf("%d\n", x);
    printf("%p\n", &x);
     
    int* ptr;
    ptr = &x;
    *ptr = 300;
    printf("%d", x);
    return 0;
}