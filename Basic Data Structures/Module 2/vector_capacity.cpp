//Vector Capacity

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    // capacity 
    vector <int> v;
    cout << v.capacity() << endl;

    v.push_back(10);
    cout << v.capacity() << endl;

    v.clear();
    cout << v.size() << endl;
    return 0;
}