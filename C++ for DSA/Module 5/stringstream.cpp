#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    getline(cin, s);

    cout << s << endl;

    stringstream ss(s);
    string word;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    int word_count = 0;
    while (ss >> word) 
    {
        cout << word << endl;
        word_count ++;
    }
    cout << word_count << endl;
    return 0;
}