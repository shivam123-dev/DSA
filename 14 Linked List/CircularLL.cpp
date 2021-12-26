#include<iostream>
#include<vector>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d):data(d),next(NULL){}
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void deleteAtHead(node* &head){
    node* temp = head;
    head = head->next;
    node* fast = head;
    while(fast->next!=temp){
        fast = fast->next;
    }
    fast->next = head;
    cout << "Deleting " << temp->data << endl;
    delete temp;
}
void deleteAtTail(node* &head){
    node* temp = head;
    node* fast = head->next;
    while(fast->next != head){
        temp = temp->next;
        fast = fast->next;
    }
    temp->next = head;
    cout << "Deleting " << fast->data << endl;
    delete fast;
}
void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        head->next = head;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void displayLL(node* head){
    node* temp = head;
    // while(temp->next!=NULL)
    while(temp->next!=head)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    // cout << "NULL" << endl;
}
int main()
{
    node* head = NULL;
    vector<int> arr = {1, 2, 3, 4, 5};
    for(int i:arr){
        insertAtTail(head, i);
    }
    displayLL(head);
    insertAtHead(head, 6);
    displayLL(head);
    deleteAtHead(head);
    displayLL(head);
    deleteAtTail(head);
    return 0;
}