// You will be given a positive integer N, you need to print a pattern shown below using this N.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    // part 1
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
            printf(" ");

        for (int j = 1; j <= star; j++)
        {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }

        printf("\n");
        star += 2;
        space--;
    }

    // part 2

    star -= 4;  
    space = 1; 

    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= space; k++)
            printf(" ");

        for (int j = 1; j <= star; j++)
        {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }

        printf("\n");
        
        star -= 2;
        space++;
    }

    return 0;
}