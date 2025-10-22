/*
Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

Print the first character in the string.
Print number of characters between the first and the last characters.
Print the last character in the string.
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[101];
        scanf("%s", s);

        int length = strlen(s);

        if (length <= 10)
        {
            printf("%s\n", s);
        }
        else
        {
            printf("%c%d%c\n",s[0],length-2,s[length-1]);
        }
        
    }

    return 0;
}