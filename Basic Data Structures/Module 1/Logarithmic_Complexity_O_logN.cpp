//Logarithmic Complexity O(logN) holo loop er modde jei incriment and dicrement multiply hoye bare  or division hoye kome thakei Logarithmic Complexity O(logN) bole

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;

    // example 1
    // for (int i = 1; i <= n; i *= 2)
    // {
    //     cout << i << endl;
    // }


    // example 2
    // for (int i = n; i >= 1; i /= 3)
    // {
    //     cout << i << endl;
    // }


    // example 3
    int k = 2;
    for (int i = 1; i < n; i++)
    {
        cout << i << endl;
        i = i * k;
    }
    
    
    return 0;
}

// input value hobe => 1000