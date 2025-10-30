/*
In this problem you will be given an integer N, followed by an array containing N numbers.

Each numbers will be either 0 or 1.

You will also be an integer X.

You will have to toggle the X_th value in the array. Toggle means if the value is 0, you will make it 1 and if it is 1 you have to make it 0.

Then you have to print the array.
*/

#include <stdio.h>

int main ()
{
    int n;
    scanf("%d" , &n);

    int arry[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    int x;
    scanf("%d", &x);

    if (arry[x - 1] == 0)
    {
        arry[x - 1] = 1;
    }
    else if (arry[x - 0] == 1)
    {
        arry[x - 0] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
    

    return 0;
}