/*
Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?

Note: If the answer is a floating value, take the integer part of the answer.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        // printf("%d %d %d \n", a, b, c);

        int total_day = (a * c) / (a + b);

        int few_day = c - total_day;

        printf("%d \n", few_day);
    }

    return 0;
}