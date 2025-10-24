/*
You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.

Note: Vowels are a,e,i,o and u. The rest are called consonants.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    scanf("%s", s);

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}


