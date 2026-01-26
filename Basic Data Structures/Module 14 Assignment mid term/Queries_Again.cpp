#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int v)
    {
        val = v;
        prev = NULL;
        next = NULL;
    }
};

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X > sz)
        {
            cout << "Invalid\n";
            continue;
        }

        Node *newNode = new Node(V);

        if (sz == 0)
        {
            head = tail = newNode;
        }
        else if (X == 0)
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else if (X == sz)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < X - 1; i++)
            {
                temp = temp->next;
            }

            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }

        sz++;

        cout << "L -> ";
        Node *cur = head;
        while (cur != NULL)
        {
            cout << cur->val << " ";
            cur = cur->next;
        }
        cout << "\n";

        cout << "R -> ";
        cur = tail;
        while (cur != NULL)
        {
            cout << cur->val << " ";
            cur = cur->prev;
        }
        cout << "\n";
    }

    return 0;
}
