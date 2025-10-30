/*
You are given two strings S1, S2 and two integers - start and end. Your task is to take the characters from the second string (S2), starting at index start and ending at index end (inclusive), and add them to the end of the first string(S1).
*/

#include <stdio.h>

int main()
{
    char s1[1001];
    char s2[1001];
    scanf("%s %s", s1, s2);

    int start = 0;
    int end = 0;
    scanf("%d %d", &start, &end);

    char part[1001];
    int j = 0;

    for (int i = start; i <= end; i++)
    {
        part[j] = s2[i];
        j++;
    }
    part[j] = '\0';

    strcat(s1, part);

    printf("%s", s1);

    return 0;
}