/*
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s",  s);


    int length = strlen(s);
    int i = 0;
    int j = length-1;
    int flag = 0;

    while (i<j)
    {
        if (s[i] != s[j])
        {
            printf("NO");
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        printf("YES");
    }
    
    
    
    return 0;
}