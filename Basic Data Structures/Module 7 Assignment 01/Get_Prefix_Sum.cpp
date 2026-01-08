/*
You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.

Input Format

First line will contain N.
Next line of contain the array A.
*/
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<long long> prefix(N);
    prefix[0] = A[0];

    for (int i = 1; i < N; i++)
    {
        prefix[i] = prefix[i -1] + A[i];
    }

    for (int i = N - 1; i >= 0; i--)
    {
        cout << prefix[i] << " ";
    }
    
    
    return 0;
}
