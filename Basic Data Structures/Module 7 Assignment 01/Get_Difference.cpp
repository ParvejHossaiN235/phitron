/*
You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

Note: You must use singly linked list to solve this problem, otherwise you will not get marks.

Input Format

Input will contain the values of the singly linked list, and will terminate with -1.
*/

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        Node* newnode = new Node(val);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } 
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    if (head == NULL) {
        cout << 0;
        return 0;
    }

    int mx = head->val, mn = head->val;
    Node* temp = head;

    while (temp != NULL) {
        mx = max(mx, temp->val);
        mn = min(mn, temp->val);
        temp = temp->next;
    }

    cout << mx - mn;
    return 0;
}


