#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node* prev;
    node(int d):data(d), next(NULL), prev(NULL){}
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL)
        head->prev = n;
    head = n;
}
void insertion(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void deleteAtHead(node* &head){
    node* temp = head;
    head = temp->next;
    head->next = NULL;
    cout << "Deleting " << temp->data << endl;
    delete temp;
}
void deletion(node* &head){
    if(head == NULL){
        cout << "Empty linked list" << endl;
    }
    else if (head->next == NULL)
    {
        node* temp = head;
        head = head->next;
        cout << "Deleting " << temp->data << endl;
        temp->prev = NULL;
        delete temp;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        node* n = temp->next;
        cout << "Deleting " << n->data << endl;
        temp->next = NULL;
        n->prev = NULL;
        delete n;
    }
}
bool search(node* &head, int val){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    insertion(head, 1);
    insertion(head, 2);
    insertion(head, 3);
    insertion(head, 4);
    insertion(head, 5);
    displayLL(head);
    insertAtHead(head, 6);
    displayLL(head);
    deleteAtHead(head);
    displayLL(head);
    deletion(head);
    displayLL(head);
    return 0;
}