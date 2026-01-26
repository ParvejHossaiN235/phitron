/*

Problem Statement

There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You need to solve it using  Stack and Queue only.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.

*/


#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
       int x;
       cin >> x;
       st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != m) 
    {
        cout << "NO";
        return 0;
    }

    bool same = true;

    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (same)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}