/*
Given 2 numbers N
 and Q
, an array A
 of N
 number and Q
 number of pairs L
, R
. For each query Q
 print a single line that contains the summation of all numbers from index L
 to index R
.

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
 where N
 is number of elements in A
 and Q
 is number of query pairs.

Second line contains N
 numbers(1≤Ai≤109)
.

Next Q
 lines contains L,R
 (1≤L≤R≤N)
.
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,q;
    cin >> n >> q;
    vector<long long int> v(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(n+1);
    pre[1] = v [1];

    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    

    while (q--)
    {
        int L, r;
        cin >> L >> r;
        int long long sum = 0;
        
        if (L == 1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[L-1];
        }
        

        cout << sum << endl;
        
    }   
    

    return 0;
}