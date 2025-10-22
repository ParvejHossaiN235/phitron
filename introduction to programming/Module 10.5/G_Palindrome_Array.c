// An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.


#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int i = 0;
    int j = n-1;
    int flag = 0;

    while (i<j)
    {
        if (a[i] != a[j])
        {
            printf("NO");
            flag = 1;
            break;
        }
        
        i++;
        j--;
    }
    if (flag == 0)
    {
        printf("YES");
    }
    

    
    return 0;
}