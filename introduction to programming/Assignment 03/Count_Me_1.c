// You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count_1 = 0;
    int count_2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]%2 == 0)
        {
            count_1++;
        }
        else if (a[i]%3 == 0)
        {
            count_2++;
        }       
        
    }
    
    printf("%d %d", count_1, count_2);

    return 0;
}