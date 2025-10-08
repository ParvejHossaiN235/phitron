#include <stdio.h>

// Explain if else ladder.
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num == 20)
    {
        printf("The number is Equal 20\n");
    }
    else if (num > 30) 
    {
        printf("The number is greater than : %d\n", num);
    }
    else 
    {
        printf("The number is less than 30: %d\n", num);
    }

    return 0;
}
