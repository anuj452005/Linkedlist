#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    // constructor
    Node(int val){
        data=val;
        next=nullptr;
        back=nullptr;
    }
};

void insertAtEnd(Node* &head,int val){
    Node* newNode=new Node(val);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->back=temp;
}


void printList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void reverseDoublyLinkedList(Node* &head){
   Node* prev=nullptr;
   Node*curr=head;
   if(head==nullptr){
       return;
   }
   while(curr!=nullptr){
    // swap the next and back pointers of the current node and move to next node
      prev=curr->back;
      curr->back=curr->next;
      curr->next=prev;
      curr=curr->back; // move to the next node which is now the previous node
   }
   if(prev != nullptr){
       head = prev->back;
   }
}

int main(){
    Node* head=nullptr;
    for(int i=1;i<=5;i++){
        insertAtEnd(head, i); 
    }
    cout << "Doubly Linked List before reversal: ";
    printList(head); // Print the list before reversal
    reverseDoublyLinkedList(head);
    cout << "Doubly Linked List after reversal: ";
    printList(head); // Print the list after reversal
    cout << endl;


    return 0;
}