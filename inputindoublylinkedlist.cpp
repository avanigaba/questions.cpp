
#include <iostream>
using namespace std;

class Node {
public:
 int data;
Node* next;
Node* prev;

 Node(int val) {
    data = val;
 next = NULL;
 prev = NULL;
    }
};

void printnode(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
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

 Node* newNode = new Node(val);

 if (head == NULL) {
    head = newNode;
      tail = newNode;
 } else {
    tail->next = newNode;
      newNode->prev = tail;
            tail = newNode;
        }
    }

    printnode(head);

    return 0;
}
