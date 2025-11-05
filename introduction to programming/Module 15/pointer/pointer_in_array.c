// 15-8 Pointer in array

#include<stdio.h>

int main()
{
    int a[5] = {10,20,30,40};  // ekhane array er name pointer hisabe kaj kore

    printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);
    // printf("%p\n", &a[5]);

    printf("Array er 0 index er address: %p\n", &a[0]);
    printf("%d\n", *a);  // derafarence kora holo
    return 0;
}