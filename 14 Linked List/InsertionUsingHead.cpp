// Using head pointer
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
void insertAtTail(node* &head, int val){
    node* temp = new node(val);
    if(head == NULL){
        head = temp;
        return;
    }
    node* n = head;
    while(n->next!=NULL){
        n = n->next;
    }
    n->next = temp;
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
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayLL(head);
    return 0;
}