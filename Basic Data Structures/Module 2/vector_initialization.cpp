/*
STL => Standard Template Library

Vector initialization
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    // vector<int> v;  // type 1
    // vector<int> v(10);  // type 2   
    // cout << v.size() << endl;

    vector<int> v(10, -1);  // type 3
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    
    return 0;
}