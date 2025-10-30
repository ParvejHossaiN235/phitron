/*
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        
        if (s[i] == ',')
        {
            s[i] = ' '; // replace comma with space
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32; // replace comma with space
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32; // capital to small
        }
    }

    printf("%s", s);

    return 0;
}