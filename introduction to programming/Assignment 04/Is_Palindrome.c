/*
You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

Palindrome: A palindrome is a word that reads the same forward and backward.

*/

#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int i = 0;
    int j = strlen(s) -1;

    while (i<j)
    {
        if (s[i] != s[j])
        {
           return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main()
{
    char s[1001];
    scanf("%s",  s);

    int result = is_palindrome(s);    

    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else 
    {
        printf("Not Palindrome\n");
    }
    
    
    return 0;
}