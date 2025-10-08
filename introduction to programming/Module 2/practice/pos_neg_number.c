#include <stdio.h>

// Take a number from user and check if its a positive or negative number.

int main ()
{
    int values;
    scanf("%d", &values);

    if (values >= 20)
    {
        printf("This is positive value of = %d", values);
    }
    else 
    {
        printf("This is nagative value of = %d", values);
    }

    return 0;
}