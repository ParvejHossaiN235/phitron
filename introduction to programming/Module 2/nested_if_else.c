#include <stdio.h>

int main ()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("coxs bazer jabo\n");

        if (tk >= 12000)
        {
            printf("Saint Martin o jabo ache = %d Taka", tk);
        }
        else if (tk >= 6000) 
        {
            printf("Sajek o jabo ekhon ache = %d", tk);
        }
        else
        {
            printf("Saint Martin jabo na karon ache = %d taka", tk);
        }        
    }
    else
    {
        printf("kohtaw jabo na karon ache = %d Taka", tk);
    }

    return 0;
    
}