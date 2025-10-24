/*
You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears. But if the count is zero, you don't need to prin that.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int count [256] = {0};
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        count [s[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            
            printf("%c - %d\n", i, count[i]);
        }
        
    }
        
    return 0;
}