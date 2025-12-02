/*
Write a program to determine if a given string contains the word "Jessica." If the word is present in the string, the program should output "YES," otherwise it should output "NO."

NOTE: You need to find only "Jessica"; not "jessica" or "JeSsica" or any other form. Words are separated by spaces.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 

    string word;
    stringstream ss(s);

    bool found = false;

    while (ss >> word) {   
        if (word == "Jessica") {
            found = true;
            break;
        }
    }

    if (found) cout << "YES";
    else cout << "NO";

    return 0;
}
