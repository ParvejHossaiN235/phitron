// Null character

#include<stdio.h>

int main()
{
    char a[10];

    scanf("%s", &a);
    printf("%s", a);
    printf("%d", a[4]);
    return 0;
}