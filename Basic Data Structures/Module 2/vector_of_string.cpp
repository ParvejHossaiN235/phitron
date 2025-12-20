// Vector of String

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector <string> v(n);

    // space chara print
    // for (int i = 0; i < n; i++) 
    // {
    //     cin >> v[i];
    // }

    // space niye print
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    for (string s : v)    // rangebase for loop
    {
        cout << s << endl;
    }    
    
    return 0;
}

/*
input value =>

5
Rahim
Josim
Sakib
Rakib
Akib
*/