/*
You will be given two strings S and X. You need to replace all X from string S with a '#' sign.
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s,x;
        cin >> s  >> x;

        size_t pos = s.find(x);

        while (pos != string::npos) {  
            s.replace(pos, x.size(), "#");  
            pos = s.find(x);  
        }

        cout << s << endl;
    }
    
    
    return 0;
}