/*
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[1001];
    scanf("%s",  a);

    char b[1001];
    scanf("%s",  b);

    int length_1 = strlen(a);
    int length_2 = strlen(b);

    printf("%d %d\n", length_1, length_2);


    printf("%s%s\n", a, b);

    // reverse
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;


    printf("%s %s\n", a, b);

    return 0;
}