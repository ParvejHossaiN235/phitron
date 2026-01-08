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

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        // Insert at head
        if (X == 0) {
            Node* newnode = new Node(V);
            newnode->next = head;
            head = newnode;
            if (tail == NULL) tail = head;
        }

        // Insert at tail
        else if (X == 1) {
            Node* newnode = new Node(V);
            if (head == NULL) {
                head = newnode;
                tail = newnode;
            } else {
                tail->next = newnode;
                tail = newnode;
            }
        }

        // Delete at index V
        else if (X == 2) {
            if (head != NULL) {
                // delete head
                if (V == 0) {
                    Node* del = head;
                    head = head->next;
                    delete del;
                    if (head == NULL) tail = NULL;
                }
                // delete other index
                else {
                    Node* temp = head;
                    for (int i = 0; i < V - 1 && temp->next != NULL; i++) {
                        temp = temp->next;
                    }

                    if (temp->next != NULL) {
                        Node* del = temp->next;
                        temp->next = del->next;
                        if (del == tail) tail = temp;
                        delete del;
                    }
                }
            }
        }

        print_list(head);
    }

    return 0;
}
