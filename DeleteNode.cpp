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
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

// Print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deletNode(Node* &head, int val){
    Node* curr=head;
    Node* prev=nullptr;
    if(curr->data==val){
        head=curr->next;
        return;
    }
    while(curr!=nullptr && curr->data!=val){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr; // Free the memory of the deleted node
}


int main(){
    Node *head=nullptr;
    for(int i=1;i<=5;i++){
        insertAtEnd(head, i); 
    }
    deletNode(head, 3); // Delete node with value 3
    cout << "Linked List after deletion: "; 
    printList(head); // Print the list after deletion
    cout << endl;


    return 0;
}