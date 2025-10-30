/*
Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];

    scanf("%s", s);
    scanf("%s", t);

    int len_1 = strlen(s);
    int len_2 = strlen(t);
    printf("%d %d\n", len_1, len_2);

    printf("%s %s\n", s, t);

    return 0;
}
