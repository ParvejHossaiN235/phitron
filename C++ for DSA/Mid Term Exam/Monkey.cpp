/*
Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

Note: Input will be given by EOF.
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {

        static char letters[100000 + 5];
        int cnt = 0;

        for (char c : line) {
            if (c >= 'a' && c <= 'z') {
                letters[cnt++] = c;
            }
        }

        // sort
        sort(letters, letters + cnt);

        // print
        for (int i = 0; i < cnt; i++)
        {
            cout << letters[i];
        }

        cout << "\n";
    }

    return 0;
}

