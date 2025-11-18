#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int top = 6 + (n - 1) / 2; 
    int star = 1;
    int space = top - 1;

    // top part
    for (int i = 1; i <= top; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        printf("\n");
        star += 2;
        space--;
    }

    // bottom part
    int max_width = 2 * top - 1;
    int bottom_space = (max_width - n) / 2;

    for (int i = 1; i <= 5; i++) 
    {
        for (int k = 1; k <= bottom_space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
