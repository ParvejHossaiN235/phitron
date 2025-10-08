// In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a). 

#include <stdio.h>

int main ()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a%b == 0)
    {
        printf("Yes");
    }
    else if (b%a == 0)
    {
        printf("Yes");
    }
    else {
        printf("No");
    }
    

    return 0;
}
