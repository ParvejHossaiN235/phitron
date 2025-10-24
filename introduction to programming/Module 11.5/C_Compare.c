/* 
Given two strings X and Y . Print the smallest lexicographical one.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.
*/ 

#include<stdio.h>
#include<string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    if (strcmp(a,b) < 0)
    {
        printf("%s", a);
    }
    else 
    {
        printf("%s", b);
    }
    

    return 0;
}
