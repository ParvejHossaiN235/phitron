// Given a string S. Determine how many times does each letter occurred in S.

#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int count[256] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        count[(unsigned char)s[i]]++;
    }


    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i, count[i]);
        }
        
    }
    


    return 0;
}