// You will be given a positive integer N, you need to print a pattern shown below using this N.

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int val = 1;
    int space = n-1;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = val; j >= 1; j--)
        {
            printf("%d", j);
        }        
        
        printf("\n");
        val++;
        space--;
    }
    

    return 0;
}