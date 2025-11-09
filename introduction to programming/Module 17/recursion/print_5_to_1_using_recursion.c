// Print from 5 to 1 using recursion

#include<stdio.h>

void hello (int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d\n", i);
    
    hello (i-1);

}

int main()
{
    int i = 5;
    hello (i);

    return 0;
}