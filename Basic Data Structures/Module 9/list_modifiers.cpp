#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 20};
    list<int> l2;

    // l2.assign(l.begin(),l.end());
   // l2 = l;

    //    l.push_back(40);
    //    l.push_front(100);

    //    l.pop_back();
    //    l.pop_front();

    // for (int val : l)
    // {
    //     cout << val << endl;
    // }

    // cout << *next(l.begin(), 1);

    // l.insert(next(l.begin(), 2), 100);

    // l.erase(next(l.begin(), 2));

    // replace(l.begin(), l.end(), 20, 69);

    auto it = find(l.begin(), l.end(), 20);

    if(it == l.end())
    {
        cout << "NOt found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}
