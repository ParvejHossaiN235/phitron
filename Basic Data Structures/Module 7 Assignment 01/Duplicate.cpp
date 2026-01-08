/*
Problem Statement

You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

Input Format

First line will contain N.
Second line will contain the array A.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 1; i < N; i++) {
        if (A[i] == A[i - 1]) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
