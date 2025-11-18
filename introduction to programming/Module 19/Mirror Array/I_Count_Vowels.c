/*
Given a string S. Print number of vowels in the string.

Note:
    Vowel letters: ['a', 'e', 'i', 'o', 'u'].
    Vowel letters could be capital or small.
    Solve this problem using recursion.
*/

#include<stdio.h>

int rec(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }
    int cnt = rec(s, i+1);

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return cnt+1;
    }
    else
    {
        return cnt;
    }
    
}

int main()
{
    char s [201];
    fgets(s, 201, stdin);
    int ans = rec(s, 0);
    printf("%d", ans);
    
    return 0;
}