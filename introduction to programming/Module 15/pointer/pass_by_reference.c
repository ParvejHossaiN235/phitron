// 15-5 Pass by reference

// ekhane main funciton e x er value change korar jonno pass by reference use kora hoi pointer variable ar maddome.

#include<stdio.h>

void fun(int* p) // pointer variable
{
    *p = 20;  // pointer ke  derefernc kora holo => *p
}


int main()
{
    int x =10;
    fun(&x);   // ekhane x er referne pathano holo
    printf("%d \n", x);

    return 0;
}