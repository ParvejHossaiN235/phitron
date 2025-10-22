#include<stdio.h>

int main()
{
    char a[50];
   fgets(a, 18, stdin);

    printf("%s", a);
    return 0;
} 
