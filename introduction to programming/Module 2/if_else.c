#include <stdio.h>

int main() 
{
    int money;
    scanf("%d", &money);

    if (money >= 80)
    {
        printf("Ami Lunch Korbo karon amer kache ache  = %d taka", money);
    }
    else if (money >= 40) 
    {
        printf("Ami Ruti khabo karon amer kache ache  = %d taka", money);
    }
    else
    {
        printf("Ami Chip Khabo karon amer kache ache = %d taka", money);
    }
    
    
}