// Using both head and tail pointers
#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node* &head, node* &tail, int val){
    node* n = new node(val);
    if(head == NULL){
        head = tail = n;
        return;
    }
    node* temp = tail;
    temp->next = n;
    tail = n;
}
void insertInMiddle(node* &head, int val, int pos){
    node* temp = head;
    node* n = new node(val);
    while(temp->data != pos){
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}
void displayLL(node* head){
    node* temp = head;
    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 4);
    displayLL(head);
    insertAtHead(head, 5);
    displayLL(head);
    insertInMiddle(head, 10, 2);
    displayLL(head);
    return 0;
}