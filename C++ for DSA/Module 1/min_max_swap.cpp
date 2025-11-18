#include <iostream>
#include <algorithm> 
using namespace std;

int main ()
{
    int a, b;
    cin >> a >> b;

    // if (a < b)
    // {
    //     cout << b  << endl;
    // }
    // else
    // {
    //     cout << a  << endl;
    // }

    cout << min({10, 5, 9, 8, 7, 1}) << endl;
    //cout << min(a,b) << endl;
    cout << max(a,b) << endl;

    // swap
    swap(a,b);

    cout << a << " " << b << endl;

    return 0;
}