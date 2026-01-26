#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> lst;
    string s;

    while (cin >> s)
    {
        if (s == "end")
            break;
        lst.push_back(s);
    }

    int Q;
    cin >> Q;

    auto cur = lst.begin();

    while (Q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string addr;
            cin >> addr;

            bool found = false;
            for (auto it = lst.begin(); it != lst.end(); it++)
            {
                if (*it == addr)
                {
                    cur = it;
                    cout << *cur << "\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "next")
        {
            auto temp = cur;
            temp++;

            if (temp != lst.end())
            {
                cur = temp;
                cout << *cur << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else if (cmd == "prev")
        {
            if (cur != lst.begin())
            {
                cur--;
                cout << *cur << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
    }

    return 0;
}
