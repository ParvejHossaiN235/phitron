/*
Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

Hint: use function getline(cin, s).
*/

#include<stdio.h>

int main()
{
    char s[100005];
    fgets (s, 100005, stdin);

    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);

    }
    

    return 0;
}