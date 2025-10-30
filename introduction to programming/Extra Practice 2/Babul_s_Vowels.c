/*
Babul is learning about vowels and consonants.

Now he wants you to write a program for him where he can give a letter and the program will tell if it's a vowel or a consonant.

He has given you the list of vowels to help you. (The vowels are a, e, i, o and u).
*/

#include<stdio.h>

int main()
{
    char s;
    scanf("%c", &s);

    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    {
        printf("Vowel");
    }
    else if (s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
    {
        printf("Vowel");
    }    
    else
    {
        printf("Consonant");
    }

    return 0;
}