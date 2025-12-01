/*
You will be given an array A of size N. Initially, you need to print the array by sorting it in ascending order. Afterward, you need to print the array sorted in descending order.
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Sort ascending
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // Sort descending
    sort(a, a + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    
    return 0;
}