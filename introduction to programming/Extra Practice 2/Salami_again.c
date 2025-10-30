/*
This year abul is giving his cusins salami.

But one of his cusin has came to him and complained that he gave everyone different amounts of salami, so some got more and some got less.

So abul decided he will give everyone equal salami. He told his cusins to find out who got the maximum salami and to tell him how much more everyone else need to get equal salami. They came to you for help. Now you have an array containing N integers, the amount of salami of each cusin.

You need to print N integers in a line, for each salami amount, the difference of it from the maximum amount.
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}