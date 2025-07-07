#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // constructor 
    Node(int val){
        data=val;
        next=nullptr;
    }
};

void insertAtEnd(Node* &head,int val){   
    // case when the list is empty
    Node* newNode=new Node(val);
    if(head==nullptr){
        head=newNode;
        return;
    }
    // case when the list is not empty
    Node* temp=head;
    // till we reach the last node
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtBeginning(Node* & head,int val){
    Node *newNode=new Node(val);
    newNode->next=head; // Point new node to the current head
    head=newNode;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}


int main(){
    Node* head = nullptr; // Initialize the head of the linked list
    for(int i=1;i<=5;i++){
        insertAtEnd(head,i);
    }
    cout<<"Linked List before insertion at beginning: ";
    printLinkedList(head);
    cout<<endl;
    insertAtBeginning(head, 0); // Insert 0 at the beginning
    cout<<"Linked List after insertion at beginning: ";
    printLinkedList(head);
    cout<<endl;

    return 0;
}