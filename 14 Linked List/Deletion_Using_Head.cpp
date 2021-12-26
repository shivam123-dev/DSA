// Deletion using only head pointer
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val):data(val), next(NULL){}
};
void insertLL(node* &head, int val){
    node* n = new node(val);
    if(!head){
        head = n;
        return;
    }
    node* temp = head;
    n->next = temp;
    head = n;
}
void deleteAtHead(node* &head){
    if(!head){
        cout << "Empty Linked List" << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    cout << "Deleting " << temp->data << endl;
    delete temp;
}
void deleteAtTail(node* &head){
    if(!head){
        cout << "Empty Linked List" << endl;
        return;
    }
    node* temp = head;
    node* nextNode = temp->next;
    while(nextNode->next != NULL){
        nextNode = nextNode->next;
        temp = temp->next;
    }
    cout << "Deleting " << nextNode->data << endl;
    temp->next = NULL;
    delete nextNode;
}
void deleteInMiddle(node* &head, int pos){
    if(!head){
        cout << "Empty Linked List" << endl;
        return;
    }
    node* temp = head;
    node* nextNode = temp->next;
    while(nextNode->data != pos){
        nextNode = nextNode->next;
        temp = temp->next;
    }
    cout << "Deleting " << nextNode->data << endl;
    temp->next = nextNode->next;    
    delete nextNode;
}
void displayLL(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){
    node* head = NULL;
    insertLL(head, 1);
    insertLL(head, 2);
    insertLL(head, 3);
    insertLL(head, 4);
    displayLL(head);
    deleteAtHead(head);
    displayLL(head);
    deleteAtTail(head);
    displayLL(head);
    deleteInMiddle(head, 2);
    displayLL(head);
    return 0;
}