#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;

        int *A = new int[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool found = false;

        // sort first
        sort(A, A + N);

        for (int i = 0; i < N - 2 && !found; i++)
        {
            int left = i + 1;
            int right = N - 1;

            while (left < right)
            {
                int sum = A[i] + A[left] + A[right];

                if (sum == S)
                {
                    found = true;
                    break;
                }
                else if (sum < S)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }

        if (found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

       
    }

    return 0;
}
