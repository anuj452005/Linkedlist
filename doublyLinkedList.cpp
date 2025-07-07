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
void insertAtBeginning(Node* &head, int val){
    Node* newNode=new Node(val);
    if(head==nullptr){
        head=newNode;
        return;
    }
    newNode->next=head;
    head->back=newNode;
    head=newNode;
}

void printList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" <-> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void DeleteNode(Node* &head,int val){
    Node* curr=head;
    
    if(curr->data==val){
     head=curr->next;
     return;
    }
    while(curr!=nullptr && curr->data!=val){
       
        curr=curr->next;
    }
    if(curr==nullptr) return; // Value not found

    if(curr->next!=nullptr) {
        curr->next->back=curr->back; 
    }

    if(curr->back!=nullptr){
        curr->back->next=curr->next;
    }

}

int main(){
    Node* head=nullptr;


    return 0;
}