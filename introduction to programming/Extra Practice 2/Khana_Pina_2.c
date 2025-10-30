/*
After eating at the resturant Abul, Babul and Bablu has decided to divide the bill among themselves and for that they need to know if the amount is divisible by 3 or not (as they are three friends). Can you help them?
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int total = n % 3;
    
    if ( total == 0)
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
    
    return 0;
}