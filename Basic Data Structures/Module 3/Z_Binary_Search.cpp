/*
Given 2 numbers N
 and Q
, array A of N numbers and Q queries each one contains a number X
.

For each query print a single line that contains "found" if the number X
 exists in array A
 otherwise, print "not found".

Input
First line contains two numbers N
, Q
 (1≤N,Q≤105)
.

Second line contains N
 numbers (1≤Ai≤109)
.

Next Q
 lines contains X
 (1≤X≤109)
.
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    
    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        int flag = 0;

        int L = 0;
        int R = n-1;

        while (L <= R)
        {
            int mid = (L+R) / 2;
            if(a[mid] == val) 
            {
                flag = 1;
                break;
            }
            else if(a[mid] > val)
            {
                R = mid - 1;
            }
            else
            {
                L = mid + 1;
            }        
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
        
        
    }
    
    
    return 0;
}