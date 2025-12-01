#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s = "Hello World";
    // s[0] = 'G';
    //  s2 = " Hi";
    // s+= s2;   // s = s + s2;  append another string.

    // s.push_back('A');    // add character to the last of the string.
    // s.pop_back();    // remove the last character of the string.

    // string s2 = "Hi Man";
    // s = s2;  // assign string
    // s.assign(s2);  // assign() assign string

    // s.erase(3, 2);  // erase characters from the string

    // s.replace(6,5, "Bangladesh");   // replace a portion of the string.

    s.insert(5, " Parvej");  // insert a portion to a specific position.

    cout << s << " " << endl;
    
    return 0;
}