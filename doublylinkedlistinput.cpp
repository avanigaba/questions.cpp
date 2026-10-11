
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void printnode(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    while (true) {
        int val;
        cin >> val;

        if (val == -1) {
            break;
        }

        Node* newnode = new Node(val);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    printnode(head);

    return 0;
}
