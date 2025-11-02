// গুণের নামতা print korbo

#include <stdio.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    int multi = 10;
  

    for (int i = 1; i <= multi; i++)
    {
        
        printf("%d * %d = %d\n", n, i, n*i);
    }
    
    return 0;
}