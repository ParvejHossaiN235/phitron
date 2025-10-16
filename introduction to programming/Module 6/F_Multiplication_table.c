// Given a number N. Print the maltiplication table of the number from 1 to 12

#include<stdio.h>

int main()
{
    int multi;
    scanf("%d", &multi);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", multi, i, multi*i);
    }

    return 0;
}