/*
You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char c[10001];
        scanf("%s", c);

        int capital = 0; 
        int small = 0; 
        int digits = 0; 

        for (int j = 0; c[j] != '\0'; j++)
        {
            if (c[j] >= 'A' && c[j] <= 'Z')
            {
                capital++;
            }
            else if (c[j] >='a' && c[j] <='z')
            {
                small++;
            }
            else if (c[j] >= '0' && c[j] <= '9')
            {
                digits++;
            }
            
            
        }

        printf("%d %d %d\n", capital, small, digits);
        
    }
    

    return 0;
}