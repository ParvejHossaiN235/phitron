// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

#include<stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    
    if (c >= 'a' && c<= 'z' )
    {
        c = c - 32;
        printf("%c", c);
    }
    else 
    {
        c = c + 32;
        printf("%c", c);
    }
    

    return 0;
}