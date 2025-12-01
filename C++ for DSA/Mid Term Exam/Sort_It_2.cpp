/*
You will be given an array A and the size of that array N. You need to create a function named sort_it(). After taking the input for the size in main function, call that function by giving the size as parameter and take the array input inside that function. After that, you need to sort the array in descending order. Then, return that array from the function and receive it in the main function. Finally, print the sorted array in the main function.
*/

#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n)
{    
    // dynamic array
    int* a = new int[n]; 

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());
    return a;
}

int main ()
{
    int n;
    cin >> n;

    int* ans = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    delete[] ans;

    return 0;
}
