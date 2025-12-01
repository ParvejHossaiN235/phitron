// String input with spaces

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int x;
    cin >> x;
    string s;
    // cin >> s;

    cin.ignore();  // remove enter
    getline(cin, s);    // String input with spaces
    cout << x << endl;
    cout << s << endl;
    return 0;
}