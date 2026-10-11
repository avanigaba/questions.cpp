#include<iostream>
using namespace std;
class Node{//structure of node
   public:
    int data;
    Node*next;//pointer
    Node(int val){
        data = val; 
        next = NULL;
    }

};
void printlinkedlist(Node*Head){
    Node*temp=Head;
    while (temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<" NUll\n";
}
int main(){
   
   // creation of object
    Node*Head = new Node(5);//first node is head
 Node*node2 = new Node(7);
Node*node3 = new Node(9);
Node*tail = new Node(8);
//link
Head->next= node2;
node2->next= node3;
node3->next= tail;
//print linkedlist
printlinkedlist(Head);
}