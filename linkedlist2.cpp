#include <iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node*prev;
    Node*next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
  
void printNode(Node* node) {
   Node*temp=node;
    while (temp!= NULL) {
        cout << temp->data << " ";
        temp= temp->next;
    }
}
int main(){
    Node* node1= new Node(5);
    Node* node2= new Node(2);
    Node* node3= new Node(7);
    Node* node4= new Node(3);
    Node* node5= new Node(6);

    node1->next= node2;
    node2->prev= node1;
    node2->next= node3;
     node3->prev= node2;
     node3->next= node4;
    node4->prev= node3;
     node4->next= node5; 
      node5->prev= node4;

printNode(node1);





}