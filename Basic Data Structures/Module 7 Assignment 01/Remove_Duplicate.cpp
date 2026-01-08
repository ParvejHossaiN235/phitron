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

    // Input linked list
    int val;
    while (cin >> val && val != -1) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Remove duplicates
    for (Node* cur = head; cur != NULL; cur = cur->next) {
        Node* prev = cur;
        Node* temp = cur->next;

        while (temp != NULL) {
            if (temp->val == cur->val) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
    }

    // Print final list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
