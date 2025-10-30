/*
Two brothers, Rafi and Shafi, love spending time together. Rafi, the younger one, has just learned the basics of programming and is super excited to solve real problems. Seeing his enthusiasm, Shafi, the big brother and a coding pro, decides to test Rafi’s skills with a fun challenge. He gives Rafi two arrays A and B of the same size and says:

Take each number from the first array and add it with the mirrored number from the second array. That means:

The 1st number of the first array will be added with the last number of the second array. The 2nd number of the first array will be added with the 2nd last number of the second array. The 3rd number of the first array will be added with the 3rd last number of the second array… and so on. In short: For every position i, you add  with , where n is the size of the arrays.
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];

    int result [n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        result[i] = a[i] + b[n-1-i];
    } 

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    
    return 0;
}